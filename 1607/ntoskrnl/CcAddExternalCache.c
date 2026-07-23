/*
 * XREFs of CcAddExternalCache @ 0x1401B15A0
 * Callers:
 *     CcRegisterExternalCache @ 0x1401B1770 (CcRegisterExternalCache.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall CcAddExternalCache(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // r8
  _QWORD *v5; // rbx
  unsigned int v6; // eax

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = (_QWORD *)qword_1403232D8;
  v4 = v2;
  v5 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_1403232D8 != &CcExternalCacheList )
    __fastfail(3u);
  *v5 = &CcExternalCacheList;
  v6 = CcNumberOfExternalCaches;
  v5[1] = v3;
  *v3 = v5;
  qword_1403232D8 = (__int64)v5;
  if ( v6 + 1 < v6 )
    KeBugCheckEx(0x34u, 0x1044uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v6 + 1;
  KeReleaseSpinLock(&CcExternalCacheListLock, v4);
}
