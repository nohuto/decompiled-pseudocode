/*
 * XREFs of imp_WdfInterruptGetInfo @ 0x1C0091AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfInterruptGetInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_INFO *Info)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int _a2; // eax
  unsigned int v7; // ebx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxInterrupt *pFxInterrupt; // [rsp+50h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  m_Globals = pFxInterrupt->m_Globals;
  if ( !Info )
    FxVerifierNullBugCheck(pFxInterrupt->m_Globals, retaddr);
  _a2 = Info->Size;
  v7 = 56;
  if ( Info->Size == 56 || (v7 = 64, _a2 == 64) )
  {
    memmove(Info, &pFxInterrupt->m_InterruptInfo, v7);
    Info->Size = v7;
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x19u, WPP_FxInterruptApi_cpp_Traceguids, Interrupt, _a2, 64);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
