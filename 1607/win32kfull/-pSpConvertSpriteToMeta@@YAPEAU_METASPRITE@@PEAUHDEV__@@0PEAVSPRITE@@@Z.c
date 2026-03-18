/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C026FFEC
 * Callers:
 *     vSpDynamicModeChange @ 0x1C011BCF0 (vSpDynamicModeChange.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C026E220 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C027027C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0270534 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C02730FC (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C027333C (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // rbx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r15d
  struct SPRITE *Sprite; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct SPRITE *v15; // r13
  LONG v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int i; // r15d
  _DWORD *v21; // rax
  __int64 v23; // rdx
  struct _SPRITESTATE *v24[30]; // [rsp+20h] [rbp-99h] BYREF
  HDEV v26; // [rsp+130h] [rbp+77h] BYREF
  struct _POINTL v27; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v6 = 0LL;
  if ( *((_QWORD *)a3 + 9) )
  {
    v7 = a1[41];
    if ( v7 )
    {
      v6 = PALLOCMEM2((unsigned int)(8 * v7 + 40), 1836086087LL, 0);
      if ( v6 )
      {
        v10 = 0;
        if ( a1[41] )
        {
          while ( 1 )
          {
            v26 = *(HDEV *)(*((_QWORD *)a1 + 21) + 8LL * v10);
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v24, (struct PDEVOBJ *)&v26, v8, v9);
            Sprite = pSpCreateSprite(v26, 0LL, *((HWND *)a3 + 9), 0LL);
            v15 = Sprite;
            if ( !Sprite )
              break;
            bSpTransferShape(Sprite, a3);
            *((_QWORD *)v15 + 24) = *((_QWORD *)a3 + 24);
            *((_QWORD *)a3 + 24) = 0LL;
            v16 = *((_DWORD *)a3 + 29) + a2[653] - *((_DWORD *)v26 + 653);
            v27.x = *((_DWORD *)a3 + 28) + a2[652] - *((_DWORD *)v26 + 652);
            v27.y = v16;
            if ( !(unsigned int)bSpUpdatePosition(v15, &v27, 0, 0) )
            {
              vSpDeleteSprite(v15);
              break;
            }
            v6[v10 + 4] = v15;
            *((_QWORD *)v15 + 1) = v6;
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v24, v17, v18, v19);
            if ( ++v10 >= a1[41] )
              goto LABEL_8;
          }
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v24, v12, v13, v14);
          while ( v10 )
            vSpDeleteSprite((struct SPRITE *)v6[--v10 + 4]);
          Win32FreePool(v6, v23);
          v6 = 0LL;
        }
        else
        {
LABEL_8:
          v6[1] = *((_QWORD *)a3 + 9);
          *((_DWORD *)v6 + 6) = a1[41];
          *(_DWORD *)v6 = 0;
          v6[2] = *((_QWORD *)a1 + 22);
          *((_QWORD *)a1 + 22) = v6;
          if ( (*(_DWORD *)a3 & 0x40) != 0 )
          {
            for ( i = 0; i < a1[41]; ++i )
              pSpHintSpriteShape((struct SPRITE *)v6[i + 4], *((HBITMAP *)a3 + 30), 0);
            *(_DWORD *)v6 |= 0x40u;
          }
          if ( (*(_DWORD *)a3 & 0x100) != 0 )
          {
            if ( a1[41] )
            {
              do
              {
                v21 = (_DWORD *)v6[v3 + 4];
                *v21 |= 0x100u;
                vSpCreateExMirror(*(HDEV *)(*((_QWORD *)a1 + 21) + 8LL * v3++));
              }
              while ( v3 < a1[41] );
            }
            *(_DWORD *)v6 |= 0x100u;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
    pSpHintSpriteShape(a3, 0LL, 0);
  vSpDeleteSprite(a3);
  return (struct _METASPRITE *)v6;
}
