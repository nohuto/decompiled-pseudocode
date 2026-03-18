/*
 * XREFs of Scale_28DOT4 @ 0x1C015A800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Scale_28DOT4(int *a1, int a2, int a3, int a4, int a5)
{
  a1[1] = -((a3 - a5) >> 2);
  *a1 = (a2 - a4) >> 2;
}
