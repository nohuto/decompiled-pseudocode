/*
 * XREFs of ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180005DD0
 * Callers:
 *     ?s_TPWake@CDelayedTask@ComTaskPool@Internal@Windows@@CAXPEAXE@Z @ 0x1800047F0 (-s_TPWake@CDelayedTask@ComTaskPool@Internal@Windows@@CAXPEAXE@Z.c)
 *     ?s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180004E40 (-s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTA.c)
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18000505C (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180005580 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(
        struct Windows::Internal::ComTaskPool::TaskData *a1)
{
  __int64 v2; // rcx

  if ( (int)Windows::Internal::ComTaskPool::s_QueuePoolTask(
              *(_DWORD *)a1,
              *((_DWORD *)a1 + 1),
              *((_DWORD *)a1 + 2),
              *((_QWORD *)a1 + 2)) < 0 )
  {
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( qword_1800F4748 )
      *(_QWORD *)(qword_1800F4748 + 24) = a1;
    else
      Windows::Internal::ComTaskPool::s_taskFloodingList = a1;
    qword_1800F4748 = (__int64)a1;
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  }
  else
  {
    v2 = *((_QWORD *)a1 + 2);
    if ( v2 )
    {
      *((_QWORD *)a1 + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    operator delete(a1);
  }
}
