/*
 * XREFs of IoProcessPassiveInterrupts @ 0x1401FAC30
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x14020770C (KiDispatchPassiveInterrupts.c)
 *     KiInterruptDispatchCommon @ 0x1402077A8 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     IopFindPassiveInterruptBlock @ 0x1401FAE24 (IopFindPassiveInterruptBlock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 *v3; // rdi
  bool v4; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = IopFindPassiveInterruptBlock();
  v1 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 28) )
      off_140321930();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    v3 = (volatile signed __int32 *)(v1 + 48);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v1 + 48);
    }
    else if ( _interlockedbittestandset64(v3, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v1 + 48));
    }
    v4 = *(_BYTE *)(v1 + 56) == 0;
    *(_BYTE *)(v1 + 57) = 1;
    if ( v4 )
    {
      *(_BYTE *)(v1 + 56) = 1;
      KiInsertQueueDpc(v1 + 96, 0LL, 0LL, 0LL, 0);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v1 + 48, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
