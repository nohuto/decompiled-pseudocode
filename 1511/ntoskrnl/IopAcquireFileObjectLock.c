/*
 * XREFs of IopAcquireFileObjectLock @ 0x1404AC66C
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404379F0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1404383A0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     NtQueryEaFile @ 0x14048E36C (NtQueryEaFile.c)
 *     NtLockFile @ 0x14048F14C (NtLockFile.c)
 *     NtFlushBuffersFileEx @ 0x14048F78C (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFile @ 0x14048FA08 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140490124 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404909FC (NtReadFileScatter.c)
 *     NtUnlockFile @ 0x1404911DC (NtUnlockFile.c)
 *     IoSetInformation @ 0x1404C362C (IoSetInformation.c)
 *     IopQueryXxxInformation @ 0x1404DB258 (IopQueryXxxInformation.c)
 *     NtSetVolumeInformationFile @ 0x1404EA818 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1405FB5AC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopWaitForLockAlertable @ 0x1400E73A4 (IopWaitForLockAlertable.c)
 */

__int64 __fastcall IopAcquireFileObjectLock(char *Object, KPROCESSOR_MODE a2, char a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *a4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)Object + 28);
  do
  {
    if ( !*((_DWORD *)Object + 29) && !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      ObfReferenceObject(Object);
      _InterlockedAdd((volatile signed __int32 *)Object + 28, 0xFFFFFFFF);
      return 0LL;
    }
    v9 = IopWaitForLockAlertable(Object + 128, a2, a3);
    v10 = v9;
  }
  while ( v9 != 192 && v9 != 257 );
  _InterlockedAdd((volatile signed __int32 *)Object + 28, 0xFFFFFFFF);
  if ( !*((_DWORD *)Object + 29) )
  {
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
  }
  *a4 = 1;
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
