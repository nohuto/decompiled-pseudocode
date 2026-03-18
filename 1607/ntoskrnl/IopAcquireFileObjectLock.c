/*
 * XREFs of IopAcquireFileObjectLock @ 0x1403ECA60
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     NtFlushBuffersFileEx @ 0x1404C9430 (NtFlushBuffersFileEx.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     IoSetInformation @ 0x1404E8078 (IoSetInformation.c)
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     NtSetVolumeInformationFile @ 0x140529574 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopWaitForLockAlertable @ 0x140007774 (IopWaitForLockAlertable.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
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
