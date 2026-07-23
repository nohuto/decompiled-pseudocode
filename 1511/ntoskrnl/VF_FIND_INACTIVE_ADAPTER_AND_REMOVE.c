/*
 * XREFs of VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x1406BA064
 * Callers:
 *     VfGetDmaAdapter @ 0x1406BB3B4 (VfGetDmaAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_LIST_ENTRY *__fastcall VF_FIND_INACTIVE_ADAPTER_AND_REMOVE(struct _LIST_ENTRY *a1)
{
  _LIST_ENTRY *v2; // rbx
  KIRQL v3; // r8
  _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&Lock);
  for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
  {
    if ( i[1].Blink == a1 && (SHIDWORD(i[2].Flink) <= 0 || LOBYTE(i[2].Flink) == 1) )
    {
      Flink = i->Flink;
      v2 = i;
      Blink = i->Blink;
      if ( i->Flink->Blink != i || Blink->Flink != i )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      break;
    }
  }
  KeReleaseSpinLock(&Lock, v3);
  return v2;
}
