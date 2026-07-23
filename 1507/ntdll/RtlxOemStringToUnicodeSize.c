/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1800D2480
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800239A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x18006D450 (RtlOemStringToUnicodeString.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18007A3B8 (LdrpAppendAnsiStringToFilenameBuffer.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180077730 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(PCSTR *a1)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, a1[1], *(unsigned __int16 *)a1);
  return BytesInUnicodeString + 2LL;
}
