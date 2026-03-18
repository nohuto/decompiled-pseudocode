/*
 * XREFs of IopCloseWaitCompletionPacket @ 0x14002DC88
 * Callers:
 *     <none>
 * Callees:
 *     IopCancelWaitCompletionPacket @ 0x14002DD10 (IopCancelWaitCompletionPacket.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall IopCloseWaitCompletionPacket(__int64 a1, volatile signed __int32 *a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // si
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 == 1 )
  {
    v5 = a2 + 24;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a2 + 24);
    }
    else if ( _interlockedbittestandset64(v5, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(a2 + 24);
    }
    if ( !*((_BYTE *)a2 + 104) || !(unsigned __int8)IopCancelWaitCompletionPacket((PVOID)a2) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v5, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
      __writecr8(CurrentIrql);
    }
  }
}
