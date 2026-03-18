/*
 * XREFs of FxIoTargetValidateOpenParams @ 0x1C00215BC
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x1C00214A0 (imp_WdfIoTargetOpen.c)
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C00731D8 (WPP_IFR_SF_qqqqd.c)
 */

__int64 __fastcall FxIoTargetValidateOpenParams(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int16 v4; // r9
  _UNICODE_STRING *_a1; // rdx
  unsigned __int16 Length; // r8
  int _a2; // eax
  unsigned __int16 v8; // r9
  unsigned __int16 MaximumLength; // cx

  if ( OpenParams->Type != WdfIoTargetOpenUseExistingDevice )
  {
    if ( OpenParams->Type == WdfIoTargetOpenByName )
    {
      if ( OpenParams->TargetDeviceName.Buffer
        && OpenParams->TargetDeviceName.Length
        && OpenParams->TargetDeviceName.MaximumLength )
      {
        return 0LL;
      }
      v4 = 15;
      goto LABEL_36;
    }
    if ( OpenParams->Type != WdfIoTargetOpenReopen )
    {
      if ( OpenParams->Type != WdfIoTargetOpenLocalTargetByFile )
      {
        WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xEu, 0x12u, WPP_FxIoTargetAPI_cpp_Traceguids, OpenParams->Type, -1073741811);
        return 3221225485LL;
      }
      if ( !FxDriverGlobals->IsUserModeDriver )
      {
        v4 = 16;
LABEL_36:
        WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, v4, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741811);
        return 3221225485LL;
      }
      if ( *(_OWORD *)&OpenParams->EvtIoTargetQueryRemove != 0LL || OpenParams->EvtIoTargetRemoveComplete )
      {
        WPP_IFR_SF_qqqd(
          FxDriverGlobals,
          2u,
          0xEu,
          0x11u,
          WPP_FxIoTargetAPI_cpp_Traceguids,
          OpenParams->EvtIoTargetQueryRemove,
          OpenParams->EvtIoTargetRemoveCanceled,
          OpenParams->EvtIoTargetRemoveComplete,
          -1073741811);
        return 3221225485LL;
      }
      if ( !OpenParams->FileName.Buffer && !OpenParams->FileName.Length && !OpenParams->FileName.MaximumLength )
        return 0LL;
      _a1 = &OpenParams->FileName;
      Length = _a1->Length;
      if ( (_a1->Length & 1) != 0 )
      {
        _a2 = Length;
        v8 = 13;
LABEL_26:
        WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, v8, WPP_FxValidateFunctions_hpp_Traceguids_0, _a1, _a2, -1073741811);
        return 3221225485LL;
      }
      MaximumLength = _a1->MaximumLength;
      if ( (MaximumLength & 1) != 0 )
      {
        _a2 = MaximumLength;
        v8 = 14;
        goto LABEL_26;
      }
      if ( MaximumLength && !_a1->Buffer )
      {
        _a2 = MaximumLength;
        v8 = 15;
        goto LABEL_26;
      }
      if ( Length > MaximumLength )
      {
        WPP_IFR_SF_qddd(
          FxDriverGlobals,
          (unsigned __int8)_a1,
          6u,
          0x10u,
          WPP_FxValidateFunctions_hpp_Traceguids_0,
          _a1,
          Length,
          MaximumLength,
          -1073741811);
        return 3221225485LL;
      }
    }
    return 0LL;
  }
  if ( !OpenParams->TargetDeviceObject )
  {
    v4 = 12;
    goto LABEL_36;
  }
  if ( FxDriverGlobals->IsUserModeDriver )
  {
    v4 = 13;
    goto LABEL_36;
  }
  if ( OpenParams->TargetFileObject
    || *(_OWORD *)&OpenParams->EvtIoTargetQueryRemove == 0LL && !OpenParams->EvtIoTargetRemoveComplete )
  {
    return 0LL;
  }
  WPP_IFR_SF_qqqqd(
    FxDriverGlobals,
    (unsigned __int8)OpenParams,
    0xEu,
    0xEu,
    WPP_FxIoTargetAPI_cpp_Traceguids,
    OpenParams,
    OpenParams->EvtIoTargetQueryRemove,
    OpenParams->EvtIoTargetRemoveCanceled,
    OpenParams->EvtIoTargetRemoveComplete,
    -1073741811);
  return 3221225485LL;
}
