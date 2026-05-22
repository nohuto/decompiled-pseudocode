/*
 * XREFs of ReadRegistryFloat @ 0x18009AB00
 * Callers:
 *     ?CheckForPoseOverride@SpatialInteractionController@SpatialInteractionDevices@@CAXPEAUHKEY__@@PEB_WPEAUPoseData@2@@Z @ 0x18009ABA8 (-CheckForPoseOverride@SpatialInteractionController@SpatialInteractionDevices@@CAXPEAUHKEY__@@PEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall ReadRegistryFloat(HKEY a1, const WCHAR *a2, float *a3)
{
  LSTATUS ValueW; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  double v7; // xmm0_8
  float v8; // xmm1_4
  DWORD v9; // [rsp+40h] [rbp-38h] BYREF
  wchar_t String[16]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = 32;
  ValueW = RegGetValueW(a1, 0LL, a2, 2u, 0LL, String, &v9);
  if ( ValueW )
  {
    v5 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v5 = ValueW;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26E,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)v5);
    return v5;
  }
  else
  {
    v7 = _wtof(String);
    result = 0LL;
    v8 = v7;
    *a3 = v8;
  }
  return result;
}
