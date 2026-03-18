/*
 * XREFs of imp_WdfTimerStop @ 0x1C0007C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0007D00 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

unsigned __int8 __fastcall imp_WdfTimerStop(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Timer,
        unsigned __int8 Wait)
{
  FxTimer *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  int v9; // [rsp+58h] [rbp+10h] BYREF
  FxTimer *pFxTimer; // [rsp+68h] [rbp+20h] BYREF

  if ( !Timer )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1028uLL);
  v4 = (FxTimer *)(~Timer & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Timer & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxTimer *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4136 )
  {
    pFxTimer = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pFxTimer, (void *)Timer, 0x1028u, Offset);
    v4 = pFxTimer;
  }
  if ( !Wait )
    return FxTimer::Stop(v4, Wait);
  m_Globals = v4->m_Globals;
  if ( !m_Globals->FxVerifierOn )
    return FxTimer::Stop(v4, Wait);
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return FxTimer::Stop(v4, Wait);
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  v9 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v9,
    m_Globals->Public.DriverName,
    (const char *)&v9);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 0;
}
