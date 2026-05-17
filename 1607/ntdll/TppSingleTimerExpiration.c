/*
 * XREFs of TppSingleTimerExpiration @ 0x18003CC28
 * Callers:
 *     TppTimerQueueExpiration @ 0x18003C880 (TppTimerQueueExpiration.c)
 * Callees:
 *     TppETWTimerExpiration @ 0x180001F88 (TppETWTimerExpiration.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18003C4BC (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18003C61C (TppEnqueueTimer.c)
 *     TppWorkPost @ 0x18003CDF4 (TppWorkPost.c)
 *     TppIteWakeWaiters @ 0x180064004 (TppIteWakeWaiters.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A7610 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppRaiseHandleStatus @ 0x1800FE514 (TppRaiseHandleStatus.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, volatile signed __int64 *a2, char a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // al
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx

  if ( MEMORY[0x7FFE0386] )
  {
    v18 = (__int64)(a2 + 1);
    if ( !a3 )
      v18 = (__int64)(a2 + 16);
    TppETWTimerExpiration(v18, a1);
  }
  v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive(a1 + 240, MEMORY[0x7FFE03B0], 2147353520LL, 2147352584LL);
  v9 = *(_BYTE *)(a1 + 354) >> 2;
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v9 & 1) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      v16 = *(_QWORD *)(a1 + 368);
      *(_QWORD *)(a1 + 328) = 0LL;
      v17 = ZwCancelWaitCompletionPacket(v16, 0LL);
      if ( v17 )
      {
        if ( v17 != 259 && v17 != -1073741536 )
          TppRaiseHandleStatus(v17, *(_QWORD *)(a1 + 360), a1);
        goto LABEL_6;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      *(_QWORD *)(a1 + 360) = 0LL;
    }
    else
    {
      v10 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v10 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 328) = v6;
        v12 = 10000 * v10;
        *(_QWORD *)(a1 + 328) += 10000 * v10;
        v13 = *(_QWORD *)(a1 + 328);
        if ( v13 <= v6 )
        {
          v13 = (v6 - v13) % v12;
          *(_QWORD *)(a1 + 328) = v6 + v12 - v13;
        }
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive((unsigned __int64)a2, (char *)v13, v7, v8);
        TppEnqueueTimer((__int64)(a2 + 16), a1);
        TppUpdateSubQueueTimer((__int64)(a2 + 16), 0, v14, v15);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_6:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v19 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  TppIteWakeWaiters(v19);
LABEL_7:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
