/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x180088370
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180013218 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800155AC (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x18007C4E0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1800883A0 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(unsigned __int16 *a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&v2, *((_QWORD *)a1 + 1), *a1);
  return v2 + 2LL;
}
