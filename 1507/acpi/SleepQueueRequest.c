/*
 * XREFs of SleepQueueRequest @ 0x1C00461B4
 * Callers:
 *     SleepStall @ 0x1C00476D0 (SleepStall.c)
 * Callees:
 *     PushFrame @ 0x1C0013EA4 (PushFrame.c)
 */

__int64 __fastcall SleepQueueRequest(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  __int64 *v5; // r9
  __int64 v6; // r10
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 *i; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v4 = PushFrame(a1, 1346718803, 0x40u, (__int64)ProcessSleep, (__int64 *)&v14);
  if ( v4 >= 0 )
  {
    byte_1C005AAE8 = KeAcquireSpinLockRaiseToDpc(&gmutSleep);
    v5 = &SleepQueue;
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = v14;
    v8 = MEMORY[0xFFFFF78000000008] + 10000 * v2;
    v14[6] = v8;
    v7[7] = a1;
    for ( i = (__int64 *)qword_1C005AAD8; i != &SleepQueue; i = (__int64 *)i[1] )
    {
      if ( v8 >= i[2] )
      {
        v10 = *i;
        v11 = v7 + 4;
        v7[4] = *i;
        v7[5] = i;
        if ( *(__int64 **)(v10 + 8) != i )
          __fastfail(3u);
        *(_QWORD *)(v10 + 8) = v11;
        *i = (__int64)v11;
        break;
      }
      v5 = i;
    }
    if ( (__int64 *)v5[1] == &SleepQueue )
    {
      v12 = SleepQueue;
      v7[4] = SleepQueue;
      v7[5] = &SleepQueue;
      if ( *(__int64 **)(v12 + 8) != &SleepQueue )
        __fastfail(3u);
      *(_QWORD *)(v12 + 8) = v7 + 4;
      SleepQueue = (__int64)(v7 + 4);
      ExSetTimer(SleepTimer, v6 - v7[6], 0LL, 0LL);
    }
    KeReleaseSpinLock(&gmutSleep, byte_1C005AAE8);
  }
  return (unsigned int)v4;
}
