/*
 * XREFs of PiDrvDbUnloadNodeReset @ 0x140130318
 * Callers:
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140559C84 (PiDrvDbUnloadNodeWorkerCallback.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PiDrvDbUnloadNodeReset(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int32 *)(a1 + 424);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 424);
  }
  else if ( _interlockedbittestandset64(v2, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 424));
  }
  *(_BYTE *)(a1 + 432) = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v2, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
