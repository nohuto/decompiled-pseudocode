/*
 * XREFs of IoCreateFileEx @ 0x1404393FC
 * Callers:
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404B43D0 (IopOpenLinkOrRenameTarget.c)
 *     IoCreateFileSpecifyDeviceObjectHint @ 0x1404BDBCC (IoCreateFileSpecifyDeviceObjectHint.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFileEx(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options,
        PIO_DRIVER_CREATE_CONTEXT DriverContext)
{
  int v15; // r10d
  int v16; // esi
  struct _ECP_LIST *BugCheckParameter4; // rax
  struct _LIST_ENTRY *Flink; // rcx
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  v15 = 0;
  v16 = (int)FileHandle;
  if ( (Options & 0x800) != 0 )
    v15 = 2;
  if ( DriverContext )
  {
    if ( DriverContext->DeviceObjectHint )
      v15 |= 1u;
    BugCheckParameter4 = DriverContext->ExtraCreateParameter;
    if ( BugCheckParameter4 )
    {
      BugCheckParameter4->Flags |= 1u;
      Flink = BugCheckParameter4->EcpList.Flink;
      if ( Flink == &BugCheckParameter4->EcpList )
        KeBugCheckEx(0x10Cu, 0x15uLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
      do
      {
        LODWORD(Flink[2].Blink) |= 1u;
        Flink = Flink->Flink;
      }
      while ( Flink != &BugCheckParameter4->EcpList );
    }
    if ( DriverContext->TxnParameters )
      v15 |= 4u;
    if ( (unsigned __int64)DriverContext->Size >= 0x28 && *(_QWORD *)&DriverContext[1].Size != 1LL )
      v15 |= 0x40u;
  }
  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           v16,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           NumberOfBytes,
           CreateFileType,
           (__int64)InternalParameters,
           Options | 0x100,
           v15,
           DriverContext);
}
