/*
 * XREFs of CcDereferenceVacbArray @ 0x140086C14
 * Callers:
 *     CcSetVacbInFreeList @ 0x140086BB4 (CcSetVacbInFreeList.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcRemoveVacbArray @ 0x1401DE3C4 (CcRemoveVacbArray.c)
 *     CcFreeVacbArray @ 0x14064FD30 (CcFreeVacbArray.c)
 */

void __fastcall CcDereferenceVacbArray(__int64 a1, char a2)
{
  KIRQL v4; // si
  int v5; // eax
  int v6; // eax
  KIRQL OldIrql; // [rsp+48h] [rbp+10h]

  if ( a2 )
    v4 = OldIrql;
  else
    v4 = KeAcquireQueuedSpinLock(4uLL);
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x149uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = v5 - 1;
  *(_DWORD *)(a1 + 4) = v6;
  if ( v6 )
  {
    if ( !a2 )
      KeReleaseQueuedSpinLock(4uLL, v4);
  }
  else if ( !a2 )
  {
    CcRemoveVacbArray(a1);
    KeReleaseQueuedSpinLock(4uLL, v4);
    CcFreeVacbArray(a1);
  }
}
