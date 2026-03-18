/*
 * XREFs of PopFxLockDevice @ 0x14011BF2C
 * Callers:
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 *     PoFxNotifySurprisePowerOn @ 0x14014BE30 (PoFxNotifySurprisePowerOn.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140538690 (PopFxUnregisterDeviceOrWait.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PopFxLockDevice(__int64 a1, char a2)
{
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v7; // ett
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  if ( a1 )
  {
    v5 = (_DWORD *)(a1 + 88);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 88);
    }
    else
    {
      _m_prefetchw(v5);
      v7 = *v5 & 0x7FFFFFFF;
      if ( v7 != _InterlockedCompareExchange(v5, v7 + 1, v7) )
        ExpWaitForSpinLockSharedAndAcquire(v5);
    }
    v4 = *(_QWORD *)(a1 + 80);
    if ( a2 )
      v4 &= -(__int64)((*(_BYTE *)(a1 + 296) & 4) != 0);
    if ( v4 && IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 208), 0LL, &File, 1u, 0x20u) < 0 )
      v4 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr);
    }
    else
    {
      _InterlockedAnd(v5, 0xBFFFFFFF);
      _InterlockedDecrement(v5);
    }
    __writecr8(CurrentIrql);
  }
  return v4;
}
