/*
 * XREFs of IopExceptionCleanup @ 0x1406213D4
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140529574 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IoFreeIrp @ 0x140055DD0 (IoFreeIrp.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall IopExceptionCleanup(char *Object, PIRP Irp, PVOID a3, PVOID P)
{
  struct _IRP *MasterIrp; // rcx
  struct _MDL *MdlAddress; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MasterIrp )
    ExFreePoolWithTag(MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
    IoFreeMdl(MdlAddress);
  IoFreeIrp(Irp);
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
    ObfDereferenceObject(Object);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
  if ( a3 )
    ObfDereferenceObject(a3);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ObfDereferenceObject(Object);
}
