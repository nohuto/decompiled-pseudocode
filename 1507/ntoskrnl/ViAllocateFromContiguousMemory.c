/*
 * XREFs of ViAllocateFromContiguousMemory @ 0x14073D1B0
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ViAllocateFromContiguousMemory(__int64 a1, ULONG a2)
{
  __int64 v2; // rsi
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  ULONG ClearBitsAndSet; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 264) )
    return 0LL;
  v5 = (volatile signed __int32 *)(a1 + 280);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 280));
  }
  else if ( _interlockedbittestandset64(v5, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 280));
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 296), 1u, a2);
  if ( ClearBitsAndSet != -1 )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * ClearBitsAndSet);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v5, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  __writecr8(CurrentIrql);
  return v2;
}
