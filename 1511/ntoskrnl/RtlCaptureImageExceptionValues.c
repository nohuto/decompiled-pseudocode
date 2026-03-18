/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x14001A844
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x14001A188 (RtlInsertInvertedFunctionTable.c)
 *     RtlpLookupUserFunctionTable @ 0x1400ED2CC (RtlpLookupUserFunctionTable.c)
 *     KiLockServiceTable @ 0x140123C84 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x14014D5A8 (KiLockExtendedServiceTable.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     KiFatalExceptionFilter @ 0x14076FED0 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 */

PVOID __fastcall RtlCaptureImageExceptionValues(void *a1, _QWORD *a2, ULONG *a3)
{
  PVOID result; // rax

  result = RtlImageDirectoryEntryToData(a1, 1u, 3u, a3);
  *a2 = result;
  return result;
}
