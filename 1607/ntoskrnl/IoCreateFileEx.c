/*
 * XREFs of IoCreateFileEx @ 0x14045A624
 * Callers:
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404BCA54 (IopOpenLinkOrRenameTarget.c)
 *     IoCreateFileSpecifyDeviceObjectHint @ 0x1404C5C3C (IoCreateFileSpecifyDeviceObjectHint.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
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
  int v15; // esi
  int v16; // r10d
  struct _ECP_LIST *BugCheckParameter4; // rax
  struct _LIST_ENTRY *Flink; // rcx
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  v15 = (int)FileHandle;
  v16 = 0;
  if ( (Options & 0x800) != 0 )
    v16 = 2;
  if ( DriverContext )
  {
    if ( DriverContext->DeviceObjectHint )
      v16 |= 1u;
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
      v16 |= 4u;
    if ( (unsigned __int64)DriverContext->Size >= 0x28 && *(_QWORD *)&DriverContext[1].Size != 1LL )
      v16 |= 0x40u;
  }
  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           v15,
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
           v16,
           DriverContext);
}
