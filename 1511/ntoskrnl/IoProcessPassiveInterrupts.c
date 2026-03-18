/*
 * XREFs of IoProcessPassiveInterrupts @ 0x1401BF3CC
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x1401C9E00 (KiDispatchPassiveInterrupts.c)
 *     KiInterruptDispatchCommon @ 0x1401C9E9C (KiInterruptDispatchCommon.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     IopFindPassiveInterruptBlock @ 0x1401BF514 (IopFindPassiveInterruptBlock.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  bool v3; // zf

  result = IopFindPassiveInterruptBlock();
  v1 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 28) )
      off_1402D27E0();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KxAcquireSpinLock((PKSPIN_LOCK)(v1 + 48));
    v3 = *(_BYTE *)(v1 + 56) == 0;
    *(_BYTE *)(v1 + 57) = 1;
    if ( v3 )
    {
      *(_BYTE *)(v1 + 56) = 1;
      KiInsertQueueDpc(v1 + 96, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v1 + 48));
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
