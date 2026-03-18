/*
 * XREFs of imp_WdfDeviceInitAssignSDDLString @ 0x1C002E140
 * Callers:
 *     <none>
 * Callees:
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000FEE4 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00105B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitAssignSDDLString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  unsigned __int16 Length; // dx
  int v7; // eax
  FxString *v8; // rax
  FxString *v9; // rax
  unsigned __int8 CurrentIrql; // al
  FxString *Sddl; // rcx
  unsigned __int16 v13; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+68h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v5 = DeviceInit->DriverGlobals;
  if ( DeviceInit->DriverGlobals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v5, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v15 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v5->Public.DriverName,
        (const char *)&v15,
        v5->Public.DriverName,
        (const char *)&v15);
      if ( v5->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  if ( SDDLString )
  {
    Length = SDDLString->Length;
    if ( (SDDLString->Length & 1) != 0 )
    {
      v7 = Length;
      v13 = 13;
    }
    else
    {
      LOWORD(v7) = SDDLString->MaximumLength;
      if ( (v7 & 1) != 0 )
      {
        v7 = (unsigned __int16)v7;
        v13 = 14;
      }
      else
      {
        if ( !(_WORD)v7 || SDDLString->Buffer )
        {
          if ( Length <= (unsigned __int16)v7 )
          {
            if ( DeviceInit->Security.Sddl )
              return FxDuplicateUnicodeString(
                       DeviceInit->Security.Sddl->m_Globals,
                       SDDLString,
                       &DeviceInit->Security.Sddl->m_UnicodeString);
            v8 = (FxString *)FxObjectHandleAlloc(
                               v5,
                               ExDefaultNonPagedPoolType,
                               0x78uLL,
                               0,
                               0LL,
                               0,
                               FxObjectTypeExternal);
            if ( v8 )
              FxString::FxString(v8, v5);
            else
              v9 = 0LL;
            DeviceInit->Security.Sddl = v9;
            if ( v9 )
              return FxDuplicateUnicodeString(
                       DeviceInit->Security.Sddl->m_Globals,
                       SDDLString,
                       &DeviceInit->Security.Sddl->m_UnicodeString);
            WPP_IFR_SF_(v5, 2u, 0x12u, 0x10u, WPP_FxDeviceInitApi_cpp_Traceguids);
            return 3221225626LL;
          }
          WPP_IFR_SF_qddd(
            v5,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            SDDLString,
            Length,
            (unsigned __int16)v7,
            -1073741811);
          return 3221225485LL;
        }
        v7 = (unsigned __int16)v7;
        v13 = 15;
      }
    }
    WPP_IFR_SF_qdd(v5, 2u, 6u, v13, WPP_FxValidateFunctions_hpp_Traceguids_0, SDDLString, v7, -1073741811);
    return 3221225485LL;
  }
  if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
    return 3221225488LL;
  Sddl = DeviceInit->Security.Sddl;
  if ( Sddl )
  {
    Sddl->Release(Sddl, 0LL, 630, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
    DeviceInit->Security.Sddl = 0LL;
  }
  return 0LL;
}
