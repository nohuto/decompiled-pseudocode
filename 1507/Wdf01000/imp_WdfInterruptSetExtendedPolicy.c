/*
 * XREFs of imp_WdfInterruptSetExtendedPolicy @ 0x1C00989E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C00A2118 (-SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFI.c)
 */

void __fastcall imp_WdfInterruptSetExtendedPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Interrupt,
        _WDF_INTERRUPT_EXTENDED_POLICY *PolicyAndGroup)
{
  FxInterrupt *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _WDF_INTERRUPT_POLICY Policy; // edx
  _WDF_INTERRUPT_PRIORITY Priority; // r8d
  FxInterrupt *pFxInterrupt; // [rsp+78h] [rbp+38h] BYREF

  pFxInterrupt = 0LL;
  if ( !Interrupt )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1027uLL);
  v4 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxInterrupt *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4135 )
  {
    pFxInterrupt = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v4 = pFxInterrupt;
  }
  m_Globals = v4->m_Globals;
  if ( PolicyAndGroup->Size == 32 )
  {
    Policy = PolicyAndGroup->Policy;
    Priority = PolicyAndGroup->Priority;
    if ( (unsigned int)Policy > WdfIrqPolicySpreadMessagesAcrossAllProcessors )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Eu, WPP_FxInterruptApi_cpp_Traceguids, Policy);
    }
    else if ( (unsigned int)(Priority - 1) > 2 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Fu, WPP_FxInterruptApi_cpp_Traceguids, Priority);
    }
    else
    {
      if ( !PolicyAndGroup->TargetProcessorSetAndGroup.Reserved[0]
        && !PolicyAndGroup->TargetProcessorSetAndGroup.Reserved[1]
        && !PolicyAndGroup->TargetProcessorSetAndGroup.Reserved[2] )
      {
        FxInterrupt::SetPolicy(v4, Policy, Priority, &PolicyAndGroup->TargetProcessorSetAndGroup);
        return;
      }
      WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0x20u, WPP_FxInterruptApi_cpp_Traceguids);
    }
  }
  else
  {
    WPP_IFR_SF_qdd(
      m_Globals,
      2u,
      0xCu,
      0x1Du,
      WPP_FxInterruptApi_cpp_Traceguids,
      PolicyAndGroup,
      PolicyAndGroup->Size,
      32);
  }
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
