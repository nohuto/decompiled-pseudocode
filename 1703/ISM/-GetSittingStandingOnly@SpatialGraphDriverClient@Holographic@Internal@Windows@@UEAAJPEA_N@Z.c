/*
 * XREFs of ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x180089780
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAE@Z @ 0x18008C5F4 (--$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAE.c)
 *     ?GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z @ 0x18008F73C (-GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetSittingStandingOnly(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        bool *a2)
{
  int DevicePropertyOfKnown; // eax
  unsigned int v5; // ebx
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  HolographicDriverClientTrace *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  DevicePropertyOfKnown = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize<unsigned char>(
                            (char *)this - 8,
                            &SPATIAL_GRAPH_DEVICE_PROPERTY_SITTING_STANDING_ONLY,
                            &v11);
  v5 = DevicePropertyOfKnown;
  if ( DevicePropertyOfKnown == -2147024846 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E2,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070032LL);
  }
  else
  {
    if ( DevicePropertyOfKnown < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1E6,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)DevicePropertyOfKnown);
      return v5;
    }
    *a2 = v11 != 0;
  }
  v7 = *((_QWORD *)this + 7);
  v8 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v8 )
  {
    if ( *v8 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::GetSittingStandingOnly_(v9, (char *)this - 8, (const struct _GUID *)(v7 + 12), *a2);
    }
  }
  return 0LL;
}
