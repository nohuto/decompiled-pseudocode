/*
 * XREFs of _Getwctype @ 0x1800549D0
 * Callers:
 *     ?do_is@?$ctype@G@std@@MEBA_NFG@Z @ 0x18001BCC0 (-do_is@-$ctype@G@std@@MEBA_NFG@Z.c)
 * Callees:
 *     <none>
 */

__int16 __cdecl Getwctype(wchar_t a1, const _Ctypevec *a2)
{
  BOOL StringTypeW; // eax
  WCHAR SrcStr; // [rsp+30h] [rbp+8h] BYREF
  WORD CharType; // [rsp+40h] [rbp+18h] BYREF

  SrcStr = a1;
  StringTypeW = GetStringTypeW(1u, &SrcStr, 1, &CharType);
  return StringTypeW ? CharType : 0;
}
