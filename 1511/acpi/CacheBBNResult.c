/*
 * XREFs of CacheBBNResult @ 0x1C00237A0
 * Callers:
 *     GetPciAddressWorker @ 0x1C0009260 (GetPciAddressWorker.c)
 * Callees:
 *     AMLIIsEqualHandle @ 0x1C00097AC (AMLIIsEqualHandle.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 */

void __fastcall CacheBBNResult(_QWORD *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  KIRQL v6; // di
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // r8

  v4 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
  v5 = gBBNResultCacheListHead;
  v6 = v4;
  while ( (__int64 *)v5 != &gBBNResultCacheListHead )
  {
    if ( AMLIIsEqualHandle(*(_QWORD **)(v5 + 16), a1) )
      goto LABEL_6;
    v5 = *v10;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x69706341u);
  if ( PoolWithTag )
  {
    PoolWithTag[2] = a1;
    AMLIReferenceHandleEx((__int64)a1);
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
