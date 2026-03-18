/*
 * XREFs of bBmfdMapFontFileFD @ 0x1C0116AEC
 * Callers:
 *     BmfdQueryFontDataTE @ 0x1C01167F0 (BmfdQueryFontDataTE.c)
 *     BmfdQueryAdvanceWidthsTE @ 0x1C0147180 (BmfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00A9F68 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bBmfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 16), &v3, &v2, 1);
  return result;
}
