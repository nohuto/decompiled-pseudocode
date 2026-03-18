/*
 * XREFs of FsRtlAcquirePushLockExclusive @ 0x1400D7BF0
 * Callers:
 *     FsRtlRemovePerFileObjectContext @ 0x1400D79D8 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1400D7AD8 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerFileContextInternal @ 0x1400F1BB0 (FsRtlInsertPerFileContextInternal.c)
 *     FsRtlInsertPerStreamContext @ 0x1401AD958 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerFileContext @ 0x1401ADC24 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1401ADD3C (FsRtlRemovePerStreamContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1404941A4 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1404ABCBC (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall FsRtlAcquirePushLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (ULONG_PTR)a1);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
