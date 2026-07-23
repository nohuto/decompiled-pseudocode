/*
 * XREFs of TppWaitCompletion @ 0x18003AC50
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003C258 (TppCancelTimer.c)
 *     TppSetupNextWait @ 0x18003C704 (TppSetupNextWait.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWaitCompletion(PTP_CALLBACK_INSTANCE Instance, __int64 a2, __int64 a3)
{
  _RTL_SRWLOCK *v3; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  signed int v8; // edi
  char v9; // al
  __int64 v11; // r8

  v3 = (_RTL_SRWLOCK *)(a3 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 240));
  LOBYTE(v6) = 1;
  v8 = 0;
  if ( (unsigned __int8)TppCancelTimer(a3, *(_QWORD *)(a3 + 144) + 112LL, v6) )
    v8 = -1;
  if ( (*(_BYTE *)(a3 + 464) & 4) == 0 )
    TppBarrierAdjust(a3 + 56, 1LL, 0LL, v7);
  *(_QWORD *)(a3 + 360) = 0LL;
  v9 = *(_BYTE *)(a3 + 464);
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) != 0 )
      v11 = a3 + 384;
    else
      v11 = 0LL;
    v8 += TppSetupNextWait(a3, *(_QWORD *)(a3 + 376), v11);
  }
  *(_BYTE *)(a3 + 464) = 0;
  if ( v8 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v8);
    v8 = 0;
  }
  RtlReleaseSRWLockExclusive(v3);
  if ( v8 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v8) == -v8 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return TppExecuteWaitCallback(Instance);
}
