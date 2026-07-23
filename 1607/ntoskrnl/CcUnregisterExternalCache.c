/*
 * XREFs of CcUnregisterExternalCache @ 0x1401B1808
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x140134738 (CcDeductDirtyPagesFromExternalCache.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall CcUnregisterExternalCache(unsigned __int64 *a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // r9
  unsigned __int64 **v4; // r8
  int v5; // edx

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = a1[4];
  v4 = (unsigned __int64 **)a1[5];
  if ( *(unsigned __int64 **)(v3 + 8) != a1 + 4 || *v4 != a1 + 4 )
    __fastfail(3u);
  v5 = CcNumberOfExternalCaches;
  *v4 = (unsigned __int64 *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x1053uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v5 - 1;
  KeReleaseSpinLock(&CcExternalCacheListLock, v2);
  CcDeductDirtyPagesFromExternalCache((__int64)a1, a1[1]);
  ExFreePoolWithTag(a1, 0x43456343u);
}
