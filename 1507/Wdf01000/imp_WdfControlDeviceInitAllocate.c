/*
 * XREFs of imp_WdfControlDeviceInitAllocate @ 0x1C002CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C002CC50 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFDEVICE_INIT *__fastcall imp_WdfControlDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Driver,
        const _UNICODE_STRING *SDDLString)
{
  FxDriver *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v11; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+68h] [rbp+10h] BYREF
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
  if ( !SDDLString )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v13 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v13,
        m_Globals->Public.DriverName,
        (const char *)&v13);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 0LL;
    }
  }
  Length = SDDLString->Length;
  if ( (SDDLString->Length & 1) != 0 )
  {
    _a2 = Length;
    v11 = 13;
LABEL_24:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v11, WPP_FxValidateFunctions_hpp_Traceguids_0, SDDLString, _a2, -1073741811);
    return 0LL;
  }
  LOWORD(_a2) = SDDLString->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v11 = 14;
    goto LABEL_24;
  }
  if ( (_WORD)_a2 && !SDDLString->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v11 = 15;
    goto LABEL_24;
  }
  if ( Length <= (unsigned __int16)_a2 )
    return WDFDEVICE_INIT::_AllocateControlDeviceInit(v4, SDDLString);
  WPP_IFR_SF_qddd(
    m_Globals,
    Length,
    6u,
    0x10u,
    WPP_FxValidateFunctions_hpp_Traceguids_0,
    SDDLString,
    Length,
    (unsigned __int16)_a2,
    -1073741811);
  return 0LL;
}
