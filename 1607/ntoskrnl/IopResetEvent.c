/*
 * XREFs of IopResetEvent @ 0x14002E5C0
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     NtFlushBuffersFileEx @ 0x1404C9430 (NtFlushBuffersFileEx.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     NtSetVolumeInformationFile @ 0x140529574 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x14062333C (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140629384 (IopFreeBandwidthContract.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall IopResetEvent(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x4000000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v4 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 152), 7u) )
    {
      do
        KeYieldProcessorEx(&v4);
      while ( (*(_DWORD *)(a1 + 152) & 0x80u) != 0 );
    }
    *(_DWORD *)(a1 + 156) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 152), 0xFFFFFF7F);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
