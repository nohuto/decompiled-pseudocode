/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x140082E38
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x140082BBC (RtlInsertInvertedFunctionTable.c)
 *     RtlpLookupUserFunctionTable @ 0x1400ABEF0 (RtlpLookupUserFunctionTable.c)
 *     KiLockServiceTable @ 0x14012E004 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x140156E88 (KiLockExtendedServiceTable.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     KiFatalExceptionFilter @ 0x1407BA49C (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 */

PVOID __fastcall RtlCaptureImageExceptionValues(void *a1, _QWORD *a2, ULONG *a3)
{
  PVOID result; // rax

  result = RtlImageDirectoryEntryToData(a1, 1u, 3u, a3);
  *a2 = result;
  return result;
}
