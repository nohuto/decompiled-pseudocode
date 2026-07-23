/*
 * XREFs of IopQueueThreadIrp @ 0x14002DCF0
 * Callers:
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x14008D604 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008DAC8 (IoSynchronousPageWriteEx.c)
 *     IoQueueThreadIrp @ 0x140133370 (IoQueueThreadIrp.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 *     IoSetInformation @ 0x1404CA404 (IoSetInformation.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 *     IopGetFileInformation @ 0x1404ECF60 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     IopFilterResourceRequirementsCall @ 0x14050D21C (IopFilterResourceRequirementsCall.c)
 *     IopBuildSynchronousFsdRequest @ 0x14050E5E0 (IopBuildSynchronousFsdRequest.c)
 *     IoCancelFileOpen @ 0x1406233F0 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x1406238FC (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x140623DA4 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x140629438 (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 152);
  v2 = (_QWORD *)(a1 + 32);
  v3 = (__int64 *)(v1 + 1640);
  v4 = (volatile signed __int32 *)(v1 + 1840);
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
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v2 = v6;
  v2[1] = v3;
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
