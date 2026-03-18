/*
 * XREFs of imp_WdfInterruptGetInfo @ 0x1C0098540
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfInterruptGetInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Interrupt,
        _WDF_INTERRUPT_INFO *Info)
{
  WDFINTERRUPT__ *_a1; // rsi
  FxInterrupt *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int _a2; // eax
  unsigned int v8; // ebx
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  FxInterrupt *pFxInterrupt; // [rsp+78h] [rbp+20h] BYREF

  pFxInterrupt = 0LL;
  _a1 = (WDFINTERRUPT__ *)Interrupt;
  if ( !Interrupt )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1027uLL);
  v5 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Interrupt) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Interrupt = LOWORD(v5->__vftable);
    v5 = (FxInterrupt *)((char *)v5 - Interrupt);
  }
  if ( v5->m_Type == 4135 )
  {
    pFxInterrupt = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pFxInterrupt, _a1, 0x1027u, Interrupt);
    v5 = pFxInterrupt;
  }
  m_Globals = v5->m_Globals;
  if ( !Info )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  _a2 = Info->Size;
  v8 = 56;
  if ( Info->Size == 56 || (v8 = 64, _a2 == 64) )
  {
    memmove(Info, &v5->m_InterruptInfo, v8);
    Info->Size = v8;
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x1Au, WPP_FxInterruptApi_cpp_Traceguids, _a1, _a2, 64);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
