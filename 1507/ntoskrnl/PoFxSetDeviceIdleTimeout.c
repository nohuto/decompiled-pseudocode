/*
 * XREFs of PoFxSetDeviceIdleTimeout @ 0x14016C850
 * Callers:
 *     VerifierPoFxSetDeviceIdleTimeout @ 0x1407423D8 (VerifierPoFxSetDeviceIdleTimeout.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14016C8E8 (PopFxUpdateDeviceIdleTimer.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PoFxSetDeviceIdleTimeout(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int32 *)(a1 + 328);
  v3 = a2;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    v3 = 0x3FFFFFFFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 328);
  }
  else if ( _interlockedbittestandset64(v2, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 328));
  }
  *(_QWORD *)(a1 + 464) = v3;
  PopFxUpdateDeviceIdleTimer(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v2, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
