/*
 * XREFs of sub_18002234C @ 0x18002234C
 * Callers:
 *     unknown_libname_2 @ 0x18000AD90 (unknown_libname_2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002234C(WCHAR a1)
{
  BOOL StringTypeW; // eax
  WCHAR SrcStr; // [rsp+30h] [rbp+8h] BYREF
  WORD CharType; // [rsp+40h] [rbp+18h] BYREF

  SrcStr = a1;
  StringTypeW = GetStringTypeW(1u, &SrcStr, 1, &CharType);
  return StringTypeW ? CharType : 0;
}
