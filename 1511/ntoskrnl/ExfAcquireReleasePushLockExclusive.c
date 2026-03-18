/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x1400F45B8
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x140096778 (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x1400CFE24 (EtwpLockUnlockBufferList.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14042BCD0 (AlpcpCaptureSecurityAttribute.c)
 *     PsLookupThreadByThreadId @ 0x140436060 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CC20 (AlpcReferenceBlobByHandle.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PfpRpCHashDeleteEntries @ 0x1404AC980 (PfpRpCHashDeleteEntries.c)
 *     PsLookupProcessByProcessId @ 0x1404D42D0 (PsLookupProcessByProcessId.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14063EC60 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140667728 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x140030AA0 (ExfReleasePushLockExclusive.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  __int64 v2; // rbx

  v2 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, (ULONG_PTR)BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
