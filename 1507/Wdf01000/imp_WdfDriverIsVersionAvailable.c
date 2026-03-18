/*
 * XREFs of imp_WdfDriverIsVersionAvailable @ 0x1C0072A20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dddd @ 0x1C00727A0 (WPP_IFR_SF_dddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

bool __fastcall imp_WdfDriverIsVersionAvailable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Driver,
        _WDF_DRIVER_VERSION_AVAILABLE_PARAMS *VersionAvailableParams)
{
  FxDriver *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDriver *pDriver; // [rsp+78h] [rbp+20h] BYREF

  if ( !Driver )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1001uLL);
  v4 = (FxDriver *)(~Driver & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Driver & 1) != 0 )
  {
    Offset = LOWORD(v4->FxNonPagedObject::FxObject::__vftable);
    v4 = (FxDriver *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4097 )
  {
    pDriver = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pDriver, (void *)Driver, 0x1001u, Offset);
    v4 = pDriver;
  }
  m_Globals = v4->m_Globals;
  if ( !VersionAvailableParams )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 0;
    }
  }
  if ( VersionAvailableParams->Size != 12 )
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      Driver,
      0x11u,
      0xEu,
      WPP_FxDriverApi_cpp_Traceguids,
      VersionAvailableParams->Size,
      12,
      -1073741820);
    return 0;
  }
  WPP_IFR_SF_dddd(
    m_Globals,
    4u,
    0x11u,
    0xFu,
    WPP_FxDriverApi_cpp_Traceguids,
    1,
    15,
    VersionAvailableParams->MajorVersion,
    VersionAvailableParams->MinorVersion);
  return VersionAvailableParams->MajorVersion == 1 && VersionAvailableParams->MinorVersion <= 0xF;
}
