/*
 * XREFs of ExFreePool @ 0x140288000
 * Callers:
 *     sub_14017D17C @ 0x14017D17C (sub_14017D17C.c)
 *     RtlUpcaseUnicodeString @ 0x140443520 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1404FEFE8 (RtlDuplicateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x14052844C (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140528508 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1405285F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140528860 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x14052EC84 (RtlDowncaseUnicodeString.c)
 *     NtQueueApcThreadEx @ 0x140540B68 (NtQueueApcThreadEx.c)
 *     RtlOemStringToUnicodeString @ 0x14054E47C (RtlOemStringToUnicodeString.c)
 *     RtlFreeOemString @ 0x14055A640 (RtlFreeOemString.c)
 *     CmpSetVersionData @ 0x1405A42BC (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1406C78D8 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406C7B38 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     <none>
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
