/*
 * XREFs of KiActivateWaiterPriQueue @ 0x1400943C4
 * Callers:
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140094210 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400E7488 (KiPriQueueThreadPriorityChanged.c)
 * Callees:
 *     KiAttemptFastRemovePriQueue @ 0x140094430 (KiAttemptFastRemovePriQueue.c)
 *     KiWakePriQueueWaiter @ 0x140094500 (KiWakePriQueueWaiter.c)
 */

_QWORD *__fastcall KiActivateWaiterPriQueue(ULONG_PTR a1, unsigned int a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rdi
  _QWORD **v5; // rcx

  result = (_QWORD *)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      result = (_QWORD *)KiAttemptFastRemovePriQueue(a1);
      v4 = result;
      if ( result )
      {
        result = (_QWORD *)KiWakePriQueueWaiter(KeGetCurrentPrcb(), a1, result, a2);
        if ( !(_BYTE)result )
        {
          ++*(_DWORD *)(a1 + 4);
          v5 = (_QWORD **)(a1 + 16LL * (int)a2 + 24);
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
