/*
 * XREFs of CcPostDeferredWrites @ 0x1401B19E8
 * Callers:
 *     CcCanIWrite @ 0x140020570 (CcCanIWrite.c)
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14008F218 (CcNotifyOfMappedWriteComplete.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x140134738 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcDeferWrite @ 0x1401B18EC (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1D50 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcCanIWriteStream @ 0x140020620 (CcCanIWriteStream.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
