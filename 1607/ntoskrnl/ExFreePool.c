/*
 * XREFs of ExFreePool @ 0x140255B30
 * Callers:
 *     sub_1401581C8 @ 0x1401581C8 (sub_1401581C8.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14022FD3C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F7370 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1403F75E4 (RtlCreateUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1403F7F80 (RtlDuplicateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToOemString @ 0x1404BBE2C (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1404BBEE8 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1404BBFD0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1404BC224 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1404C1928 (RtlDowncaseUnicodeString.c)
 *     NtQueueApcThreadEx @ 0x1404D7D1C (NtQueueApcThreadEx.c)
 *     RtlUpcaseUnicodeString @ 0x140514D50 (RtlUpcaseUnicodeString.c)
 *     RtlFreeOemString @ 0x140548464 (RtlFreeOemString.c)
 *     RtlOemStringToUnicodeString @ 0x1405499E8 (RtlOemStringToUnicodeString.c)
 *     CmpSetVersionData @ 0x14055D9A8 (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140685480 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406856E0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     KiFilterFiberContext @ 0x140777A80 (KiFilterFiberContext.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
