/*
 * XREFs of IopQueueThreadIrp @ 0x14002E170
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x14008DEA4 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008E368 (IoSynchronousPageWriteEx.c)
 *     IoQueueThreadIrp @ 0x140132E00 (IoQueueThreadIrp.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     IopFilterResourceRequirementsCall @ 0x1404C8FAC (IopFilterResourceRequirementsCall.c)
 *     IopBuildSynchronousFsdRequest @ 0x1404CDF48 (IopBuildSynchronousFsdRequest.c)
 *     IoSetInformation @ 0x1404E8078 (IoSetInformation.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 *     IopGetFileInformation @ 0x140509FD0 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     IoCancelFileOpen @ 0x14062333C (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x140623848 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x140623CF0 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x140629384 (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400D8260 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3CDC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3D8C (KiReleaseSpinLockInstrumented.c)
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
