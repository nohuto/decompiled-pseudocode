/*
 * XREFs of ?do_is@?$ctype@G@std@@MEBA_NFG@Z @ 0x18001BCC0
 * Callers:
 *     <none>
 * Callees:
 *     _Getwctype @ 0x1800549D0 (_Getwctype.c)
 */

bool __fastcall std::ctype<unsigned short>::do_is(__int64 a1, unsigned __int16 a2, wchar_t a3)
{
  return ((unsigned __int16)Getwctype(a3, (const _Ctypevec *)(a1 + 16)) & a2) != 0;
}
