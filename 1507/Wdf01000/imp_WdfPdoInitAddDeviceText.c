/*
 * XREFs of imp_WdfPdoInitAddDeviceText @ 0x1C002E2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C002E464 (-FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C006B1B8 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddDeviceText(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceDescription,
        const _UNICODE_STRING *DeviceLocation,
        unsigned int LocaleId)
{
  unsigned int v5; // ebx
  _FX_DRIVER_GLOBALS *v9; // rdi
  unsigned __int16 Length; // cx
  int _a2; // eax
  unsigned __int16 v12; // cx
  int v13; // eax
  FxDeviceText *v14; // rax
  FxDeviceText *v15; // rsi
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r9
  unsigned int v23; // edx
  _LIST_ENTRY *Caller; // [rsp+68h] [rbp+0h]
  int v25; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], Caller);
  v9 = DeviceInit->DriverGlobals;
  if ( !DeviceDescription )
    FxVerifierNullBugCheck(v9, Caller);
  if ( !DeviceLocation )
    FxVerifierNullBugCheck(v9, Caller);
  if ( v9->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v9, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v25 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v9->Public.DriverName,
        (const char *)&v25,
        v9->Public.DriverName,
        (const char *)&v25);
      if ( v9->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  Length = DeviceDescription->Length;
  if ( (DeviceDescription->Length & 1) != 0 )
  {
    _a2 = Length;
    v20 = 13;
LABEL_34:
    WPP_IFR_SF_qdd(v9, 2u, 6u, v20, WPP_FxValidateFunctions_hpp_Traceguids_0, DeviceDescription, _a2, -1073741811);
    return 3221225485LL;
  }
  LOWORD(_a2) = DeviceDescription->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v20 = 14;
    goto LABEL_34;
  }
  if ( (_WORD)_a2 && !DeviceDescription->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v20 = 15;
    goto LABEL_34;
  }
  if ( Length > (unsigned __int16)_a2 )
  {
    WPP_IFR_SF_qddd(
      v9,
      (unsigned __int8)DeviceInit,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      DeviceDescription,
      Length,
      (unsigned __int16)_a2,
      -1073741811);
    return 3221225485LL;
  }
  v12 = DeviceLocation->Length;
  if ( (DeviceLocation->Length & 1) != 0 )
  {
    v13 = v12;
    v21 = 13;
LABEL_36:
    WPP_IFR_SF_qdd(v9, 2u, 6u, v21, WPP_FxValidateFunctions_hpp_Traceguids_0, DeviceLocation, v13, -1073741811);
    return 3221225485LL;
  }
  LOWORD(v13) = DeviceLocation->MaximumLength;
  if ( (v13 & 1) != 0 )
  {
    v13 = (unsigned __int16)v13;
    v21 = 14;
    goto LABEL_36;
  }
  if ( (_WORD)v13 && !DeviceLocation->Buffer )
  {
    v13 = (unsigned __int16)v13;
    v21 = 15;
    goto LABEL_36;
  }
  if ( v12 > (unsigned __int16)v13 )
  {
    WPP_IFR_SF_qddd(
      v9,
      (unsigned __int8)DeviceInit,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      DeviceLocation,
      v12,
      (unsigned __int16)v13,
      -1073741811);
    return 3221225485LL;
  }
  if ( DeviceInit->InitType != FxDeviceInitTypePdo )
  {
    WPP_IFR_SF_d(v9, 2u, 0x12u, 0x41u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
    return 3221225488LL;
  }
  v14 = (FxDeviceText *)FxPoolAllocator(v9, (_LIST_ENTRY *)&v9->FxPoolFrameworks, 1u, 0x20uLL, v9->Tag, Caller);
  v15 = v14;
  if ( v14 )
  {
    v14->m_Description = 0LL;
    v14->m_LocationInformation = 0LL;
    v14->m_LocaleId = 0;
    v14->m_Entry.Next = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v15->m_LocaleId = LocaleId;
    v16 = FxDuplicateUnicodeStringToString(v9, DeviceDescription);
    v15->m_Description = v16;
    if ( v16 )
    {
      v17 = FxDuplicateUnicodeStringToString(v9, DeviceLocation);
      v15->m_LocationInformation = v17;
      if ( v17 )
      {
        *DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY *)v15;
        DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY **)v15;
        return v5;
      }
      v5 = -1073741670;
      v22 = 68;
    }
    else
    {
      v5 = -1073741670;
      v22 = 67;
    }
    WPP_IFR_SF_d(v9, 2u, 0x12u, v22, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741670);
    FxDeviceText::`scalar deleting destructor'(v15, v23);
    return v5;
  }
  WPP_IFR_SF_d(v9, 2u, 0x12u, 0x42u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741670);
  return 3221225626LL;
}
