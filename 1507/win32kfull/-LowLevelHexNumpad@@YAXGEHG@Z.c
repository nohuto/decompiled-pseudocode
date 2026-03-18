/*
 * XREFs of ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01D7888
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 * Callees:
 *     IsHotKey @ 0x1C0049900 (IsHotKey.c)
 */

void __fastcall LowLevelHexNumpad(unsigned __int16 a1, unsigned __int8 a2, int a3, __int16 a4)
{
  unsigned __int8 v4; // bl
  int v5; // ecx

  v4 = gafAsyncKeyState[4];
  if ( (v4 & 0x10) == 0 )
  {
    if ( (gfInNumpadHexInput & 1) != 0 )
      gfInNumpadHexInput &= ~1u;
    return;
  }
  if ( !a3 && ((gfInNumpadHexInput & 1) != 0 || a1 == 78 || a1 == 83) )
  {
    if ( (a4 & 0x100) == 0 && ((((unsigned __int16)(2 * (gafAsyncKeyState[5] & 4)) | v4 & 1 | 4) - 4) & 0xFFF6) == 0 )
    {
      if ( (gfInNumpadHexInput & 1) == 0 )
      {
        if ( (gafAsyncKeyState[22] & 0x40) != 0 || (gafAsyncKeyState[23] & 1) != 0 )
          v5 = 8;
        else
          v5 = 0;
        if ( !IsHotKey((v4 >> 1) & 2 | 1 | (4 * (v4 & 1)) | (unsigned int)v5, a2) )
          gfInNumpadHexInput |= 1u;
        return;
      }
      if ( (unsigned __int16)(a1 - 71) <= 0xBu && *((_BYTE *)&aVkNumpad + a1 - 71) != 0xFF
        || (unsigned __int8)(a2 - 48) <= 9u
        || (unsigned __int8)(a2 - 65) <= 5u )
      {
        return;
      }
    }
    gfInNumpadHexInput &= ~1u;
  }
}
