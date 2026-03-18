/*
 * XREFs of CcUnregisterExternalCache @ 0x1401DCE10
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1401DC770 (CcDeductDirtyPagesFromExternalCache.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall CcUnregisterExternalCache(unsigned __int64 *a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v3; // rdx
  unsigned __int64 **v4; // rcx
  int v5; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&CcExternalCacheListLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&CcExternalCacheListLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&CcExternalCacheListLock);
  }
  v3 = a1[4];
  v4 = (unsigned __int64 **)a1[5];
  if ( *(unsigned __int64 **)(v3 + 8) != a1 + 4 || *v4 != a1 + 4 )
    __fastfail(3u);
  v5 = CcNumberOfExternalCaches;
  *v4 = (unsigned __int64 *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x1044uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v5 - 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&CcExternalCacheListLock, retaddr);
  else
    _InterlockedAnd64(&CcExternalCacheListLock, 0LL);
  __writecr8(CurrentIrql);
  CcDeductDirtyPagesFromExternalCache((__int64)a1, a1[1]);
  ExFreePoolWithTag(a1, 0x43456343u);
}
