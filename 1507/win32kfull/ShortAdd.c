/*
 * XREFs of ShortAdd @ 0x1C02DC1F8
 * Callers:
 *     scl_UpdateParentElement @ 0x1C00B9B98 (scl_UpdateParentElement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ShortAdd(__int16 a1, __int16 a2, _WORD *a3)
{
  int v3; // r9d

  v3 = a2 + a1;
  if ( (unsigned int)(v3 + 0x8000) > 0xFFFF )
  {
    *a3 = -1;
    return 2147942934LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
