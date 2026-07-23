/*
 * XREFs of TppSetTimer @ 0x18003C378
 * Callers:
 *     TpSetTimerEx @ 0x18003BFF0 (TpSetTimerEx.c)
 *     TppSetupNextWait @ 0x18003C704 (TppSetupNextWait.c)
 * Callees:
 *     TppETWTimerSet @ 0x18000193C (TppETWTimerSet.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18003C4AC (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18003C60C (TppEnqueueTimer.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18007A370 (RtlNtStatusToDosErrorNoTeb.c)
 */

void __fastcall TppSetTimer(__int64 a1, _RTL_SRWLOCK *a2, __int64 *a3, int a4, int a5)
{
  char v8; // r14
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  LONG v13; // eax

  if ( *a3 >= 0 )
  {
    v8 = 1;
    v9 = (__int64)&a2[1];
  }
  else
  {
    v8 = 0;
    v9 = (__int64)&a2[16];
  }
  *(_DWORD *)(a1 + 344) = a5;
  *(_DWORD *)(a1 + 348) = a4;
  if ( v8 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v12 = *a3;
    if ( !*a3 )
      v12 = 1LL;
    *(_QWORD *)(a1 + 328) = v12;
  }
  else
  {
    v10 = (_QWORD *)(a1 + 328);
    if ( a1 == -328 )
    {
      v13 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v13);
    }
    else
    {
      *v10 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    }
    if ( *v10 - *a3 < *v10 )
      *v10 = 0x7FFFFFFFFFFFFFFFLL;
    else
      *v10 -= *a3;
  }
  if ( MEMORY[0x7FFE0386] )
    TppETWTimerSet(v9, a1);
  RtlAcquireSRWLockExclusive(a2);
  TppEnqueueTimer(v9, a1);
  LOBYTE(v11) = v8;
  TppUpdateSubQueueTimer(v9, v11);
  RtlReleaseSRWLockExclusive(a2);
}
