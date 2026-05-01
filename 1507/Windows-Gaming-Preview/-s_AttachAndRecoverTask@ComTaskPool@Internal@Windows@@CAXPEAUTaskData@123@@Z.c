/*
 * XREFs of ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x18000FC98
 * Callers:
 *     ?s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000F320 (-s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTA.c)
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18000FE14 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180010C44 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(
        struct Windows::Internal::ComTaskPool::TaskData *Block)
{
  __int64 v2; // rsi

  if ( (int)Windows::Internal::ComTaskPool::s_QueuePoolTask(
              *(unsigned int *)Block,
              *((unsigned int *)Block + 1),
              *((unsigned int *)Block + 2),
              *((_QWORD *)Block + 2)) < 0 )
  {
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( qword_180037A28 )
      *(_QWORD *)(qword_180037A28 + 24) = Block;
    else
      Windows::Internal::ComTaskPool::s_taskFloodingList = (__int64)Block;
    qword_180037A28 = (__int64)Block;
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  }
  else
  {
    v2 = *((_QWORD *)Block + 2);
    if ( v2 )
    {
      *((_QWORD *)Block + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    operator delete(Block);
  }
}
