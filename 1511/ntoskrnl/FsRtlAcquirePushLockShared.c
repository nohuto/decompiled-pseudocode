/*
 * XREFs of FsRtlAcquirePushLockShared @ 0x1401AD8F0
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x1401ADA34 (FsRtlLookupPerFileContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401ADB20 (FsRtlLookupPerStreamContextInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall FsRtlAcquirePushLockShared(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)a1, v3, (ULONG_PTR)a1);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
