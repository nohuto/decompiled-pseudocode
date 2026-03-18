/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1403E2F40
 * Callers:
 *     DisableUserkTraceLogging @ 0x1402A8D10 (DisableUserkTraceLogging.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1403E2A2C (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1403E2C1C (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x1403E3490 (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 *i; // rdx
  __int64 v2; // rcx
  REGHANDLE v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  REGHANDLE v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  REGHANDLE v9; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1403AAA20 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1403AB1A8, 0LL);
    for ( i = &qword_1403AB1B0; ; i = (__int64 *)(v2 + 352) )
    {
      v2 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v2 + 344) == &dword_1403AA9F8 )
      {
        v0 = (_QWORD *)*i;
        *i = *(_QWORD *)(v2 + 352);
        LookUpTableFlushComplete();
        if ( !qword_1403AB1B0 )
        {
          v3 = qword_1403AAB30;
          qword_1403AAB30 = 0LL;
          dword_1403AAB10 = 0;
          EtwUnregister(v3);
        }
        break;
      }
    }
    ExReleasePushLockExclusiveEx(&unk_1403AB1A8, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v4, v5);
    v6 = qword_1403AAA18;
    qword_1403AAA18 = 0LL;
    dword_1403AA9F8 = 0;
    EtwUnregister(v6);
    qword_1403AAA20 = 0LL;
    DestroyAggregateSession(v0, v7, v8);
  }
  else
  {
    v9 = qword_1403AAA18;
    qword_1403AAA18 = 0LL;
    dword_1403AA9F8 = 0;
    EtwUnregister(v9);
  }
}
