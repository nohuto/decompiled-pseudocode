/*
 * XREFs of IopQueueThreadIrp @ 0x140048420
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140006F40 (IopBuildDeviceIoControlRequest.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IoSynchronousPageWriteEx @ 0x140112630 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14012D4C8 (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x140159CD8 (IoQueueThreadIrp.c)
 *     IopBuildSynchronousFsdRequest @ 0x14040E000 (IopBuildSynchronousFsdRequest.c)
 *     IopGetFileInformation @ 0x140428218 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
 *     IopFilterResourceRequirementsCall @ 0x14045D284 (IopFilterResourceRequirementsCall.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x140673C54 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x14067415C (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x140674678 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x140679EEC (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 152);
  v2 = (__int64 *)(a1 + 32);
  v3 = (__int64 *)(v1 + 1632);
  v4 = (volatile signed __int32 *)(v1 + 1832);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v4);
  }
  v6 = *v3;
  *v2 = *v3;
  v2[1] = (__int64)v3;
  if ( *(__int64 **)(v6 + 8) != v3 )
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = v2;
  *v3 = (__int64)v2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
