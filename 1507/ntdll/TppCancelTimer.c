/*
 * XREFs of TppCancelTimer @ 0x18003CF70
 * Callers:
 *     TppWaitCompletion @ 0x18000B250 (TppWaitCompletion.c)
 *     TppCancelWait @ 0x18003C930 (TppCancelWait.c)
 *     TpSetTimerEx @ 0x18003CE70 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x18003ED60 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18007D560 (TpWaitForTimer.c)
 *     TppTimerpStopCallbackGeneration @ 0x18007DF70 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppETWTimerCancelled @ 0x180002350 (TppETWTimerCancelled.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppPHDelete @ 0x18003D0E0 (TppPHDelete.c)
 *     TppUpdateSubQueueTimer @ 0x18003D3C0 (TppUpdateSubQueueTimer.c)
 *     TppItePush @ 0x18007DED4 (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 */

char __fastcall TppCancelTimer(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  char v3; // bl
  bool v6; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 346) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 346) & 1) != 0 )
  {
    v9 = (__int64)&a2[1];
    if ( (*(_BYTE *)(a1 + 346) & 2) == 0 )
      v9 = (__int64)&a2[16];
    if ( MEMORY[0x7FFE0386] )
      TppETWTimerCancelled(v9, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 344) )
    {
      TppPHDelete(v9 + 16, a1 + 240);
      TppPHDelete(v9 + 8, a1 + 280);
      LOBYTE(v10) = v6;
      TppUpdateSubQueueTimer(v9, v10);
      *(_BYTE *)(a1 + 344) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 340) = 0;
      *(_QWORD *)(a1 + 320) = 0LL;
      *(_BYTE *)(a1 + 346) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 346) |= 4u;
      TppItePush(a1 + 328, v11);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
      NtWaitForAlertByThreadId((PVOID)(a1 + 328), 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 320) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
    return 0;
  }
}
