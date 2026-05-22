/*
 * XREFs of ?CheckForPoseOverride@SpatialInteractionController@SpatialInteractionDevices@@CAXPEAUHKEY__@@PEB_WPEAUPoseData@2@@Z @ 0x18009ABA8
 * Callers:
 *     ?CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x18009A8A4 (-CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ReadRegistryFloat @ 0x18009AB00 (ReadRegistryFloat.c)
 *     Microsoft::WRL::Wrappers::HandleT__anonymous_namespace_::RegistryKeyTraits_::InternalClose @ 0x18009B440 (Microsoft--WRL--Wrappers--HandleT__anonymous_namespace_--RegistryKeyTraits_--InternalClose.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::CheckForPoseOverride(
        HKEY a1,
        const wchar_t *a2,
        struct SpatialInteractionDevices::PoseData *a3)
{
  bool v4; // si
  bool v5; // r14
  LSTATUS v6; // eax
  signed int v7; // edi
  signed int LastError; // eax
  unsigned __int64 v9; // rcx
  __int64 (__fastcall **v10)(); // [rsp+30h] [rbp-10h] BYREF
  HKEY v11; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v10 = off_1800A9918;
  v4 = 1;
  v11 = 0LL;
  v5 = 1;
  v6 = RegOpenKeyExW(a1, a2, 0, 0x20019u, &v11);
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
  if ( v7 < 0 )
    goto LABEL_15;
  if ( (int)ReadRegistryFloat(v11, L"Translation_X", (float *)a3) >= 0
    && (int)ReadRegistryFloat(v11, L"Translation_Y", (float *)a3 + 1) >= 0 )
  {
    v4 = (int)ReadRegistryFloat(v11, L"Translation_Z", (float *)a3 + 2) < 0;
  }
  if ( (int)ReadRegistryFloat(v11, L"Orientation_X", (float *)a3 + 3) >= 0
    && (int)ReadRegistryFloat(v11, L"Orientation_Y", (float *)a3 + 4) >= 0
    && (int)ReadRegistryFloat(v11, L"Orientation_Z", (float *)a3 + 5) >= 0 )
  {
    v5 = (int)ReadRegistryFloat(v11, L"Orientation_W", (float *)a3 + 6) < 0;
  }
  if ( v4 )
  {
LABEL_15:
    *(_QWORD *)a3 = 0LL;
    *((_DWORD *)a3 + 2) = 0;
  }
  if ( v5 )
  {
    *(_QWORD *)((char *)a3 + 12) = 0LL;
    *((_DWORD *)a3 + 5) = 0;
    *((_DWORD *)a3 + 6) = 1065353216;
  }
  *((_WORD *)a3 + 14) = 257;
  v10 = off_1800A9918;
  if ( v11
    && !(unsigned __int8)Microsoft::WRL::Wrappers::HandleT__anonymous_namespace_::RegistryKeyTraits_::InternalClose(&v10) )
  {
    LastError = GetLastError();
    v9 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v9 = (unsigned int)LastError;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v9);
    JUMPOUT(0x18009AD58LL);
  }
}
