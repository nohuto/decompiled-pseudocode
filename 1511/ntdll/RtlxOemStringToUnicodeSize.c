/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x180083120
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180010FF8 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180011A58 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180014B30 (RtlAnsiStringToUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x180079680 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180083150 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(unsigned __int16 *a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&v2, *((_QWORD *)a1 + 1), *a1);
  return v2 + 2LL;
}
