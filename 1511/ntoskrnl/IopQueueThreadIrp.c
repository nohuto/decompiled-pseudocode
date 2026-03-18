/*
 * XREFs of IopQueueThreadIrp @ 0x140043B00
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     IoSynchronousPageWriteEx @ 0x1400E0460 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400EF86C (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x1401268B4 (IoQueueThreadIrp.c)
 *     IopSynchronousCall @ 0x1403D2C78 (IopSynchronousCall.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     IopBuildSynchronousFsdRequest @ 0x1404A9D74 (IopBuildSynchronousFsdRequest.c)
 *     IoSetInformation @ 0x1404C362C (IoSetInformation.c)
 *     IopGetFileInformation @ 0x1404D8FD0 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x1404DB258 (IopQueryXxxInformation.c)
 *     IopFilterResourceRequirementsCall @ 0x1404F179C (IopFilterResourceRequirementsCall.c)
 *     IoCancelFileOpen @ 0x1405F99D8 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x1405F9ED0 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x1405FA2C0 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x1405FF3C8 (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 152);
  v4 = (__int64 *)(a1 + 32);
  v5 = (__int64 *)(v3 + 1632);
  v6 = (volatile signed __int32 *)(v3 + 1832);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v6);
  }
  else if ( _interlockedbittestandset64(v6, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v6, a2, a3);
  }
  v8 = *v5;
  *v4 = *v5;
  v4[1] = (__int64)v5;
  if ( *(__int64 **)(v8 + 8) != v5 )
    __fastfail(3u);
  *(_QWORD *)(v8 + 8) = v4;
  *v5 = (__int64)v4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v6, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
