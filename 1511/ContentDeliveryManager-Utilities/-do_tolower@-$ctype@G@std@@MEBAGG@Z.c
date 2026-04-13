/*
 * XREFs of ?do_tolower@?$ctype@G@std@@MEBAGG@Z @ 0x18000AB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t __fastcall std::ctype<unsigned short>::do_tolower(__int64 a1, wchar_t a2)
{
  return Towlower(a2, (const _Ctypevec *)(a1 + 16));
}
