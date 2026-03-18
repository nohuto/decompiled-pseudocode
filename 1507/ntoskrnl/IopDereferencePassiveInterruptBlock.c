/*
 * XREFs of IopDereferencePassiveInterruptBlock @ 0x1401FACF4
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1401FB130 (IopPassiveInterruptWorker.c)
 *     IopDestroyPassiveInterruptBlock @ 0x14067DC64 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferencePassiveInterruptBlock(volatile signed __int32 *P)
{
  char v2; // si
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v4; // bp
  volatile signed __int32 *v5; // rbx
  _QWORD *v6; // rcx
  PVOID *v7; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PassiveInterruptListLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PassiveInterruptListLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PassiveInterruptListLock);
  }
  v4 = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v5 = P + 12;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(P + 12);
  }
  else if ( _interlockedbittestandset64(v5, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(P + 12);
  }
  if ( _InterlockedExchangeAdd(P + 46, 0xFFFFFFFF) == 1 )
  {
    v6 = *(_QWORD **)P;
    v7 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)P + 8LL) != P || *v7 != P )
      __fastfail(3u);
    *v7 = v6;
    v2 = 1;
    v6[1] = v7;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(P + 12, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  __writecr8(v4);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PassiveInterruptListLock, retaddr);
  else
    _InterlockedAnd64(&PassiveInterruptListLock, 0LL);
  __writecr8(CurrentIrql);
  if ( v2 )
    ExFreePoolWithTag((PVOID)P, 0x6269704Bu);
}
