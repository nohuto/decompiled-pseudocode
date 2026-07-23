/*
 * XREFs of TppWaitCompletion @ 0x18000B250
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     TppSetupNextWait @ 0x18003D670 (TppSetupNextWait.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 */

__int64 __fastcall TppWaitCompletion(PTP_CALLBACK_INSTANCE Instance, __int64 a2, __int64 a3)
{
  _RTL_SRWLOCK *v3; // rsi
  __int64 v6; // r8
  signed int v7; // ebx
  char v8; // al
  __int64 v10; // r8

  v3 = (_RTL_SRWLOCK *)(a3 + 232);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 232));
  LOBYTE(v6) = 1;
  v7 = 0;
  if ( (unsigned __int8)TppCancelTimer(a3, *(_QWORD *)(a3 + 136) + 112LL, v6) )
    v7 = -1;
  if ( (*(_BYTE *)(a3 + 456) & 4) == 0 )
    TppBarrierAdjust(a3 + 56, 1LL);
  *(_QWORD *)(a3 + 352) = 0LL;
  v8 = *(_BYTE *)(a3 + 456);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 2) != 0 )
      v10 = a3 + 376;
    else
      v10 = 0LL;
    v7 += TppSetupNextWait(a3, *(_QWORD *)(a3 + 368), v10);
  }
  *(_BYTE *)(a3 + 456) = 0;
  if ( v7 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7);
    v7 = 0;
  }
  RtlReleaseSRWLockExclusive(v3);
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7) == -v7 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return TppExecuteWaitCallback(Instance);
}
