/*
 * XREFs of TppSingleTimerExpiration @ 0x18003CC18
 * Callers:
 *     TppTimerQueueExpiration @ 0x18003C870 (TppTimerQueueExpiration.c)
 * Callees:
 *     TppETWTimerExpiration @ 0x180001F88 (TppETWTimerExpiration.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18003C4AC (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18003C60C (TppEnqueueTimer.c)
 *     TppWorkPost @ 0x18003CDE4 (TppWorkPost.c)
 *     TppIteWakeWaiters @ 0x180063FF4 (TppIteWakeWaiters.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A7610 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppRaiseHandleStatus @ 0x1800FE514 (TppRaiseHandleStatus.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  unsigned __int32 v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx

  if ( MEMORY[0x7FFE0386] )
  {
    v13 = (__int64)&a2[1];
    if ( !a3 )
      v13 = (__int64)&a2[16];
    TppETWTimerExpiration(v13, a1);
  }
  v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v7 = *(_BYTE *)(a1 + 354) >> 2;
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v7 & 1) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      v11 = *(void **)(a1 + 368);
      *(_QWORD *)(a1 + 328) = 0LL;
      v12 = ZwCancelWaitCompletionPacket(v11, 0);
      if ( v12 )
      {
        if ( v12 != 259 && v12 != -1073741536 )
          TppRaiseHandleStatus(v12, *(_QWORD *)(a1 + 360), a1);
        goto LABEL_6;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      *(_QWORD *)(a1 + 360) = 0LL;
    }
    else
    {
      v8 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v8 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 328) = v6;
        *(_QWORD *)(a1 + 328) += 10000 * v8;
        v10 = *(_QWORD *)(a1 + 328);
        if ( v10 <= v6 )
          *(_QWORD *)(a1 + 328) = v6 + 10000 * v8 - (v6 - v10) % (10000 * v8);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        TppEnqueueTimer((__int64)&a2[16], a1);
        TppUpdateSubQueueTimer((__int64)&a2[16], 0);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_6:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v14 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  TppIteWakeWaiters(v14);
LABEL_7:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
