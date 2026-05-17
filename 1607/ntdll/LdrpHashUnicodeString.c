/*
 * XREFs of LdrpHashUnicodeString @ 0x180018D08
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000E5C8 (LdrpMapDllSearchPath.c)
 *     LdrpLoadKnownDll @ 0x180012040 (LdrpLoadKnownDll.c)
 *     LdrpInsertDataTableEntry @ 0x18002F158 (LdrpInsertDataTableEntry.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x18001A870 (RtlHashUnicodeString.c)
 */

__int64 __fastcall LdrpHashUnicodeString(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  LOBYTE(a2) = 1;
  RtlHashUnicodeString(a1, a2, 0LL, &v3);
  return v3;
}
