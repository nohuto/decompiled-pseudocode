/*
 * XREFs of TppCancelTimer @ 0x18003C268
 * Callers:
 *     TpReleaseTimer @ 0x18003A490 (TpReleaseTimer.c)
 *     TppWaitCompletion @ 0x18003AC60 (TppWaitCompletion.c)
 *     TpWaitForTimer @ 0x18003B8F0 (TpWaitForTimer.c)
 *     TppCancelWait @ 0x18003BE78 (TppCancelWait.c)
 *     TpSetTimerEx @ 0x18003C000 (TpSetTimerEx.c)
 *     TppTimerpStopCallbackGeneration @ 0x180064070 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppETWTimerCancelled @ 0x18000212C (TppETWTimerCancelled.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18003C4BC (TppUpdateSubQueueTimer.c)
 *     TppPHDelete @ 0x18003CB0C (TppPHDelete.c)
 *     TppItePush @ 0x180063FD4 (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

char __fastcall TppCancelTimer(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // r12
  bool v7; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1;
  v5 = a3;
  v7 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v10 = (__int64)(a2 + 8);
    if ( (*(_BYTE *)(a1 + 354) & 2) == 0 )
      v10 = (__int64)(a2 + 128);
    if ( MEMORY[0x7FFE0386] )
      TppETWTimerCancelled(v10, a1);
    RtlAcquireSRWLockExclusive((unsigned __int64)a2, a2, a3, a4);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete(v10 + 16, a1 + 248);
      TppPHDelete(v10 + 8, a1 + 288);
      LOBYTE(v11) = v7;
      TppUpdateSubQueueTimer(v10, v11);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !v5 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    else
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      TppItePush(a1 + 336, v15);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      NtWaitForAlertByThreadId(a1 + 336, 0LL);
      if ( v5 )
        RtlAcquireSRWLockExclusive(a1 + 240, v12, v13, v14);
      return 0;
    }
    return v4;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !(_BYTE)a3 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    return 0;
  }
}
