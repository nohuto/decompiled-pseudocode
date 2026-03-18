/*
 * XREFs of CcAddExternalCache @ 0x14012FAB8
 * Callers:
 *     CcRegisterExternalCache @ 0x14012FA38 (CcRegisterExternalCache.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall CcAddExternalCache(__int64 a1)
{
  KIRQL v2; // al
  __int64 **v3; // rcx
  __int64 *v4; // rbx
  KIRQL v5; // r8
  unsigned int v6; // eax

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = (__int64 **)qword_1402FDC98;
  v4 = (__int64 *)(a1 + 32);
  v5 = v2;
  *v4 = (__int64)&CcExternalCacheList;
  v4[1] = (__int64)v3;
  if ( *v3 != &CcExternalCacheList )
    __fastfail(3u);
  v6 = CcNumberOfExternalCaches;
  *v3 = v4;
  qword_1402FDC98 = (__int64)v4;
  if ( v6 + 1 < v6 )
    KeBugCheckEx(0x34u, 0x1042uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v6 + 1;
  KeReleaseSpinLock(&CcExternalCacheListLock, v5);
}
