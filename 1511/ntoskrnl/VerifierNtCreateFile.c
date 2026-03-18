/*
 * XREFs of VerifierNtCreateFile @ 0x1406D07C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x140136BD4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 *     NtCreateFile @ 0x1404395B0 (NtCreateFile.c)
 *     ViErrorDisplayDescription @ 0x1406C2AE4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1406C2B34 (ViErrorFinishReport.c)
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
