/*
 * XREFs of bCheckReadBounds @ 0x1C0245E3C
 * Callers:
 *     bGeneratePath @ 0x1C0245E4C (bGeneratePath.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bCheckReadBounds(__int64 a1, __int64 a2, unsigned int a3)
{
  return a2 - a1 >= (unsigned __int64)a3;
}
