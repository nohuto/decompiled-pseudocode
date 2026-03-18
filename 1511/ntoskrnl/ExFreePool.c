/*
 * XREFs of ExFreePool @ 0x140239B08
 * Callers:
 *     sub_14014EFB8 @ 0x14014EFB8 (sub_14014EFB8.c)
 *     sub_140215C6C @ 0x140215C6C (sub_140215C6C.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1404470E8 (RtlDuplicateUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x14049DCF8 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14049DDB4 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14049DE9C (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14049E0F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1404A638C (RtlDowncaseUnicodeString.c)
 *     NtQueueApcThreadEx @ 0x1404B1628 (NtQueueApcThreadEx.c)
 *     RtlOemStringToUnicodeString @ 0x1404C0420 (RtlOemStringToUnicodeString.c)
 *     RtlFreeOemString @ 0x1404C66D4 (RtlFreeOemString.c)
 *     RtlUpcaseUnicodeString @ 0x1404D6BE0 (RtlUpcaseUnicodeString.c)
 *     CmpSetVersionData @ 0x14051F904 (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14064484C (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140644AAC (RtlUpcaseUnicodeStringToAnsiString.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
