/*
 * XREFs of GetPrefixCount @ 0x1C01382E8
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00F8334 (xxxDrawMenuBarUnderlines.c)
 *     xxxPSMGetTextExtent @ 0x1C013821C (xxxPSMGetTextExtent.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023ECF4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0244864 (xxxPSMTextOut.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C024AFBC (DT_GetExtentMinusPrefixes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPrefixCount(__int16 *a1, int a2, _WORD *a3, int a4)
{
  unsigned __int16 v4; // bx
  int v6; // r11d
  int v7; // r10d
  __int16 v8; // r9

  v4 = -1;
  v6 = 0;
  if ( !a3 )
    a4 = 0x7FFF;
  v7 = 0;
  if ( a2 > 0 )
  {
    while ( 1 )
    {
      v8 = *a1;
      --a2;
      if ( !*a1 )
        goto LABEL_12;
      if ( !a4-- )
        goto LABEL_12;
      ++a1;
      if ( v8 == 38 )
        break;
      if ( v8 == 30 )
      {
        ++v7;
LABEL_16:
        v4 = v6;
        goto LABEL_11;
      }
      if ( v8 == 31 )
      {
        ++v7;
        if ( !a2 )
          goto LABEL_12;
        ++v7;
        ++a1;
        --a2;
      }
      else
      {
        ++v6;
        if ( a3 )
          *a3++ = v8;
      }
LABEL_11:
      if ( a2 <= 0 )
        goto LABEL_12;
    }
    ++v7;
    if ( *a1 == 38 )
    {
      if ( a3 )
        *a3++ = 38;
      --a2;
      ++a1;
      ++v6;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
LABEL_12:
  if ( a3 )
    *a3 = 0;
  return v4 | ((unsigned __int16)v7 << 16);
}
