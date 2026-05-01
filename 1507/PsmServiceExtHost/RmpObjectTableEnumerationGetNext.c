/*
 * XREFs of RmpObjectTableEnumerationGetNext @ 0x180006188
 * Callers:
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     RmpObjectTableDestroy @ 0x180041200 (RmpObjectTableDestroy.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180041960 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectTableEnumerationGetNext(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 *i; // rdx

  v2 = (__int64 *)a1[2];
  if ( v2 && (result = *v2, (*v2 & 1) == 0) )
  {
LABEL_7:
    a1[2] = result;
  }
  else
  {
    for ( i = (__int64 *)(a1[3] + 8LL);
          (unsigned __int64)i < *(_QWORD *)(a1[1] + 8LL) + 8 * ((unsigned __int64)*(unsigned int *)(a1[1] + 4LL) >> 5);
          ++i )
    {
      if ( (*(_BYTE *)i & 1) == 0 )
      {
        result = *i;
        a1[3] = i;
        goto LABEL_7;
      }
    }
    result = 0LL;
  }
  if ( !result )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(result + 16));
  return result;
}
