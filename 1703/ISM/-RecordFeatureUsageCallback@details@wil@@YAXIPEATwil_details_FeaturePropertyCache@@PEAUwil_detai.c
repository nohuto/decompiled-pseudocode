/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180040670
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18003FF98 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        unsigned __int64 this,
        union wil_details_FeaturePropertyCache *a2,
        union wil_details_FeaturePropertyCache *a3,
        struct wil_details_RecordUsageResult *a4)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  void (*v7)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v8; // rdx

  v5 = this;
  if ( a2 )
  {
    if ( *(_DWORD *)a3 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
        this,
        a2);
    v6 = *((unsigned int *)a3 + 1);
    if ( (_DWORD)v6 )
    {
      v7 = g_wil_details_internalRecordFeatureUsage;
      v8 = *((unsigned int *)a3 + 2);
      if ( g_wil_details_internalRecordFeatureUsage || (v7 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      {
        this = v5;
LABEL_12:
        ((void (__fastcall *)(unsigned __int64, __int64, __int64, _QWORD))v7)(this, v8, v6, 0LL);
      }
    }
  }
  else
  {
    v7 = g_wil_details_internalRecordFeatureUsage;
    v8 = *((unsigned int *)a3 + 2);
    if ( g_wil_details_internalRecordFeatureUsage || (v7 = g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v6 = 0LL;
      goto LABEL_12;
    }
  }
}
