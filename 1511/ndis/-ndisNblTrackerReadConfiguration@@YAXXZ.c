/*
 * XREFs of ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C00FC210
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C00FC150 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_DDD @ 0x1C004A0C0 (WPP_SF_DDD_ea_1C004A0C0.c)
 */

void ndisNblTrackerReadConfiguration(void)
{
  unsigned int v0; // eax
  enum _NDIS_NBL_TRACKER_MODE v1; // r8d
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  ULONG VerifierFlags; // [rsp+34h] [rbp-CCh] BYREF
  enum _NDIS_NBL_TRACKER_MODE v4; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v5; // [rsp+3Ch] [rbp-C4h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+88h] [rbp-78h]
  int v9; // [rsp+90h] [rbp-70h]
  const wchar_t *v10; // [rsp+98h] [rbp-68h]
  void *v11; // [rsp+A0h] [rbp-60h]
  int v12; // [rsp+A8h] [rbp-58h]
  int *v13; // [rsp+B0h] [rbp-50h]
  int v14; // [rsp+B8h] [rbp-48h]
  __int64 v15; // [rsp+C0h] [rbp-40h]
  int v16; // [rsp+C8h] [rbp-38h]
  const wchar_t *v17; // [rsp+D0h] [rbp-30h]
  unsigned int *v18; // [rsp+D8h] [rbp-28h]
  int v19; // [rsp+E0h] [rbp-20h]
  unsigned int *v20; // [rsp+E8h] [rbp-18h]
  int v21; // [rsp+F0h] [rbp-10h]
  __int64 v22; // [rsp+F8h] [rbp-8h]
  int v23; // [rsp+100h] [rbp+0h]
  const wchar_t *v24; // [rsp+108h] [rbp+8h]
  unsigned int *v25; // [rsp+110h] [rbp+10h]
  int v26; // [rsp+118h] [rbp+18h]
  int *v27; // [rsp+120h] [rbp+20h]
  int v28; // [rsp+128h] [rbp+28h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  _BYTE v30[48]; // [rsp+138h] [rbp+38h] BYREF

  v4 = NdisTrackNblDisabled;
  v6 = 0;
  QueryTable.QueryRoutine = 0LL;
  v8 = 0LL;
  v15 = 0LL;
  v22 = 0LL;
  v29 = 0LL;
  QueryTable.Name = L"TrackNblOwner";
  QueryTable.EntryContext = &ndisNblTrackerMode;
  QueryTable.DefaultData = &v4;
  v10 = L"StuckNblReaction";
  v11 = &ndisNblTrackerStuckNblDisposition;
  v13 = &v2;
  v17 = L"NblTimeoutMs";
  v18 = &ndisNblTrackerNblTimeoutMilliseconds;
  v20 = &v5;
  v24 = L"NblTrackerHistorySize";
  QueryTable.Flags = 288;
  v9 = 288;
  v16 = 288;
  v23 = 288;
  v25 = &ndisNblTrackerHistorySize;
  QueryTable.DefaultType = 67108868;
  v12 = 67108868;
  v19 = 67108868;
  v26 = 67108868;
  v27 = &v6;
  v2 = 2;
  v5 = 30000;
  QueryTable.DefaultLength = 4;
  v14 = 4;
  v21 = 4;
  v28 = 4;
  memset(v30, 0, sizeof(v30));
  if ( RtlQueryRegistryValuesEx(1u, L"NDIS\\Parameters", &QueryTable, 0LL, 0LL) < 0 )
  {
    ndisNblTrackerMode = v4;
    ndisNblTrackerStuckNblDisposition = v2;
    v0 = v5;
    ndisNblTrackerNblTimeoutMilliseconds = v5;
  }
  else
  {
    v0 = ndisNblTrackerNblTimeoutMilliseconds;
  }
  if ( v0 )
  {
    if ( v0 < 0x64 )
      ndisNblTrackerNblTimeoutMilliseconds = 100;
  }
  else
  {
    ndisNblTrackerNblTimeoutMilliseconds = v5;
  }
  if ( !MmIsDriverVerifyingByAddress(DriverEntry) )
    goto LABEL_7;
  if ( ndisNblTrackerMode < NdisTrackNblLogOnly )
    ndisNblTrackerMode = NdisTrackNblLogOnly;
  VerifierFlags = 0;
  if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 && (VerifierFlags & 0x200000) != 0 )
  {
    v1 = ndisNblTrackerMode;
    if ( ndisNblTrackerMode < NdisTrackNblFullLogNoStack )
    {
      v1 = NdisTrackNblFullLogNoStack;
      ndisNblTrackerMode = NdisTrackNblFullLogNoStack;
    }
  }
  else
  {
LABEL_7:
    v1 = ndisNblTrackerMode;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_DDD(0xAu, &WPP_6a692414356915a11899ae4f03d1c3ae_Traceguids, v1, ndisNblTrackerStuckNblDisposition);
}
