/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x14054CBD8
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x14045FE30 (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x1404294AC (MmUnsecureVirtualMemory.c)
 *     AlpcpUnlockBlob @ 0x1404F14C0 (AlpcpUnlockBlob.c)
 */

unsigned __int64 __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  _KPROCESS *v3; // rsi
  unsigned __int64 result; // rax
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  v2 = BugCheckParameter2;
  v3 = *(_KPROCESS **)(BugCheckParameter2 + 32);
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v2 == *(_QWORD *)(v1 + 72) )
  {
    KiStackAttachProcess(v3, 0, (__int64)v5);
    MmUnsecureVirtualMemory(*(HANDLE *)(v2 + 64));
    KiUnstackDetachProcess((struct _KTHREAD *)v5, 0);
    *(_DWORD *)(v2 + 72) |= 1u;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_DWORD *)(v2 + 72) |= 4u;
  }
  else
  {
    v2 = 0LL;
  }
  result = AlpcpUnlockBlob(v1);
  if ( v2 )
    return AlpcpDereferenceBlobEx(v2, 1);
  return result;
}
