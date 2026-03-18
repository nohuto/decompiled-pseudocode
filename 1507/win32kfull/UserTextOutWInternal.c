/*
 * XREFs of UserTextOutWInternal @ 0x1C024B750
 * Callers:
 *     <none>
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00EA458 (GreExtTextOutWInternal.c)
 */

__int64 __fastcall UserTextOutWInternal(HDC a1, LONG a2, LONG a3, unsigned __int16 *a4, int a5)
{
  return GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, a5, 0LL, 0LL, 0);
}
