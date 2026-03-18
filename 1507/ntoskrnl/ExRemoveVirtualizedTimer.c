/*
 * XREFs of ExRemoveVirtualizedTimer @ 0x1402648D4
 * Callers:
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExpTimerResume @ 0x14012D1AC (ExpTimerResume.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall ExRemoveVirtualizedTimer(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  volatile signed __int32 *v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 - 280;
  v3 = (volatile signed __int32 *)(a1 - 280 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 - 280 + 64));
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 - 280 + 64));
  }
  *(_QWORD *)(v2 + 272) = 0LL;
  if ( (*(_BYTE *)(v2 + 244) & 2) != 0 )
    ExpTimerResume((PKTIMER)v2, a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
}
