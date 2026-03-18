/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x14051A418
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x1403E6C8C (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1403F636C (MmUnsecureVirtualMemory.c)
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 */

void __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  _KPROCESS *v3; // rsi
  $D4FCF91253F76F57393CBFE908971F67 v4; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  v2 = BugCheckParameter2;
  v3 = *(_KPROCESS **)(BugCheckParameter2 + 32);
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v2 == *(_QWORD *)(v1 + 72) )
  {
    KiStackAttachProcess(v3, 0LL, (__int64)&v4);
    MmUnsecureVirtualMemory(*(HANDLE *)(v2 + 64));
    KiUnstackDetachProcess(&v4, 0LL);
    *(_DWORD *)(v2 + 72) |= 1u;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_DWORD *)(v2 + 72) |= 4u;
  }
  else
  {
    v2 = 0LL;
  }
  AlpcpUnlockBlob(v1);
  if ( v2 )
    AlpcpDereferenceBlobEx(v2, 1);
}
