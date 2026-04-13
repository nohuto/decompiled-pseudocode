/*
 * XREFs of _Getwctypes @ 0x180054A0C
 * Callers:
 *     ?do_is@?$ctype@G@std@@MEBAPEBGPEBG0PEAF@Z @ 0x18001BCF0 (-do_is@-$ctype@G@std@@MEBAPEBGPEBG0PEAF@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__cdecl Getwctypes(const wchar_t *a1, const wchar_t *a2, __int16 *a3, const _Ctypevec *a4)
{
  GetStringTypeW(1u, a1, a2 - a1, (LPWORD)a3);
  return a2;
}
