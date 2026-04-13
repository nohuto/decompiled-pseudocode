/*
 * XREFs of sub_18002417C @ 0x18002417C
 * Callers:
 *     unknown_libname_8 @ 0x1800223C0 (unknown_libname_8.c)
 *     sub_1800243E0 @ 0x1800243E0 (sub_1800243E0.c)
 * Callees:
 *     sub_180023E14 @ 0x180023E14 (sub_180023E14.c)
 */

__int64 __fastcall sub_18002417C(__int64 a1, int a2, double *a3, int a4)
{
  int i; // edi

  for ( i = 0; i < a4; ++a3 )
  {
    if ( *a3 == 0.0 )
      break;
    sub_180023E14(a1, a2, *a3);
    ++i;
  }
  return a1;
}
