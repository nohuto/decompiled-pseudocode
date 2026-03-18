/*
 * XREFs of ExfReleasePushLockExclusive @ 0x1400F36C0
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140065B9C (EtwpLockUnlockBufferList.c)
 *     PspSystemThreadStartup @ 0x1400DAAD4 (PspSystemThreadStartup.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 *     PfpRpCHashDeleteEntries @ 0x140453A14 (PfpRpCHashDeleteEntries.c)
 *     AlpcReferenceBlobByHandle @ 0x140476C20 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14047FE50 (AlpcpCaptureSecurityAttribute.c)
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1405115F0 (PsLookupThreadByThreadId.c)
 *     NtGetNextProcess @ 0x14056803C (NtGetNextProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14058B36C (PspSetProcessAffinityUpdateMode.c)
 *     PspSwapSystemDll @ 0x1406BEE64 (PspSwapSystemDll.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1406BF7F4 (PsSynchronizeWithThreadInsertion.c)
 *     PspAssignPrimaryToken @ 0x1406C3208 (PspAssignPrimaryToken.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406EA9E0 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExfReleasePushLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  signed __int64 v4; // rtt

  result = _InterlockedCompareExchange64(a1, 0LL, 1LL);
  if ( result != 1 )
  {
    do
    {
      v2 = -1LL;
      if ( (result & 6) == 2 )
        v2 = 3LL;
      v3 = v2 + result;
      v4 = result;
      result = _InterlockedCompareExchange64(a1, v2 + result, result);
    }
    while ( v4 != result );
    if ( v2 == 3 )
      return ExpWakePushLock(a1, v3);
  }
  return result;
}
