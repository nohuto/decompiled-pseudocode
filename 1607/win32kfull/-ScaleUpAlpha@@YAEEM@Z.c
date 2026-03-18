/*
 * XREFs of ?ScaleUpAlpha@@YAEEM@Z @ 0x1C0261F08
 * Callers:
 *     AdjustGlyphIntenisty @ 0x1C02628D4 (AdjustGlyphIntenisty.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ScaleUpAlpha(unsigned __int8 a1, float a2)
{
  unsigned __int8 v2; // dl

  v2 = a1;
  if ( a1 )
  {
    v2 = (int)(float)((float)((float)((float)a1 * a2) + (float)a1) + 0.5);
    if ( v2 > 6u )
      return 6;
  }
  return v2;
}
