/*
 * XREFs of CcPostDeferredWrites @ 0x1401A8F40
 * Callers:
 *     CcCanIWrite @ 0x14002F540 (CcCanIWrite.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400E4064 (CcNotifyOfMappedWriteComplete.c)
 *     CcLazyWriteScan @ 0x140100810 (CcLazyWriteScan.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x14012D770 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcDeferWrite @ 0x1401A8E40 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401A9140 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     CcCanIWriteStream @ 0x14002F5F0 (CcCanIWriteStream.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void CcPostDeferredWrites()
{
  unsigned int v0; // ebp
  struct _LIST_ENTRY **p_Blink; // rdi
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rsi
  KIRQL v4; // r14
  unsigned int Blink; // edx
  unsigned int v6; // ebx
  struct _LIST_ENTRY *v7; // rdx
  _LIST_ENTRY **v8; // rcx
  struct _KEVENT *v9; // rcx

  v0 = 0;
  while ( 2 )
  {
    p_Blink = 0LL;
    v2 = KeAcquireSpinLockRaiseToDpc(&CcDeferredWriteSpinLock);
    Flink = CcDeferredWrites.Flink;
    v4 = v2;
    while ( Flink != &CcDeferredWrites )
    {
      p_Blink = &Flink[-2].Blink;
      Blink = (unsigned int)Flink[-1].Blink;
      v6 = Blink + v0;
      if ( CcCanIWriteStream((__int64)Flink[-1].Flink, Blink, v0, 2) )
      {
        v0 = v6;
        v7 = Flink->Flink;
        v8 = (_LIST_ENTRY **)p_Blink[4];
        if ( Flink->Flink->Blink != Flink || *v8 != Flink )
          __fastfail(3u);
        *v8 = v7;
        v7->Blink = (struct _LIST_ENTRY *)v8;
        break;
      }
      Flink = Flink->Flink;
      p_Blink = 0LL;
    }
    KeReleaseSpinLock(&CcDeferredWriteSpinLock, v4);
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
}
