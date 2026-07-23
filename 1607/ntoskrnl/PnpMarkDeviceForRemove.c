/*
 * XREFs of PnpMarkDeviceForRemove @ 0x1401CDC0C
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404837DC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14064A1AC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x1400076FC (IoAcquireVpbSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002E950 (IopIncrementDeviceObjectRefCount.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

ULONG_PTR __fastcall PnpMarkDeviceForRemove(ULONG_PTR a1, int a2, ULONG_PTR *a3)
{
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  void *v7; // rcx
  KIRQL v8; // al
  ULONG_PTR result; // rax
  UCHAR Irql; // [rsp+38h] [rbp+10h] BYREF

  v5 = a1;
  if ( a2 )
  {
    a3[1] = 0LL;
    *a3 = a1;
  }
  if ( a1 )
  {
    do
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        IoAcquireVpbSpinLock(&Irql);
        v6 = *(_QWORD *)(v5 + 56);
        if ( a2 )
        {
          *(_WORD *)(v6 + 4) |= 8u;
          if ( (*(_WORD *)(v6 + 4) & 1) != 0 )
          {
            *a3 = v5;
            v7 = *(void **)(v6 + 8);
            a3[1] = (ULONG_PTR)v7;
            ObfReferenceObjectWithTag(v7, 0x746C6644u);
            IopIncrementDeviceObjectRefCount(a3[1], 1);
          }
        }
        else
        {
          *(_WORD *)(v6 + 4) &= ~8u;
        }
        KeReleaseQueuedSpinLock(9uLL, Irql);
      }
      if ( a2 && a3[1] )
        break;
      v8 = KeAcquireQueuedSpinLock(0xAuLL);
      v5 = *(_QWORD *)(v5 + 24);
      Irql = v8;
      KeReleaseQueuedSpinLock(0xAuLL, v8);
    }
    while ( v5 );
  }
  result = a3[1];
  if ( !result )
    return *a3;
  return result;
}
