/*
 * XREFs of IopAcquireFileObjectLock @ 0x1403EE090
 * Callers:
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     NtLockFile @ 0x140469D2C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046A59C (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 *     NtFlushBuffersFileEx @ 0x1404AF1B0 (NtFlushBuffersFileEx.c)
 *     NtUnlockFile @ 0x1404AF9D8 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404B87E8 (NtNotifyChangeDirectoryFile.c)
 *     IoSetInformation @ 0x1404CA404 (IoSetInformation.c)
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
 *     BuildQueryDirectoryIrp @ 0x1404F0410 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     NtSetVolumeInformationFile @ 0x140529AB4 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406228A0 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140625290 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopWaitForLockAlertable @ 0x1400078E4 (IopWaitForLockAlertable.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 */

__int64 __fastcall IopAcquireFileObjectLock(char *Object, KPROCESSOR_MODE a2, char a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi

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
    v13 = v9;
  }
  while ( v9 != 192 && v9 != 257 );
  _InterlockedAdd((volatile signed __int32 *)Object + 28, 0xFFFFFFFF);
  if ( !*((_DWORD *)Object + 29) )
  {
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
  }
  *a4 = 1;
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v13;
}
