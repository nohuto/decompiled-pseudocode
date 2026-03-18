/*
 * XREFs of imp_WdfInterruptSetPolicy @ 0x1C0098B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C00A2118 (-SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFI.c)
 */

void __fastcall imp_WdfInterruptSetPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Interrupt,
        unsigned int Policy,
        __int32 Priority,
        unsigned __int64 TargetProcessorSet)
{
  FxInterrupt *v7; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp-20h] BYREF
  _GROUP_AFFINITY processorSet; // [rsp+38h] [rbp-18h] BYREF

  pFxInterrupt = 0LL;
  if ( !Interrupt )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1027uLL);
  v7 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxInterrupt *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4135 )
  {
    pFxInterrupt = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v7 = pFxInterrupt;
  }
  m_Globals = v7->m_Globals;
  if ( Policy > 5 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Bu, WPP_FxInterruptApi_cpp_Traceguids, Policy);
  }
  else
  {
    if ( (unsigned int)(Priority - 1) <= 2 )
    {
      *(_QWORD *)&processorSet.Group = 0LL;
      processorSet.Mask = TargetProcessorSet;
      FxInterrupt::SetPolicy(v7, (_WDF_INTERRUPT_POLICY)Policy, (_WDF_INTERRUPT_PRIORITY)Priority, &processorSet);
      return;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Cu, WPP_FxInterruptApi_cpp_Traceguids, Priority);
  }
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
