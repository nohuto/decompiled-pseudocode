/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1800D24B0
 * Callers:
 *     RtlUnicodeStringToAnsiString @ 0x1800240C0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToOemString @ 0x1800634C0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18006D250 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800D20C0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800D2210 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800D2330 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x180070350 (RtlUnicodeToMultiByteSize.c)
 */

__int64 __fastcall RtlxUnicodeStringToOemSize(PWCH *a1)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, a1[1], *(unsigned __int16 *)a1);
  return BytesInMultiByteString + 1;
}
