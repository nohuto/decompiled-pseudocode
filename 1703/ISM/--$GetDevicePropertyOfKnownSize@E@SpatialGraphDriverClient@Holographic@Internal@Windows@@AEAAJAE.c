/*
 * XREFs of ??$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAE@Z @ 0x18008C5F4
 * Callers:
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800896B0 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x180089780 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18009D7E2 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize<unsigned char>(
        __int64 a1,
        __int128 *a2,
        _BYTE *a3)
{
  __int128 v3; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v4; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  DWORD v10; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+44h] [rbp-34h] BYREF
  char v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *a2;
  v4 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 64);
  v10 = 0;
  v13 = v3;
  v6 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v4,
         0x5B8414u,
         &v13,
         0x10u,
         &v11,
         5u,
         &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x188,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( v10 != 5 )
  {
    v9 = 394LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( v11 != 1 )
  {
    v9 = 395LL;
    goto LABEL_5;
  }
  if ( a3 )
  {
    *a3 = v12;
  }
  else
  {
    *(_DWORD *)_o__errno() = 22;
    invalid_parameter_noinfo();
  }
  return 0LL;
}
