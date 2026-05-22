/*
 * XREFs of ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x180088E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18008FC4C (-GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATI.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeTrackingCapabilities(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        enum SPATIAL_TRACKING_CAPABILITY_FLAGS *a3)
{
  __int128 v6; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v7; // rcx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  char *v11; // rbx
  __int64 v12; // rsi
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  DWORD v16; // [rsp+40h] [rbp-58h] BYREF
  int v17[2]; // [rsp+48h] [rbp-50h] BYREF
  _OWORD InBuffer[2]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *(_DWORD *)a3 = 0;
  memset(InBuffer, 0, sizeof(InBuffer));
  v6 = *(_OWORD *)a2;
  v7 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 7);
  v16 = 0;
  InBuffer[1] = v6;
  InBuffer[0] = SPATIAL_DYNAMIC_NODE_PROPERTY_TRACKING_CAPABILITIES;
  v8 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v7,
         0x5B8418u,
         InBuffer,
         0x20u,
         v17,
         8u,
         &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B6,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_9;
  }
  if ( v16 != 8 )
  {
    v10 = 440LL;
LABEL_5:
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v9);
    *(_DWORD *)a3 = 0;
    goto LABEL_11;
  }
  if ( v17[0] != 4 )
  {
    v10 = 441LL;
    goto LABEL_5;
  }
  v9 = 0;
  *(_DWORD *)a3 = v17[1];
LABEL_9:
  if ( v9 < 0 )
    goto LABEL_10;
LABEL_11:
  v11 = (char *)this - 8;
  v12 = *((_QWORD *)this + 7);
  v13 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v13 && *v13 )
  {
    HolographicDriverClientTrace::Instance();
    HolographicDriverClientTrace::GetDynamicNodeTrackingCapabilities_(v14, v11, v12 + 12, a2, *(_DWORD *)a3);
  }
  return 0LL;
}
