/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0273350
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00F5060 (vSpDynamicModeChange.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008A630 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008A660 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0270D20 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0272D5C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0273014 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0275BB4 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275DF4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct HDEV__ *__fastcall pSpTransferMetaSprite(_DWORD *a1, HDEV a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // r14
  struct HDEV__ *v5; // rbx
  HDEV v7; // r15
  size_t v8; // rcx
  HBITMAP v9; // rsi
  unsigned int v10; // r11d
  int v11; // r12d
  __int64 v12; // r9
  char v13; // r13
  int v14; // r12d
  int v15; // r13d
  __int64 v16; // r8
  struct SPRITE *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // r15
  struct SPRITE *Sprite; // rsi
  __int64 v23; // rax
  LONG v24; // ecx
  __int64 v25; // rsi
  HBITMAP v26; // r15
  struct SPRITE *v27; // rcx
  __int64 j; // rsi
  __int64 k; // rsi
  struct SPRITE *v30; // rcx
  __int64 v31; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v34; // rcx
  HDEV v36; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v37; // [rsp+28h] [rbp-D8h] BYREF
  HBITMAP hsurf; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h]
  struct _SPRITESTATE *v41[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _SPRITESTATE *v42[32]; // [rsp+110h] [rbp+10h] BYREF
  int v43; // [rsp+220h] [rbp+120h]
  int i; // [rsp+230h] [rbp+130h]
  struct SPRITE *v46; // [rsp+238h] [rbp+138h]

  v3 = 0;
  v4 = (HDEV)(a1 + 24);
  v5 = 0LL;
  v43 = 0;
  v7 = a2;
  if ( *((_QWORD *)a3 + 1) )
  {
    v8 = (unsigned int)(8 * a1[41] + 40);
    if ( (*(_DWORD *)a3 & 4) == 0 )
    {
      v5 = (struct HDEV__ *)PALLOCMEM2(v8, 1836086087LL, 1);
      if ( v5 )
      {
        v46 = 0LL;
        v9 = 0LL;
        v40 = 0LL;
        v10 = 0;
        v11 = *(_DWORD *)a3;
        v12 = 0LL;
        v13 = *(_DWORD *)a3;
        hsurf = 0LL;
        v14 = v11 & 0x100;
        v15 = v13 & 0x40;
        for ( i = v14; (unsigned int)v12 < *((_DWORD *)v4 + 17); v12 = (unsigned int)(v12 + 1) )
        {
          v16 = 0LL;
          if ( *((_DWORD *)a3 + 6) )
          {
            do
            {
              v17 = (struct SPRITE *)*((_QWORD *)a3 + v16 + 4);
              if ( v17 )
              {
                if ( v15 && !v9 )
                  v9 = (HBITMAP)*((_QWORD *)v17 + 30);
                v18 = (_QWORD *)*((_QWORD *)v17 + 2);
                v19 = *v18;
                if ( v4 == (HDEV)v18 )
                {
                  *((_QWORD *)v5 + v12 + 4) = v17;
                  *((_QWORD *)a3 + v16 + 4) = 0LL;
                  *((_QWORD *)v17 + 1) = v5;
                }
                if ( v10 < *(_DWORD *)(v19 + 2132) )
                {
                  v46 = v17;
                  v10 = *(_DWORD *)(v19 + 2132);
                  v40 = v19;
                }
              }
              v16 = (unsigned int)(v16 + 1);
            }
            while ( (unsigned int)v16 < *((_DWORD *)a3 + 6) );
            hsurf = v9;
          }
        }
        *((_QWORD *)v5 + 1) = *((_QWORD *)a3 + 1);
        v5[6] = v4[17];
        v20 = v15 != 0 ? 0x40 : 0;
        *(_DWORD *)v5 = v20;
        if ( v14 )
          *(_DWORD *)v5 = v20 | 0x100;
        v21 = 0LL;
        if ( *((_DWORD *)v5 + 6) )
        {
          while ( 1 )
          {
            if ( !*((_QWORD *)v5 + v21 + 4) )
            {
              v36 = *(HDEV *)(*((_QWORD *)v4 + 9) + 8 * v21);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v42, (struct PDEVOBJ *)&v36);
              Sprite = pSpCreateSprite(v36, 0LL, *((HWND *)a3 + 1), 0LL);
              if ( Sprite )
              {
                v39 = v40;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v41, (struct PDEVOBJ *)&v39);
                bSpTransferShape(Sprite, v46);
                v23 = v39;
                *((_QWORD *)Sprite + 24) = *((_QWORD *)v46 + 24);
                *((_QWORD *)v46 + 24) = 0LL;
                v24 = *((_DWORD *)v46 + 29) + *(_DWORD *)(v23 + 2612) - *((_DWORD *)v36 + 653);
                v37.x = *((_DWORD *)v46 + 28) + *(_DWORD *)(v23 + 2608) - *((_DWORD *)v36 + 652);
                v37.y = v24;
                if ( (unsigned int)bSpUpdatePosition(Sprite, &v37, 0, 0) )
                {
                  v3 = v43;
                  *((_QWORD *)v5 + v21 + 4) = Sprite;
                  *((_QWORD *)Sprite + 1) = v5;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v3 = 1;
                  v43 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v41);
              }
              else
              {
                v3 = 1;
                v43 = 1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v42);
              if ( v3 )
                break;
            }
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= *((_DWORD *)v5 + 6) )
            {
              v14 = i;
              goto LABEL_30;
            }
          }
        }
        else
        {
LABEL_30:
          *((_QWORD *)v5 + 2) = *((_QWORD *)v4 + 10);
          *((_QWORD *)v4 + 10) = v5;
          if ( v15 )
          {
            v25 = 0LL;
            if ( *((_DWORD *)v5 + 6) )
            {
              v26 = hsurf;
              do
              {
                v27 = (struct SPRITE *)*((_QWORD *)v5 + v25 + 4);
                if ( (*(_DWORD *)v27 & 0x40) == 0 )
                  pSpHintSpriteShape(v27, (HSURF)v26, 0);
                v25 = (unsigned int)(v25 + 1);
              }
              while ( (unsigned int)v25 < *((_DWORD *)v5 + 6) );
            }
          }
          if ( v14 )
          {
            for ( j = 0LL; (unsigned int)j < *((_DWORD *)v5 + 6); j = (unsigned int)(j + 1) )
            {
              if ( (**((_DWORD **)v5 + j + 4) & 0x100) == 0 )
              {
                vSpCreateExMirror(*(HDEV *)v4);
                **((_DWORD **)v5 + j + 4) |= 0x100u;
              }
            }
          }
          v3 = v43;
        }
        v7 = a2;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 6); k = (unsigned int)(k + 1) )
  {
    v30 = (struct SPRITE *)*((_QWORD *)a3 + k + 4);
    if ( v30 )
    {
      if ( (*(_DWORD *)v30 & 0x40) != 0 )
        pSpHintSpriteShape(v30, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + k + 4));
    }
  }
  v31 = *((_QWORD *)v7 + 22);
  if ( (struct _METASPRITE *)v31 == a3 )
  {
    *((_QWORD *)v7 + 22) = *((_QWORD *)a3 + 2);
  }
  else
  {
    for ( m = *(_QWORD *)(v31 + 16); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 16) )
      v31 = m;
    *(_QWORD *)(v31 + 16) = *((_QWORD *)a3 + 2);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 6); n = (unsigned int)(n + 1) )
    {
      v34 = (struct SPRITE *)*((_QWORD *)v5 + n + 4);
      if ( v34 )
      {
        if ( (*(_DWORD *)v34 & 0x40) != 0 )
          pSpHintSpriteShape(v34, 0LL, 0);
        vSpDeleteSprite(*((struct SPRITE **)v5 + n + 4));
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return v5;
}
