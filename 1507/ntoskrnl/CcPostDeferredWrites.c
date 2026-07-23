/*
 * XREFs of CcPostDeferredWrites @ 0x1401DD050
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcLazyWriteScan @ 0x140067780 (CcLazyWriteScan.c)
 *     CcCanIWrite @ 0x1400E4880 (CcCanIWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14012FB7C (CcNotifyOfMappedWriteComplete.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1401DC770 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcDeferWrite @ 0x1401DCF50 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     CcCanIWriteStream @ 0x1400E4930 (CcCanIWriteStream.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 CcPostDeferredWrites()
{
  unsigned int v0; // ebp
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned __int8 CurrentIrql; // r14
  _LIST_ENTRY *Flink; // rsi
  unsigned int Blink; // edx
  unsigned int v5; // ebx
  struct _LIST_ENTRY *v6; // rdx
  _LIST_ENTRY **v7; // rcx
  __int64 result; // rax
  struct _KEVENT *v9; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v0 = 0;
  while ( 2 )
  {
    p_Blink = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&CcDeferredWriteSpinLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&CcDeferredWriteSpinLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&CcDeferredWriteSpinLock);
    }
    Flink = CcDeferredWrites.Flink;
    while ( Flink != &CcDeferredWrites )
    {
      p_Blink = &Flink[-2].Blink;
      Blink = (unsigned int)Flink[-1].Blink;
      v5 = Blink + v0;
      if ( CcCanIWriteStream((__int64)Flink[-1].Flink, Blink, v0, 2) )
      {
        v0 = v5;
        v6 = Flink->Flink;
        v7 = (_LIST_ENTRY **)p_Blink[4];
        if ( Flink->Flink->Blink != Flink || *v7 != Flink )
          __fastfail(3u);
        *v7 = v6;
        v6->Blink = (struct _LIST_ENTRY *)v7;
        break;
      }
      Flink = Flink->Flink;
      p_Blink = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&CcDeferredWriteSpinLock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&CcDeferredWriteSpinLock, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( p_Blink )
    {
      v9 = (struct _KEVENT *)p_Blink[5];
      if ( v9 )
      {
        KeSetEvent(v9, 0, 0);
      }
      else
      {
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))p_Blink[6])(p_Blink[7], p_Blink[8]);
        ExFreePoolWithTag(p_Blink, 0);
      }
      continue;
    }
    break;
  }
  return result;
}
