/*
 * XREFs of FlipUserTextOutW @ 0x1C00F98C0
 * Callers:
 *     DrawMenuMark @ 0x1C004F298 (DrawMenuMark.c)
 *     DrawBox @ 0x1C0050D40 (DrawBox.c)
 * Callees:
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     GreExtTextOutWInternal @ 0x1C00EA458 (GreExtTextOutWInternal.c)
 *     GreSetTextAlign @ 0x1C00FA3AC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FAEBC (GreGetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1C02B7D8C (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, LONG a2, LONG a3, unsigned __int16 *a4)
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
