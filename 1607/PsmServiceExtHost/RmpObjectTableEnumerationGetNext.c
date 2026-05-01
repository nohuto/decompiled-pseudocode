/*
 * XREFs of RmpObjectTableEnumerationGetNext @ 0x1800352C0
 * Callers:
 *     RmpTracingControlCallback @ 0x18001F6F0 (RmpTracingControlCallback.c)
 *     RmpResourceSetTableEnumerationGetNext @ 0x18002E6CC (RmpResourceSetTableEnumerationGetNext.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180034D40 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 */

__int64 __fastcall RmpObjectTableEnumerationGetNext(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rbx
  _BYTE *i; // rdx

  v1 = (__int64 *)a1[2];
  if ( !v1 || (v2 = *v1, (v2 & 1) != 0) )
  {
    for ( i = (_BYTE *)(a1[3] + 8LL); ; i += 8 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(a1[1] + 8LL) + 8 * ((unsigned __int64)*(unsigned int *)(a1[1] + 4LL) >> 5) )
      {
        v2 = 0LL;
        goto LABEL_9;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v2 = *(_QWORD *)i;
    a1[3] = i;
  }
  a1[2] = v2;
LABEL_9:
  if ( !v2 )
    return 0LL;
  RmpObjectAddRef(v2);
  return v2;
}
