/*
 * XREFs of IopExceptionCleanup @ 0x1404C68BC
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404379F0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1404383A0 (NtQueryVolumeInformationFile.c)
 *     NtQueryEaFile @ 0x14048E36C (NtQueryEaFile.c)
 *     NtLockFile @ 0x14048F14C (NtLockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14048FA08 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140490124 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404909FC (NtReadFileScatter.c)
 *     NtUnlockFile @ 0x1404911DC (NtUnlockFile.c)
 *     NtSetVolumeInformationFile @ 0x1404EA818 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1405FB5AC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall IopExceptionCleanup(char *Object, PIRP Irp, PVOID a3, PVOID P)
{
  struct _IRP *MasterIrp; // rcx
  struct _MDL *MdlAddress; // rcx

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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( a3 )
    ObfDereferenceObject(a3);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ObfDereferenceObject(Object);
}
