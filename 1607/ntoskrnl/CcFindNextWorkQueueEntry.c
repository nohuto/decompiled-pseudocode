/*
 * XREFs of CcFindNextWorkQueueEntry @ 0x140071B5C
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x14006D314 (CcCompleteAsyncReadWorker.c)
 *     CcWorkerThread @ 0x140071500 (CcWorkerThread.c)
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CcFindNextWorkQueueEntry(_QWORD *a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // r8
  char v3; // al
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v1 = (_QWORD *)*a1;
  v2 = 0LL;
  if ( (_QWORD *)*a1 != a1 )
  {
    v3 = *((_BYTE *)v1 + 120);
    v2 = (_QWORD *)*a1;
    if ( v3 == 4 && ((unsigned int)CcNumberActiveWorkerThreads > 1 || (unsigned int)CcActiveExtraWriteBehindThreads > 1) )
    {
      if ( !CcQueueThrottle )
      {
        CcThreadsActiveBeforeThrottle = CcNumberActiveWorkerThreads;
        CcExtraWBThreadsActiveBeforeThrottle = CcActiveExtraWriteBehindThreads;
      }
      CcQueueThrottle = 1;
      return 0LL;
    }
    else
    {
      if ( v3 == 2 )
      {
        *(_QWORD *)(v1[2] + 496LL) = 0LL;
      }
      else if ( v3 == 1 )
      {
        *(_QWORD *)(*(_QWORD *)(v1[2] + 48LL) + 112LL) = 0LL;
      }
      v4 = *v1;
      v5 = (_QWORD *)v1[1];
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v5 != v1 )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      v1[1] = 0LL;
      *v1 = 0LL;
    }
  }
  return v2;
}
