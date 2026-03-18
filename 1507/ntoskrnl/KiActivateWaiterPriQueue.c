/*
 * XREFs of KiActivateWaiterPriQueue @ 0x140119EAC
 * Callers:
 *     KiPriQueueThreadPriorityChanged @ 0x14000A02C (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14000C528 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 * Callees:
 *     KiWakePriQueueWaiter @ 0x14000C440 (KiWakePriQueueWaiter.c)
 *     KiAttemptFastRemovePriQueue @ 0x140030FA0 (KiAttemptFastRemovePriQueue.c)
 */

_QWORD *__fastcall KiActivateWaiterPriQueue(ULONG_PTR a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rdi
  _QWORD **v5; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  result = (_QWORD *)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      result = KiAttemptFastRemovePriQueue(a1, (int *)&v6, -1);
      v4 = result;
      if ( result )
      {
        result = (_QWORD *)KiWakePriQueueWaiter((__int64)KeGetCurrentPrcb(), a1, (__int64)result, v6);
        if ( !(_BYTE)result )
        {
          ++*(_DWORD *)(a1 + 4);
          v5 = (_QWORD **)(a1 + 16LL * (int)v6 + 24);
          result = *v5;
          *v4 = *v5;
          v4[1] = v5;
          if ( (_QWORD **)result[1] != v5 )
            __fastfail(3u);
          result[1] = v4;
          *v5 = v4;
        }
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
