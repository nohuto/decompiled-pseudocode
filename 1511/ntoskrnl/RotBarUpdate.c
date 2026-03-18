/*
 * XREFs of RotBarUpdate @ 0x1401B5EB0
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401B5D7C (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     InbvGetDisplayState @ 0x1401B5BC8 (InbvGetDisplayState.c)
 *     FadePalette @ 0x1401B5CDC (FadePalette.c)
 */

void RotBarUpdate()
{
  int v0; // ecx
  int v1; // ecx
  __int64 v2; // r8
  __int64 v3; // rcx
  int v4; // ebx

  if ( PltRotBarStatus )
  {
    if ( PltRotBarStatus == 1 )
    {
      v4 = PaletteNum;
      FadePalette(PaletteNum);
      PaletteNum = ++v4;
      *((_DWORD *)PalettePtr + 1) = 0;
      if ( v4 >= 20 )
      {
        PltRotBarStatus = 2;
        FadingIn = 1;
        PaletteNum = 1;
      }
      goto LABEL_26;
    }
    if ( PltRotBarStatus != 2 )
    {
      if ( PltRotBarStatus == 3 )
        return;
      goto LABEL_26;
    }
    switch ( AnimBarPos )
    {
      case 0:
        v3 = 371LL;
        v2 = 376LL;
        goto LABEL_21;
      case 1:
        VidBufferToScreenBlt(&Square3, 259LL, 354LL, 6LL, 9, 4);
LABEL_22:
        if ( ++AnimBarPos > 17 )
          AnimBarPos = 0;
LABEL_26:
        if ( !(unsigned int)InbvGetDisplayState() )
          VidBitBlt(&PaletteBmp, 0LL, 480LL);
        return;
      case 2:
        VidBufferToScreenBlt(&Square2, 259LL, 354LL, 6LL, 9, 4);
        VidBufferToScreenBlt(&Square3, (unsigned int)(8 * AnimBarPos + 251), 354LL, 6LL, 9, 4);
        goto LABEL_22;
      case 16:
        VidBufferToScreenBlt(&Square1, 363LL, 354LL, 6LL, 9, 4);
        VidBufferToScreenBlt(&Square2, (unsigned int)(8 * AnimBarPos + 243), 354LL, 6LL, 9, 4);
        break;
      case 17:
        VidBufferToScreenBlt(&Square1, 371LL, 354LL, 6LL, 9, 4);
        break;
      default:
        VidBufferToScreenBlt(&Square1, (unsigned int)(8 * AnimBarPos + 235), 354LL, 6LL, 9, 4);
        VidBufferToScreenBlt(&Square2, (unsigned int)(8 * AnimBarPos + 243), 354LL, 6LL, 9, 4);
        VidBufferToScreenBlt(&Square3, (unsigned int)(8 * AnimBarPos + 251), 354LL, 6LL, 9, 4);
        if ( AnimBarPos <= 3 )
          goto LABEL_22;
        v0 = AnimBarPos + 16;
        goto LABEL_13;
    }
    v0 = AnimBarPos + 16;
LABEL_13:
    v1 = v0 % 18;
    v2 = (unsigned int)(8 * v1 + 248);
    v3 = (unsigned int)(8 * v1 + 243);
LABEL_21:
    VidSolidColorFill(v3, 354LL, v2, 362LL, 0);
    goto LABEL_22;
  }
}
