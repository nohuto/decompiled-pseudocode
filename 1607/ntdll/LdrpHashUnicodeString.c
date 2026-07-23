/*
 * XREFs of LdrpHashUnicodeString @ 0x180018CF8
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000E5B8 (LdrpMapDllSearchPath.c)
 *     LdrpLoadKnownDll @ 0x180012030 (LdrpLoadKnownDll.c)
 *     LdrpInsertDataTableEntry @ 0x18002F148 (LdrpInsertDataTableEntry.c)
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x18001A860 (RtlHashUnicodeString.c)
 */

__int64 __fastcall LdrpHashUnicodeString(_UNICODE_STRING *a1)
{
  ULONG HashValue; // [rsp+38h] [rbp+10h] BYREF

  HashValue = 0;
  RtlHashUnicodeString(a1, 1u, 0, &HashValue);
  return HashValue;
}
