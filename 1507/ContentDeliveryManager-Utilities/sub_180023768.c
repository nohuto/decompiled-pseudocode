/*
 * XREFs of sub_180023768 @ 0x180023768
 * Callers:
 *     sub_180021A70 @ 0x180021A70 (sub_180021A70.c)
 *     sub_180023A78 @ 0x180023A78 (sub_180023A78.c)
 * Callees:
 *     sub_18002340C @ 0x18002340C (sub_18002340C.c)
 */

__int64 __fastcall sub_180023768(__int64 a1, int a2, float *a3, int a4)
{
  int i; // edi

  for ( i = 0; i < a4; ++a3 )
  {
    if ( *a3 == 0.0 )
      break;
    sub_18002340C(a1, a2, *a3);
    ++i;
  }
  return a1;
}
