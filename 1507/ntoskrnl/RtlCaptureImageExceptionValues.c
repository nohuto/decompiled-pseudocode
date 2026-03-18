/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x1401533B4
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14012BCFC (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1401532CC (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x140153460 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x14017B604 (KiLockExtendedServiceTable.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     KiFatalExceptionFilter @ 0x1407E5F28 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 */

PVOID __fastcall RtlCaptureImageExceptionValues(void *a1, _QWORD *a2, ULONG *a3)
{
  PVOID result; // rax

  result = RtlImageDirectoryEntryToData(a1, 1u, 3u, a3);
  *a2 = result;
  return result;
}
