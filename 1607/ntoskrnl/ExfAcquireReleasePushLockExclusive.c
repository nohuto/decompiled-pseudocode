/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x1400AA9EC
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1400929C4 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x1400AA9B4 (PspLockUnlockProcessExclusive.c)
 *     PfpRpCHashDeleteEntries @ 0x1403E4C14 (PfpRpCHashDeleteEntries.c)
 *     AlpcReferenceBlobByHandle @ 0x14040BC58 (AlpcReferenceBlobByHandle.c)
 *     PsLookupProcessByProcessId @ 0x140420700 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1404207F0 (PsLookupThreadByThreadId.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044D650 (AlpcpCaptureSecurityAttribute.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14067D2D0 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406A814C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400C8700 (ExfReleasePushLockExclusive.c)
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
