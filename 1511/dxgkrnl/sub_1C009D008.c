/*
 * XREFs of sub_1C009D008 @ 0x1C009D008
 * Callers:
 *     sub_1C009CAA8 @ 0x1C009CAA8 (sub_1C009CAA8.c)
 *     sub_1C009CF24 @ 0x1C009CF24 (sub_1C009CF24.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C009D008(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 72);
  return v1 == -1 || v1 > 0 && (v1 <= 3 || v1 == 14);
}
