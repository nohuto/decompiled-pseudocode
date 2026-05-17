/*
 * XREFs of TppSetTimer @ 0x18003C388
 * Callers:
 *     TpSetTimerEx @ 0x18003C000 (TpSetTimerEx.c)
 *     TppSetupNextWait @ 0x18003C714 (TppSetupNextWait.c)
 * Callees:
 *     TppETWTimerSet @ 0x18000193C (TppETWTimerSet.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18003C4BC (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18003C61C (TppEnqueueTimer.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18007A380 (RtlNtStatusToDosErrorNoTeb.c)
 */

signed __int64 __fastcall TppSetTimer(__int64 a1, char *a2, __int64 *a3, __int64 a4, int a5)
{
  __int64 *v6; // r15
  volatile signed __int64 *v7; // rbp
  char v8; // r14
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v13; // rax
  unsigned int v14; // eax

  v6 = a3;
  v7 = (volatile signed __int64 *)a2;
  if ( *a3 >= 0 )
  {
    v8 = 1;
    v9 = (__int64)(a2 + 8);
  }
  else
  {
    v8 = 0;
    v9 = (__int64)(a2 + 128);
  }
  *(_DWORD *)(a1 + 344) = a5;
  *(_DWORD *)(a1 + 348) = a4;
  if ( v8 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v13 = *a3;
    if ( !*a3 )
      v13 = 1LL;
    *(_QWORD *)(a1 + 328) = v13;
  }
  else
  {
    v10 = (_QWORD *)(a1 + 328);
    if ( a1 == -328 )
    {
      v14 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v14);
    }
    else
    {
      a4 = 2147353520LL;
      a2 = (char *)RtlpFreezeTimeBias;
      a3 = (__int64 *)MEMORY[0x7FFE03B0];
      *v10 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    }
    if ( *v10 - *v6 < *v10 )
      *v10 = 0x7FFFFFFFFFFFFFFFLL;
    else
      *v10 -= *v6;
  }
  if ( MEMORY[0x7FFE0386] )
    TppETWTimerSet(v9, a1);
  RtlAcquireSRWLockExclusive((unsigned __int64)v7, a2, (__int64)a3, a4);
  TppEnqueueTimer(v9, a1);
  LOBYTE(v11) = v8;
  TppUpdateSubQueueTimer(v9, v11);
  return RtlReleaseSRWLockExclusive(v7);
}
