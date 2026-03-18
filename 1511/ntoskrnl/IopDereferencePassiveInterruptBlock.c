/*
 * XREFs of IopDereferencePassiveInterruptBlock @ 0x1401BF474
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1401BF60C (IopPassiveInterruptWorker.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140602DF8 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1401BF458 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x1401BF71C (IopReleaseGlobalPassiveInterruptListLock.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferencePassiveInterruptBlock(PVOID P)
{
  char v2; // di
  unsigned __int8 CurrentIrql; // bp
  KSPIN_LOCK v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rcx
  unsigned __int8 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v7);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock((PKSPIN_LOCK)P + 6);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 46, 0xFFFFFFFF) == 1 )
  {
    v4 = *(_QWORD *)P;
    v5 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v5 != P )
      __fastfail(3u);
    *v5 = (PVOID)v4;
    v2 = 1;
    *(_QWORD *)(v4 + 8) = v5;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)P + 6);
  __writecr8(CurrentIrql);
  LOBYTE(v6) = v7;
  IopReleaseGlobalPassiveInterruptListLock(v6);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6269704Bu);
}
