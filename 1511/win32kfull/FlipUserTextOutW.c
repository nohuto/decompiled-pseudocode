/*
 * XREFs of FlipUserTextOutW @ 0x1C0010200
 * Callers:
 *     DrawMenuMark @ 0x1C0013D9C (DrawMenuMark.c)
 *     DrawBox @ 0x1C0014AB0 (DrawBox.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C0040128 (GreExtTextOutWInternal.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1C02B719C (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, int a2, int a3, unsigned __int16 *a4)
{
  unsigned int v8; // ebx

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v8 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
      v8 = GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1, 0LL, 0LL, 0);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1, 0LL, 0LL, 0);
  }
  return v8;
}
