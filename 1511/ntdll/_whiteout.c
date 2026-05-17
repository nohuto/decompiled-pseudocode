/*
 * XREFs of _whiteout @ 0x1800A3C78
 * Callers:
 *     _winput_s @ 0x1800A3CD0 (_winput_s.c)
 * Callees:
 *     iswctype @ 0x180098E80 (iswctype.c)
 *     _fgetwc_nolock @ 0x1800A46C0 (_fgetwc_nolock.c)
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
