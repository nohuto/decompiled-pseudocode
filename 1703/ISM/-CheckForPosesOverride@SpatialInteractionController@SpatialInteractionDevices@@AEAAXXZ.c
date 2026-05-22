/*
 * XREFs of ?CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x18009A8A4
 * Callers:
 *     ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4 (-PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x18006681C (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     ?CheckForPoseOverride@SpatialInteractionController@SpatialInteractionDevices@@CAXPEAUHKEY__@@PEB_WPEAUPoseData@2@@Z @ 0x18009ABA8 (-CheckForPoseOverride@SpatialInteractionController@SpatialInteractionDevices@@CAXPEAUHKEY__@@PEB.c)
 *     Microsoft::WRL::Wrappers::HandleT__anonymous_namespace_::RegistryKeyTraits_::InternalClose @ 0x18009B440 (Microsoft--WRL--Wrappers--HandleT__anonymous_namespace_--RegistryKeyTraits_--InternalClose.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::CheckForPosesOverride(
        SpatialInteractionDevices::SpatialInteractionController *this)
{
  LSTATUS v2; // eax
  signed int v3; // ebx
  LSTATUS v4; // eax
  signed int v5; // ebx
  LSTATUS v6; // eax
  signed int v7; // ebx
  signed int LastError; // eax
  unsigned __int64 v9; // rcx
  signed int v10; // eax
  unsigned __int64 v11; // rcx
  PHKEY phkResult; // [rsp+20h] [rbp-79h]
  __int64 (__fastcall **v13)(); // [rsp+30h] [rbp-69h] BYREF
  HKEY v14; // [rsp+38h] [rbp-61h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+40h] [rbp-59h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-51h] BYREF
  WCHAR SubKey[64]; // [rsp+50h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  hKey = 0LL;
  v15 = off_1800A9918;
  v2 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Holographic\\ControllerPoses",
         0,
         0x20019u,
         &hKey);
  if ( v2 )
  {
    v3 = (unsigned __int16)v2 | 0x80070000;
    if ( v2 <= 0 )
      v3 = v2;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v3 = 0;
  }
  if ( v3 >= 0 )
  {
    LODWORD(phkResult) = *((unsigned __int16 *)this + 154);
    swprintf_s<64>(
      SubKey,
      L"%04x_%04x_%04x",
      *((unsigned __int16 *)this + 152),
      *((unsigned __int16 *)this + 153),
      phkResult);
    v14 = 0LL;
    v13 = off_1800A9918;
    v4 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &v14);
    if ( v4 )
    {
      v5 = (unsigned __int16)v4 | 0x80070000;
      if ( v4 <= 0 )
        v5 = v4;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
        (const char *)(unsigned int)v5);
    }
    else
    {
      v5 = 0;
    }
    if ( v5 >= 0 )
      goto LABEL_19;
    swprintf_s<64>(SubKey, L"%04x_%04x", *((unsigned __int16 *)this + 152), *((unsigned __int16 *)this + 153));
    v6 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &v14);
    if ( v6 )
    {
      v7 = (unsigned __int16)v6 | 0x80070000;
      if ( v6 <= 0 )
        v7 = v6;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
        (const char *)(unsigned int)v7);
    }
    else
    {
      v7 = 0;
    }
    if ( v7 >= 0 )
    {
LABEL_19:
      SpatialInteractionDevices::SpatialInteractionController::CheckForPoseOverride(
        v14,
        L"HoldingPose",
        (SpatialInteractionDevices::SpatialInteractionController *)((char *)this + 324));
      SpatialInteractionDevices::SpatialInteractionController::CheckForPoseOverride(
        v14,
        L"PointingPose",
        (SpatialInteractionDevices::SpatialInteractionController *)((char *)this + 356));
    }
    v13 = off_1800A9918;
    if ( v14
      && !(unsigned __int8)Microsoft::WRL::Wrappers::HandleT__anonymous_namespace_::RegistryKeyTraits_::InternalClose(&v13) )
    {
      LastError = GetLastError();
      v9 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v9 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v9);
      __debugbreak();
    }
  }
  v15 = off_1800A9918;
  if ( hKey
    && !(unsigned __int8)Microsoft::WRL::Wrappers::HandleT__anonymous_namespace_::RegistryKeyTraits_::InternalClose(&v15) )
  {
    v10 = GetLastError();
    v11 = (unsigned __int16)v10 | 0x80070000;
    if ( v10 <= 0 )
      v11 = (unsigned int)v10;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v11);
    __debugbreak();
  }
}
