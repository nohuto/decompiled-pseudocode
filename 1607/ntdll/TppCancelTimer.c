/*
 * XREFs of TppCancelTimer @ 0x18003C258
 * Callers:
 *     TpReleaseTimer @ 0x18003A480 (TpReleaseTimer.c)
 *     TppWaitCompletion @ 0x18003AC50 (TppWaitCompletion.c)
 *     TpWaitForTimer @ 0x18003B8E0 (TpWaitForTimer.c)
 *     TppCancelWait @ 0x18003BE68 (TppCancelWait.c)
 *     TpSetTimerEx @ 0x18003BFF0 (TpSetTimerEx.c)
 *     TppTimerpStopCallbackGeneration @ 0x180064060 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppETWTimerCancelled @ 0x18000212C (TppETWTimerCancelled.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18003C4AC (TppUpdateSubQueueTimer.c)
 *     TppPHDelete @ 0x18003CAFC (TppPHDelete.c)
 *     TppItePush @ 0x180063FC4 (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

char __fastcall TppCancelTimer(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  char v3; // bl
  bool v6; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = (__int64)&a2[1];
    if ( (*(_BYTE *)(a1 + 354) & 2) == 0 )
      v9 = (__int64)&a2[16];
    if ( MEMORY[0x7FFE0386] )
      TppETWTimerCancelled(v9, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete(v9 + 16, a1 + 248);
      TppPHDelete(v9 + 8, a1 + 288);
      LOBYTE(v10) = v6;
      TppUpdateSubQueueTimer(v9, v10);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      TppItePush(a1 + 336, v11);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
      NtWaitForAlertByThreadId((PVOID)(a1 + 336), 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 0;
  }
}
