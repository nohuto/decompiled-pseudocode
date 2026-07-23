/*
 * XREFs of _whiteout @ 0x140155F9C
 * Callers:
 *     _winput_s @ 0x140155FEC (_winput_s.c)
 * Callees:
 *     iswctype @ 0x140150120 (iswctype.c)
 *     _fgetwc_nolock @ 0x140156A54 (_fgetwc_nolock.c)
 */

__int64 __fastcall whiteout(_DWORD *a1, FILE *a2)
{
  wint_t v4; // bx

  do
  {
    ++*a1;
    v4 = fgetwc_nolock(a2);
  }
  while ( v4 != 0xFFFF && iswctype(v4, 8u) );
  return v4;
}
