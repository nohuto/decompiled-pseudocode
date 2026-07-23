/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1400921C4 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x1400A8F34 (PspLockUnlockProcessExclusive.c)
 *     PfpRpCHashDeleteEntries @ 0x1403E6240 (PfpRpCHashDeleteEntries.c)
 *     AlpcReferenceBlobByHandle @ 0x14040AB18 (AlpcReferenceBlobByHandle.c)
 *     PsLookupProcessByProcessId @ 0x14041F5C0 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x14041F6B0 (PsLookupThreadByThreadId.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044C520 (AlpcpCaptureSecurityAttribute.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14067D3B4 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406A8284 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400C65A0 (ExfReleasePushLockExclusive.c)
 */

unsigned __int64 __fastcall ExfAcquireReleasePushLockExclusive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax

  v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  result = ExfReleasePushLockExclusive(BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}
