/*
 * XREFs of NtOpenFile @ 0x14045A760
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x1403E6878 (PfSnGetPrefetchInstructions.c)
 *     RtlpSysVolTakeOwnership @ 0x140688E7C (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  SIZE_T v7; // [rsp+50h] [rbp-38h]

  LODWORD(v7) = 0;
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           0LL,
           0,
           ShareAccess,
           1,
           OpenOptions,
           0LL,
           v7,
           0,
           0LL,
           0,
           32,
           0LL);
}
