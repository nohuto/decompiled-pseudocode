/*
 * XREFs of imp_WdfDeviceAssignMofResourceName @ 0x1C002C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00105B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceAssignMofResourceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        const _UNICODE_STRING *MofResourceName)
{
  WDFDEVICE__ *_a1; // rsi
  FxDevice *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 Length; // dx
  int v8; // eax
  int _a2; // eax
  unsigned int v10; // edi
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v13; // r9
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v15; // [rsp+78h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+88h] [rbp+20h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - Device);
  }
  if ( v5->m_Type == 4098 )
  {
    pDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDevice, _a1, 0x1002u, Device);
    v5 = pDevice;
  }
  m_Globals = v5->m_Globals;
  if ( !MofResourceName )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v15 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v15,
        m_Globals->Public.DriverName,
        (const char *)&v15);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  Length = MofResourceName->Length;
  if ( (MofResourceName->Length & 1) != 0 )
  {
    v8 = Length;
    v13 = 13;
LABEL_27:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v13, WPP_FxValidateFunctions_hpp_Traceguids_0, MofResourceName, v8, -1073741811);
    return 3221225485LL;
  }
  LOWORD(v8) = MofResourceName->MaximumLength;
  if ( (v8 & 1) != 0 )
  {
    v8 = (unsigned __int16)v8;
    v13 = 14;
    goto LABEL_27;
  }
  if ( (_WORD)v8 && !MofResourceName->Buffer )
  {
    v8 = (unsigned __int16)v8;
    v13 = 15;
    goto LABEL_27;
  }
  if ( Length > (unsigned __int16)v8 )
  {
    WPP_IFR_SF_qddd(
      m_Globals,
      Length,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      MofResourceName,
      Length,
      (unsigned __int16)v8,
      -1073741811);
    return 3221225485LL;
  }
  if ( v5->m_MofResourceName.Buffer )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x15u, WPP_FxDeviceApiKm_cpp_Traceguids, _a1, -1073741808);
    return 3221225488LL;
  }
  _a2 = FxDuplicateUnicodeString(v5->m_Globals, MofResourceName, &v5->m_MofResourceName);
  v10 = _a2;
  if ( _a2 < 0 )
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x16u, WPP_FxDeviceApiKm_cpp_Traceguids, _a1, _a2);
  return v10;
}
