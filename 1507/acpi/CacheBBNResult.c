/*
 * XREFs of CacheBBNResult @ 0x1C00230D0
 * Callers:
 *     GetPciAddressWorker @ 0x1C00095A0 (GetPciAddressWorker.c)
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C0008ED4 (AMLIReferenceHandleEx.c)
 *     AMLIIsEqualHandle @ 0x1C00426FC (AMLIIsEqualHandle.c)
 */

void __fastcall CacheBBNResult(__int64 a1, int a2)
{
  KIRQL v4; // al
  __int64 *v5; // r8
  KIRQL v6; // di
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 **v10; // r8

  v4 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
  v5 = (__int64 *)gBBNResultCacheListHead;
  v6 = v4;
  while ( v5 != &gBBNResultCacheListHead )
  {
    if ( (unsigned __int8)AMLIIsEqualHandle(v5[2], a1) )
      goto LABEL_6;
    v5 = *v10;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x69706341u);
  if ( PoolWithTag )
  {
    PoolWithTag[2] = a1;
    AMLIReferenceHandleEx(a1);
    *(_DWORD *)(v8 + 24) = a2;
    v9 = gBBNResultCacheListHead;
    *(_QWORD *)v8 = gBBNResultCacheListHead;
    *(_QWORD *)(v8 + 8) = &gBBNResultCacheListHead;
    if ( *(__int64 **)(v9 + 8) != &gBBNResultCacheListHead )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = v8;
    gBBNResultCacheListHead = v8;
  }
LABEL_6:
  KeReleaseSpinLock(&gBBNResultCacheLock, v6);
}
