/*
 * XREFs of Scale_16DOT16 @ 0x1C015D830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Scale_16DOT16(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  *a1 = (a2 - a4) << 10;
  a1[1] = (a3 - a5) << 10;
}
