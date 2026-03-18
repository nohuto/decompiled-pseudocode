/*
 * XREFs of IopFindDiskIoAttribution @ 0x14001F2F8
 * Callers:
 *     IoRecordIoAttribution @ 0x14001F26C (IoRecordIoAttribution.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400B610C (IopAcquireReferencesFromIoAttributionHandle.c)
 * Callees:
 *     IopDiskIoAttributionTreeCompare @ 0x14001F390 (IopDiskIoAttributionTreeCompare.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 */

__int64 *__fastcall IopFindDiskIoAttribution(__int64 a1)
{
  __int64 *v1; // rdi
  KIRQL v2; // al
  __int64 *v3; // rbx
  KIRQL v4; // si
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v3 = (__int64 *)IopDiskIoAttributionTree;
  v4 = v2;
  if ( (_QWORD)IopDiskIoAttributionTree )
  {
    do
    {
      v5 = IopDiskIoAttributionTreeCompare(&v7, v3);
      if ( v5 < 0 )
      {
        v3 = (__int64 *)*v3;
      }
      else
      {
        if ( v5 <= 0 )
          break;
        v3 = (__int64 *)v3[1];
      }
    }
    while ( v3 );
    if ( v3 )
    {
      v1 = v3;
      if ( _InterlockedIncrement64(v3 + 4) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockShared(&IopDiskIoAttributionLock, v4);
  return v1;
}
