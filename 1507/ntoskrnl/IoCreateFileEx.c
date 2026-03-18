/*
 * XREFs of IoCreateFileEx @ 0x14050A0C0
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x1404A6950 (IopOpenLinkOrRenameTarget.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     IoCreateFileSpecifyDeviceObjectHint @ 0x140557130 (IoCreateFileSpecifyDeviceObjectHint.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
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
  int v15; // r11d
  struct _ECP_LIST *BugCheckParameter4; // rdx
  struct _LIST_ENTRY *Flink; // rax
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  v15 = 0;
  if ( (Options & 0x800) != 0 )
    v15 = 2;
  if ( DriverContext )
  {
    if ( DriverContext->DeviceObjectHint )
      v15 |= 1u;
    BugCheckParameter4 = DriverContext->ExtraCreateParameter;
    if ( BugCheckParameter4 )
    {
      Flink = BugCheckParameter4->EcpList.Flink;
      BugCheckParameter4->Flags |= 1u;
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
  }
  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           (int)FileHandle,
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
           (__int64)DriverContext);
}
