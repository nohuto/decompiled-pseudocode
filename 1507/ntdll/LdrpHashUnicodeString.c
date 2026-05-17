/*
 * XREFs of LdrpHashUnicodeString @ 0x180040B80
 * Callers:
 *     LdrpLoadKnownDll @ 0x18003FE98 (LdrpLoadKnownDll.c)
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpInsertDataTableEntry @ 0x180040A6C (LdrpInsertDataTableEntry.c)
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x180026F30 (RtlHashUnicodeString.c)
 */

__int64 __fastcall LdrpHashUnicodeString(unsigned __int16 *a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  RtlHashUnicodeString(a1, 1, 0, (int *)&v2);
  return v2;
}
