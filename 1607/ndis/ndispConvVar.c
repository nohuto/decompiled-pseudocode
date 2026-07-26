/*
 * XREFs of ndispConvVar @ 0x1C00AD648
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndispConvOffsetToPointer @ 0x1C00AD66C (ndispConvOffsetToPointer.c)
 */

__int64 __fastcall ndispConvVar(int a1, int a2, int a3, unsigned __int16 *a4)
{
  return ndispConvOffsetToPointer(a1, a2, a3, (int)a4 + 8, *a4, 2);
}
