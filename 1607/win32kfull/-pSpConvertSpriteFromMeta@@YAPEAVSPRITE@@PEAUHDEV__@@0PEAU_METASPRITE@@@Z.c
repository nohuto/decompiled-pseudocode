/*
 * XREFs of ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C026FE30
 * Callers:
 *     vSpDynamicModeChange @ 0x1C011BCF0 (vSpDynamicModeChange.c)
 * Callees:
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C026E220 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C027027C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0270534 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C02730FC (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C027333C (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall pSpConvertSpriteFromMeta(HDEV a1, struct SPRITE *a2, struct _METASPRITE *a3)
{
  HWND v3; // r11
  unsigned int v4; // ebx
  struct SPRITE *v6; // r15
  struct SPRITE *v8; // rsi
  unsigned int v9; // eax
  struct SPRITE *v10; // r14
  unsigned int v11; // r8d
  struct SPRITE **v12; // rcx
  __int64 v13; // r9
  struct SPRITE *Sprite; // rax
  _QWORD *v15; // rcx
  LONG v16; // r8d
  struct SPRITE *v17; // rcx
  struct _METASPRITE *v18; // rcx
  struct _METASPRITE *i; // rax
  struct _POINTL v21; // [rsp+48h] [rbp+10h] BYREF

  v3 = (HWND)*((_QWORD *)a3 + 1);
  v4 = 0;
  v6 = a2;
  v8 = 0LL;
  if ( v3 )
  {
    v9 = *((_DWORD *)a3 + 6);
    v10 = 0LL;
    v11 = 0;
    if ( v9 )
    {
      v12 = (struct SPRITE **)((char *)a3 + 32);
      v13 = v9;
      do
      {
        a2 = *v12;
        if ( *v12 && v11 < *(_DWORD *)(**((_QWORD **)a2 + 2) + 2132LL) )
        {
          v10 = *v12;
          v11 = *(_DWORD *)(**((_QWORD **)a2 + 2) + 2132LL);
        }
        ++v12;
        --v13;
      }
      while ( v13 );
      if ( v10 )
      {
        Sprite = pSpCreateSprite(a1, 0LL, v3, 0LL);
        v8 = Sprite;
        if ( Sprite )
        {
          bSpTransferShape(Sprite, v10);
          *((_QWORD *)v8 + 24) = *((_QWORD *)v10 + 24);
          v15 = (_QWORD *)*((_QWORD *)v10 + 2);
          *((_QWORD *)v10 + 24) = 0LL;
          v16 = *(_DWORD *)(*v15 + 2612LL) + *((_DWORD *)v10 + 29);
          v21.x = *(_DWORD *)(*v15 + 2608LL) + *((_DWORD *)v10 + 28);
          v21.y = v16;
          if ( !(unsigned int)bSpUpdatePosition(v8, &v21, 0, 0) )
          {
            vSpDeleteSprite(v8);
            v8 = 0LL;
          }
          if ( v8 )
          {
            if ( (*(_DWORD *)v10 & 0x40) != 0 )
              pSpHintSpriteShape(v8, *((HBITMAP *)v10 + 30), 0);
            if ( (*(_DWORD *)v10 & 0x100) != 0 )
            {
              *(_DWORD *)v8 |= 0x100u;
              vSpCreateExMirror(**((HDEV **)v8 + 2));
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)a3 + 6) )
  {
    do
    {
      v17 = (struct SPRITE *)*((_QWORD *)a3 + v4 + 4);
      if ( (*(_DWORD *)v17 & 0x40) != 0 )
        pSpHintSpriteShape(v17, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + v4++ + 4));
    }
    while ( v4 < *((_DWORD *)a3 + 6) );
  }
  v18 = (struct _METASPRITE *)*((_QWORD *)v6 + 22);
  if ( v18 == a3 )
  {
    *((_QWORD *)v6 + 22) = *((_QWORD *)a3 + 2);
  }
  else
  {
    for ( i = (struct _METASPRITE *)*((_QWORD *)v18 + 2); i != a3; i = (struct _METASPRITE *)*((_QWORD *)i + 2) )
      v18 = i;
    *((_QWORD *)v18 + 2) = *((_QWORD *)a3 + 2);
  }
  Win32FreePool(a3, a2);
  return v8;
}
