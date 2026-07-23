/*
 * XREFs of TppSetTimer @ 0x18000B34C
 * Callers:
 *     TpSetTimerEx @ 0x18000AF20 (TpSetTimerEx.c)
 *     TppSetupNextWait @ 0x18000B9E4 (TppSetupNextWait.c)
 * Callees:
 *     TppETWTimerSet @ 0x180001BDC (TppETWTimerSet.c)
 *     TppUpdateSubQueueTimer @ 0x18000B484 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18000B5E8 (TppEnqueueTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180077430 (RtlNtStatusToDosErrorNoTeb.c)
 */

void __fastcall TppSetTimer(__int64 a1, _RTL_SRWLOCK *a2, __int64 *a3, int a4, int a5)
{
  char v8; // r14
  __int64 v9; // rdi
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  LONG v14; // eax

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
  *(_DWORD *)(a1 + 336) = a5;
  *(_DWORD *)(a1 + 340) = a4;
  if ( v8 )
  {
    *(_BYTE *)(a1 + 346) |= 2u;
    v13 = *a3;
    if ( !*a3 )
      v13 = 1LL;
    *(_QWORD *)(a1 + 320) = v13;
  }
  else
  {
    v10 = (__int64 *)(a1 + 320);
    if ( a1 == -320 )
    {
      v14 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v14);
    }
    else
    {
      *v10 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    }
    v11 = *v10 - *a3;
    if ( v11 < *v10 )
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    *v10 = v11;
  }
  if ( MEMORY[0x7FFE0386] )
    TppETWTimerSet(v9, a1);
  RtlAcquireSRWLockExclusive(a2);
  TppEnqueueTimer(v9, a1);
  LOBYTE(v12) = v8;
  TppUpdateSubQueueTimer(v9, v12);
  RtlReleaseSRWLockExclusive(a2);
}
