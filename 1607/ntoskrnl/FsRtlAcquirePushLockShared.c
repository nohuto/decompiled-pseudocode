/*
 * XREFs of FsRtlAcquirePushLockShared @ 0x1401B9EC8
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x1401BA0D8 (FsRtlLookupPerFileContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401BA1C4 (FsRtlLookupPerStreamContextInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall FsRtlAcquirePushLockShared(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
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
