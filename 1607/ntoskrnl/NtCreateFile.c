/*
 * XREFs of NtCreateFile @ 0x14045B8F0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1403ED8D0 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x1404F55F0 (PfSnIsVolumeMounted.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140529CB8 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           EaBuffer,
           NumberOfBytes,
           0,
           0LL,
           0,
           32,
           0LL);
}
