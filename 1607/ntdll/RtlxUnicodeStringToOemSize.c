/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x18007E8A0
 * Callers:
 *     RtlUnicodeStringToAnsiString @ 0x180018950 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToOemString @ 0x18006CBA0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007C7C0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E31F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E3340 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E3460 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x18007E8D0 (RtlUnicodeToMultiByteSize.c)
 */

__int64 __fastcall RtlxUnicodeStringToOemSize(PWCH *a1)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, a1[1], *(unsigned __int16 *)a1);
  return BytesInMultiByteString + 1;
}
