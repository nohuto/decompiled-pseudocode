/*
 * XREFs of sub_180024D74 @ 0x180024D74
 * Callers:
 *     unknown_libname_9 @ 0x1800227D0 (unknown_libname_9.c)
 *     sub_180025090 @ 0x180025090 (sub_180025090.c)
 * Callees:
 *     sub_180024A0C @ 0x180024A0C (sub_180024A0C.c)
 */

__int64 __fastcall sub_180024D74(__int64 a1, int a2, double *a3, int a4)
{
  int i; // edi

  for ( i = 0; i < a4; ++a3 )
  {
    if ( *a3 == 0.0 )
      break;
    sub_180024A0C(a1, a2, *a3);
    ++i;
  }
  return a1;
}
