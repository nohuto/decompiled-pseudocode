/*
 * XREFs of ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00F8474
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A5E8 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C000AA24 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C000B150 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007D810 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C007DA70 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C003BE5C (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 */

_QWORD *__fastcall hspGetNeighborSprite(HSPRITE a1, char a2, char a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v9, a1);
  if ( v9 )
  {
    if ( a2 )
      v6 = v9[3];
    else
      v6 = v9[4];
    if ( a3 && (struct DwmState *)v6 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      do
      {
        v7 = v6 - 24;
        if ( !v6 )
          v7 = 0LL;
        if ( v9[6] == *(_QWORD *)(v7 + 48) )
          break;
        v6 = a2 ? *(_QWORD *)v6 : *(_QWORD *)(v6 + 8);
      }
      while ( (struct DwmState *)v6 != (struct DwmState *)((char *)g_pDwmState + 80) );
    }
    if ( (struct DwmState *)v6 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      if ( v6 )
        v4 = (_QWORD *)(v6 - 24);
      v4 = (_QWORD *)*v4;
    }
    DEC_SHARE_REF_CNT(v9);
  }
  return v4;
}
