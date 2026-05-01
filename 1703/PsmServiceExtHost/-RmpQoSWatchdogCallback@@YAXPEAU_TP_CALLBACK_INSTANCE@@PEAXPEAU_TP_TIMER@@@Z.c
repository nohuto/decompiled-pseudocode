/*
 * XREFs of ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800010D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180001114 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 */

void __fastcall RmpQoSWatchdogCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_QOS_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  RtlEnterCriticalSection(&RmpGlobalLock);
  RtlQueryUnbiasedInterruptTime(&v4);
  RmpQoSCheckHostsSetTimer(a2, v4);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
