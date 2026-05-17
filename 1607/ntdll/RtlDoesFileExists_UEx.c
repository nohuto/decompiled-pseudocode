/*
 * XREFs of RtlDoesFileExists_UEx @ 0x18006A6C8
 * Callers:
 *     RtlDoesFileExists_U @ 0x1800675B0 (RtlDoesFileExists_U.c)
 *     RtlDosSearchPath_U @ 0x1800675C0 (RtlDosSearchPath_U.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4B4 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpCheckDeviceName @ 0x1800CFF7C (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044734 (RtlDoesFileExists_UstrEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(__int64 a1, char a2)
{
  __m128i v4; // [rsp+20h] [rbp-18h] BYREF

  return (int)RtlInitUnicodeStringEx((__int64)&v4, a1) >= 0 && RtlDoesFileExists_UstrEx(&v4, a2);
}
