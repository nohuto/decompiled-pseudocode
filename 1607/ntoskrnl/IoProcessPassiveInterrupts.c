/*
 * XREFs of IoProcessPassiveInterrupts @ 0x1401CD7A0
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x1401D8408 (KiDispatchPassiveInterrupts.c)
 *     KiInterruptDispatchCommon @ 0x1401D8494 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     IopFindPassiveInterruptBlock @ 0x1401CD8E8 (IopFindPassiveInterruptBlock.c)
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
    if ( !*(_DWORD *)(result + 32) )
      off_1402F2480();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KxAcquireSpinLock((PKSPIN_LOCK)(v1 + 56));
    v3 = *(_BYTE *)(v1 + 64) == 0;
    *(_BYTE *)(v1 + 65) = 1;
    if ( v3 )
    {
      *(_BYTE *)(v1 + 64) = 1;
      KiInsertQueueDpc(v1 + 104, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v1 + 56));
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
