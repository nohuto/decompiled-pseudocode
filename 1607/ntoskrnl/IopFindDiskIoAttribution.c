/*
 * XREFs of IopFindDiskIoAttribution @ 0x14001EE78
 * Callers:
 *     IoRecordIoAttribution @ 0x14001EDEC (IoRecordIoAttribution.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400B3F34 (IopAcquireReferencesFromIoAttributionHandle.c)
 * Callees:
 *     IopDiskIoAttributionTreeCompare @ 0x14001EF10 (IopDiskIoAttributionTreeCompare.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

_RTL_BALANCED_NODE *__fastcall IopFindDiskIoAttribution(__int64 a1)
{
  _RTL_BALANCED_NODE *v1; // rdi
  KIRQL v2; // al
  _RTL_BALANCED_NODE *Root; // rbx
  KIRQL v4; // si
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  Root = IopDiskIoAttributionTree.Root;
  v4 = v2;
  if ( IopDiskIoAttributionTree.Root )
  {
    do
    {
      v5 = IopDiskIoAttributionTreeCompare(&v7, Root);
      if ( v5 < 0 )
      {
        Root = Root->Children[0];
      }
      else
      {
        if ( v5 <= 0 )
          break;
        Root = Root->Children[1];
      }
    }
    while ( Root );
    if ( Root )
    {
      v1 = Root;
      if ( _InterlockedIncrement64((volatile signed __int64 *)&Root[1].Children[1]) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockShared(&IopDiskIoAttributionLock, v4);
  return v1;
}
