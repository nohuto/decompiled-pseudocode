/*
 * XREFs of ?s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180004C10
 * Callers:
 *     <none>
 * Callees:
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180005BB0 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::s_CheckForDeadlockTimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // rbx

  if ( *((_BYTE *)Context + 97) )
  {
    v4 = 0LL;
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( *((_BYTE *)Context + 97) )
    {
      Windows::Internal::ComTaskPool::s_fCanReuseThreads = 0;
      v4 = Context[3];
      if ( v4 )
      {
        Context[3] = *(_QWORD *)(v4 + 24);
        *(_QWORD *)(v4 + 24) = 0LL;
        if ( Context[4] == v4 )
          Context[4] = 0LL;
      }
    }
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( v4 )
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask((struct Windows::Internal::ComTaskPool::TaskData *)v4);
  }
}
