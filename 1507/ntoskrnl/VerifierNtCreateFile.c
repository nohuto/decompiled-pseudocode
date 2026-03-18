/*
 * XREFs of VerifierNtCreateFile @ 0x14075428C
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     NtCreateFile @ 0x14050A250 (NtCreateFile.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

NTSTATUS __fastcall VerifierNtCreateFile(
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
  char pszDest[40]; // [rsp+60h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+C8h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 && KeGetCurrentIrql() )
  {
    ViErrorDisplayDescription(586);
    if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", retaddr) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(586, (ULONG_PTR)retaddr, 0LL, 0LL);
  }
  return pXdvNtCreateFile(
           FileHandle,
           DesiredAccess,
           ObjectAttributes,
           IoStatusBlock,
           AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           EaBuffer,
           EaLength);
}
