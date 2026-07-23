/*
 * XREFs of TppSingleTimerExpiration @ 0x18003EA58
 * Callers:
 *     TppTimerQueueExpiration @ 0x18003CAA0 (TppTimerQueueExpiration.c)
 * Callees:
 *     TppETWTimerExpiration @ 0x1800022D4 (TppETWTimerExpiration.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18003D3C0 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18003D524 (TppEnqueueTimer.c)
 *     TppWorkPost @ 0x18003EC38 (TppWorkPost.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppWaitTimerExpiration @ 0x18007746C (TppWaitTimerExpiration.c)
 *     TppIteWakeWaiters @ 0x18007DF04 (TppIteWakeWaiters.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx

  if ( MEMORY[0x7FFE0386] )
  {
    v11 = (__int64)&a2[1];
    if ( !a3 )
      v11 = (__int64)&a2[16];
    TppETWTimerExpiration(v11, a1);
  }
  v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
  v7 = *(_BYTE *)(a1 + 346) >> 2;
  *(_BYTE *)(a1 + 346) = 0;
  if ( (v7 & 1) == 0 )
  {
    if ( *(_BYTE *)(a1 + 345) )
    {
      *(_QWORD *)(a1 + 320) = 0LL;
      if ( !(unsigned __int8)TppWaitTimerExpiration(a1) )
        goto LABEL_6;
    }
    else
    {
      v8 = *(unsigned int *)(a1 + 340);
      if ( (_DWORD)v8 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 320) = v6;
        *(_QWORD *)(a1 + 320) += 10000 * v8;
        v10 = *(_QWORD *)(a1 + 320);
        if ( v10 <= v6 )
          *(_QWORD *)(a1 + 320) = v6 + 10000 * v8 - (v6 - v10) % (10000 * v8);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        TppEnqueueTimer((__int64)&a2[16], a1);
        TppUpdateSubQueueTimer((__int64)&a2[16], 0);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_6:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 340) = 0;
  *(_QWORD *)(a1 + 320) = 0LL;
  v12 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 328) = 0LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
  TppIteWakeWaiters(v12);
LABEL_7:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
