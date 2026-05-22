/*
 * XREFs of SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x180088B8C
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePurpose@234@PEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18008A960 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePur.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialGraphDriverClientHelpers::GetPosesAroundTime(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *a1,
        __int128 *a2,
        __int64 a3,
        void *a4,
        DWORD *a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  DWORD v9[4]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v10; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9[0] = 0;
  *a5 = 0;
  v10 = *a2;
  v11 = a3;
  v5 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         a1,
         0x5B4410u,
         &v10,
         0x18u,
         a4,
         0x140u,
         v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( !v9[0] )
  {
    v8 = 79LL;
LABEL_6:
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
    return v6;
  }
  if ( v9[0] % 0xA0uLL )
  {
    v8 = 80LL;
    goto LABEL_6;
  }
  *a5 = v9[0] / 0xA0;
  return 0LL;
}
