/*
 * XREFs of FxInitialize @ 0x1C0019B00
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0019790 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0017610 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C0019E00 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     FxRegistrySettingsInitialize @ 0x1C0019FF0 (FxRegistrySettingsInitialize.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C001A93C (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     FxRegisterBugCheckCallback @ 0x1C001AFA0 (FxRegisterBugCheckCallback.c)
 *     FxCacheBugCheckDriverInfo @ 0x1C001B308 (FxCacheBugCheckDriverInfo.c)
 *     ?FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C0039238 (-FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0070634 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     LockVerifierSection @ 0x1C008080C (LockVerifierSection.c)
 *     WPP_IFR_SF_Z @ 0x1C0080910 (WPP_IFR_SF_Z.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C0080F4C (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0081C48 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_DRIVER_CONFIG *a4)
{
  unsigned __int8 v7; // si
  _DRIVER_OBJECT *v8; // r8
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  int v12; // esi
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int128 v21; // xmm0
  const _GUID *v22; // [rsp+20h] [rbp-E0h]
  unsigned int Value; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD *v26; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v29[2]; // [rsp+90h] [rbp-70h] BYREF
  int v30; // [rsp+B0h] [rbp-50h]
  wchar_t v31; // [rsp+B4h] [rbp-4Ch]
  _OWORD v32[10]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+160h] [rbp+60h]
  wchar_t v34; // [rsp+168h] [rbp+68h]

  if ( MmIsDriverVerifying(DriverObject) )
  {
    v30 = *(_DWORD *)L"ns";
    v29[0] = *(_OWORD *)L"XdvVerifierOptions";
    v31 = aXdvverifieropt[18];
    ValueName.Buffer = (wchar_t *)v29;
    v7 = 1;
    v29[1] = *(_OWORD *)L"ierOptions";
    KeyHandle = 0LL;
    v14 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
    *(_DWORD *)&ValueName.Length = 2490404;
    v32[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
    v25 = 11141288;
    v15 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
    ObjectAttributes.Length = 48;
    v32[1] = v14;
    ObjectAttributes.RootDirectory = 0LL;
    v16 = *(_OWORD *)L"\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
    ObjectAttributes.Attributes = 576;
    v32[2] = v15;
    v17 = *(_OWORD *)L"ControlSet\\Control\\Session Manager\\Memory Management";
    v32[3] = v16;
    v18 = *(_OWORD *)L"et\\Control\\Session Manager\\Memory Management";
    v32[4] = v17;
    v19 = *(_OWORD *)L"ol\\Session Manager\\Memory Management";
    v32[5] = v18;
    v32[6] = v19;
    v32[7] = *(_OWORD *)L"on Manager\\Memory Management";
    v20 = *(_QWORD *)L"ment";
    v21 = *(_OWORD *)L"y Management";
    v32[8] = *(_OWORD *)L"er\\Memory Management";
    v32[9] = v21;
    v33 = v20;
    v34 = aRegistryMachin[84];
    v26 = v32;
    ObjectAttributes.ObjectName = (_UNICODE_STRING *)&v25;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
      && (int)FxRegKey::_QueryULong(KeyHandle, &ValueName, &Value) >= 0 )
    {
      v7 = (Value & 0x10000) == 0;
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    v7 = 0;
  }
  FxRegistrySettingsInitialize(FxDriverGlobals, RegistryPath, v7);
  FxIFRStart(FxDriverGlobals, RegistryPath, v8);
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_Z(FxDriverGlobals, v9, v10, v11, v22, RegistryPath);
  v12 = FxPoolInitialize(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
  if ( v12 < 0 )
  {
    FxIFRStop(FxDriverGlobals);
    return (unsigned int)v12;
  }
  else
  {
    if ( FxDriverGlobals->FxVerifierLock )
    {
      FxDriverGlobals->ThreadTableLock.m_Lock = 0LL;
      FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 1;
      FxVerifierLock::AllocateThreadTable(FxDriverGlobals);
    }
    FxCacheBugCheckDriverInfo(FxDriverGlobals);
    FxRegisterBugCheckCallback(FxDriverGlobals, DriverObject);
    if ( RegistryPath && !_FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(FxDriverGlobals, RegistryPath) )
      _FX_DRIVER_GLOBALS::RegisterClientVersion(FxDriverGlobals, RegistryPath);
    if ( FxDriverGlobals->FxVerifierOn )
      LockVerifierSection(FxDriverGlobals, RegistryPath);
    return 0LL;
  }
}
