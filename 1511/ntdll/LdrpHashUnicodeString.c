/*
 * XREFs of LdrpHashUnicodeString @ 0x180018FBC
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpInsertDataTableEntry @ 0x18000EB38 (LdrpInsertDataTableEntry.c)
 *     LdrpLoadKnownDll @ 0x1800105C0 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x180017DC0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall LdrpHashUnicodeString(unsigned __int16 *a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  RtlHashUnicodeString(a1, 1, 0, (int *)&v2);
  return v2;
}
