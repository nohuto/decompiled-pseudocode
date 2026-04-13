/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180009F30
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180007814 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z @ 0x180007D64 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180009768 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, __int64 a3)
{
  unsigned __int16 v3; // bx
  unsigned int v4; // edi
  HANDLE ProcessHeap; // rax
  unsigned int v6[14]; // [rsp+30h] [rbp-148h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-110h]
  int v8; // [rsp+80h] [rbp-F8h]
  _BYTE v9[208]; // [rsp+90h] [rbp-E8h] BYREF

  v3 = a2;
  v4 = (unsigned int)this;
  if ( (_DWORD)a3 || a2 == 254 )
  {
    wil::details::FeatureStateManager::RecordFeatureUsage(
      &wil::details::g_featureStateManager,
      (unsigned int)this,
      a2,
      a3);
  }
  else if ( !g_wil_details_preventOnDemandStagingConfigReads
         && !(unsigned int)wil_details_StagingConfig_Load(v6, 0, a3, v9) )
  {
    wil_details_StagingConfig_FireNotification(
      (struct wil_details_StagingConfig *)v6,
      (const struct __WIL__WNF_TYPE_ID *)v4,
      (const void *)v3);
    if ( v8 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
}
