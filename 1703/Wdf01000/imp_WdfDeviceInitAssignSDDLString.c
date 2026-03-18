/*
 * XREFs of imp_WdfDeviceInitAssignSDDLString @ 0x1C0031120
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000307C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030620 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitAssignSDDLString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  __int64 result; // rax
  FxString *v7; // rax
  FxString *v8; // rax
  FxString *Sddl; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = DeviceInit->DriverGlobals;
  result = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    if ( SDDLString )
    {
      result = FxValidateUnicodeString(v5, SDDLString);
      if ( (int)result >= 0 )
      {
        if ( DeviceInit->Security.Sddl )
          return FxDuplicateUnicodeString(
                   DeviceInit->Security.Sddl->m_Globals,
                   SDDLString,
                   &DeviceInit->Security.Sddl->m_UnicodeString);
        v7 = (FxString *)FxObjectHandleAlloc(v5, ExDefaultNonPagedPoolType, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
        if ( v7 )
          FxString::FxString(v7, v5);
        else
          v8 = 0LL;
        DeviceInit->Security.Sddl = v8;
        if ( v8 )
        {
          return FxDuplicateUnicodeString(
                   DeviceInit->Security.Sddl->m_Globals,
                   SDDLString,
                   &DeviceInit->Security.Sddl->m_UnicodeString);
        }
        else
        {
          WPP_IFR_SF_(v5, 2u, 0x12u, 0x10u, WPP_FxDeviceInitApi_cpp_Traceguids);
          return 3221225626LL;
        }
      }
    }
    else if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
    {
      return 3221225488LL;
    }
    else
    {
      Sddl = DeviceInit->Security.Sddl;
      if ( Sddl )
      {
        Sddl->Release(Sddl, 0LL, 630, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
        DeviceInit->Security.Sddl = 0LL;
      }
      return 0LL;
    }
  }
  return result;
}
