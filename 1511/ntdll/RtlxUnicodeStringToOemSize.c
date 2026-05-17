/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x18007B680
 * Callers:
 *     RtlUnicodeStringToAnsiString @ 0x180018200 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToOemString @ 0x18006F660 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180079480 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800DA5E0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800DA730 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800DA850 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x18007B6B0 (RtlUnicodeToMultiByteSize.c)
 */

__int64 __fastcall RtlxUnicodeStringToOemSize(PWCH *a1)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, a1[1], *(unsigned __int16 *)a1);
  return BytesInMultiByteString + 1;
}
