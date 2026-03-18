/*
 * XREFs of imp_WdfDriverGetRegistryPath @ 0x1C0072910
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

wchar_t *__fastcall imp_WdfDriverGetRegistryPath(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Driver)
{
  FxDriver *v2; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  FxDriver *pDriver; // [rsp+60h] [rbp+18h] BYREF

  if ( !Driver )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1001uLL);
  v2 = (FxDriver *)(~Driver & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Driver & 1) != 0 )
  {
    Offset = LOWORD(v2->FxNonPagedObject::FxObject::__vftable);
    v2 = (FxDriver *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4097 )
  {
    pDriver = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pDriver, (void *)Driver, 0x1001u, Offset);
    v2 = pDriver;
  }
  m_Globals = v2->m_Globals;
  if ( !m_Globals->FxVerifierOn )
    return v2->m_RegistryPath.Buffer;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return v2->m_RegistryPath.Buffer;
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 0LL;
}
