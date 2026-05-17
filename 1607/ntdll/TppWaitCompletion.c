/*
 * XREFs of TppWaitCompletion @ 0x18003AC60
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003C268 (TppCancelTimer.c)
 *     TppSetupNextWait @ 0x18003C714 (TppSetupNextWait.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWaitCompletion(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  signed int v9; // edi
  char v10; // al
  __int64 v12; // r8

  v4 = (volatile signed __int64 *)(a3 + 240);
  RtlAcquireSRWLockExclusive(a3 + 240, a2, a3, a4);
  LOBYTE(v7) = 1;
  v9 = 0;
  if ( (unsigned __int8)TppCancelTimer(a3, *(_QWORD *)(a3 + 144) + 112LL, v7) )
    v9 = -1;
  if ( (*(_BYTE *)(a3 + 464) & 4) == 0 )
    TppBarrierAdjust(a3 + 56, 1LL, 0LL, v8);
  *(_QWORD *)(a3 + 360) = 0LL;
  v10 = *(_BYTE *)(a3 + 464);
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 2) != 0 )
      v12 = a3 + 384;
    else
      v12 = 0LL;
    v9 += TppSetupNextWait(a3, *(_QWORD *)(a3 + 376), v12);
  }
  *(_BYTE *)(a3 + 464) = 0;
  if ( v9 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v9);
    v9 = 0;
  }
  RtlReleaseSRWLockExclusive(v4);
  if ( v9 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v9) == -v9 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return TppExecuteWaitCallback(a1, a3, 0LL);
}
