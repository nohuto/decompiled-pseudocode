/*
 * XREFs of ExFreePool @ 0x140255B30
 * Callers:
 *     sub_140158738 @ 0x140158738 (sub_140158738.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14022FB68 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F6230 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1403F6E40 (RtlDuplicateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToOemString @ 0x1404A7B5C (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1404A7C18 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1404A7D00 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1404A7F54 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1404AD658 (RtlDowncaseUnicodeString.c)
 *     NtQueueApcThreadEx @ 0x1404BB320 (NtQueueApcThreadEx.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 *     RtlFreeOemString @ 0x1405489A4 (RtlFreeOemString.c)
 *     RtlOemStringToUnicodeString @ 0x140549F28 (RtlOemStringToUnicodeString.c)
 *     CmpSetVersionData @ 0x14055DEE8 (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140685564 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406857C4 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     KiFilterFiberContext @ 0x140777A80 (KiFilterFiberContext.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
