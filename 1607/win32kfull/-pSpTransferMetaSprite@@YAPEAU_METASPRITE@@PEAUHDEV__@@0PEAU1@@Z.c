/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027089C
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

struct HDEV__ *__fastcall pSpTransferMetaSprite(_DWORD *a1, _QWORD *a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // r14
  struct HDEV__ *v5; // rbx
  _QWORD *v7; // r15
  size_t v8; // rcx
  __int64 v9; // r8
  HBITMAP v10; // rsi
  unsigned int v11; // r11d
  int v12; // r12d
  __int64 v13; // r9
  char v14; // r13
  int v15; // r12d
  int v16; // r13d
  _QWORD *v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // r15
  __int64 v21; // rdx
  struct SPRITE *Sprite; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  LONG v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  HBITMAP v31; // r15
  struct SPRITE *v32; // rcx
  __int64 j; // rsi
  __int64 k; // rsi
  struct SPRITE *v35; // rcx
  __int64 v36; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v39; // rcx
  HDEV v41; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v42; // [rsp+28h] [rbp-D8h]
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  struct _POINTL v44; // [rsp+38h] [rbp-C8h] BYREF
  HBITMAP hsurf; // [rsp+40h] [rbp-C0h]
  struct _SPRITESTATE *v46[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _SPRITESTATE *v47[32]; // [rsp+110h] [rbp+10h] BYREF
  int v48; // [rsp+220h] [rbp+120h]
  _QWORD *v49; // [rsp+228h] [rbp+128h]
  int i; // [rsp+230h] [rbp+130h]
  struct SPRITE *v51; // [rsp+238h] [rbp+138h]

  v49 = a2;
  v3 = 0;
  v4 = (HDEV)(a1 + 24);
  v5 = 0LL;
  v48 = 0;
  v7 = a2;
  if ( *((_QWORD *)a3 + 1) )
  {
    v8 = (unsigned int)(8 * a1[41] + 40);
    if ( (*(_DWORD *)a3 & 4) == 0 )
    {
      v5 = (struct HDEV__ *)PALLOCMEM2(v8, 1836086087LL, 1);
      if ( v5 )
      {
        v51 = 0LL;
        v10 = 0LL;
        v42 = 0LL;
        v11 = 0;
        v12 = *(_DWORD *)a3;
        v13 = 0LL;
        v14 = *(_DWORD *)a3;
        hsurf = 0LL;
        v15 = v12 & 0x100;
        v16 = v14 & 0x40;
        for ( i = v15; (unsigned int)v13 < *((_DWORD *)v4 + 17); v13 = (unsigned int)(v13 + 1) )
        {
          v9 = 0LL;
          if ( *((_DWORD *)a3 + 6) )
          {
            do
            {
              a2 = (_QWORD *)*((_QWORD *)a3 + v9 + 4);
              if ( a2 )
              {
                if ( v16 && !v10 )
                  v10 = (HBITMAP)a2[30];
                v17 = (_QWORD *)a2[2];
                v18 = *v17;
                if ( v4 == (HDEV)v17 )
                {
                  *((_QWORD *)v5 + v13 + 4) = a2;
                  *((_QWORD *)a3 + v9 + 4) = 0LL;
                  a2[1] = v5;
                }
                if ( v11 < *(_DWORD *)(v18 + 2132) )
                {
                  v51 = (struct SPRITE *)a2;
                  v11 = *(_DWORD *)(v18 + 2132);
                  v42 = v18;
                }
              }
              v9 = (unsigned int)(v9 + 1);
            }
            while ( (unsigned int)v9 < *((_DWORD *)a3 + 6) );
            hsurf = v10;
          }
        }
        *((_QWORD *)v5 + 1) = *((_QWORD *)a3 + 1);
        v5[6] = v4[17];
        v19 = v16 != 0 ? 0x40 : 0;
        *(_DWORD *)v5 = v19;
        if ( v15 )
          *(_DWORD *)v5 = v19 | 0x100;
        v20 = 0LL;
        if ( *((_DWORD *)v5 + 6) )
        {
          while ( 1 )
          {
            if ( !*((_QWORD *)v5 + v20 + 4) )
            {
              v41 = *(HDEV *)(*((_QWORD *)v4 + 9) + 8 * v20);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v47, (struct PDEVOBJ *)&v41, v9, v13);
              Sprite = pSpCreateSprite(v41, 0LL, *((HWND *)a3 + 1), 0LL);
              if ( Sprite )
              {
                v43 = v42;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v46, (struct PDEVOBJ *)&v43, v23, v24);
                bSpTransferShape(Sprite, v51);
                v25 = v43;
                *((_QWORD *)Sprite + 24) = *((_QWORD *)v51 + 24);
                *((_QWORD *)v51 + 24) = 0LL;
                v26 = *((_DWORD *)v51 + 29) + *(_DWORD *)(v25 + 2612) - *((_DWORD *)v41 + 653);
                v44.x = *((_DWORD *)v51 + 28) + *(_DWORD *)(v25 + 2608) - *((_DWORD *)v41 + 652);
                v44.y = v26;
                if ( (unsigned int)bSpUpdatePosition(Sprite, &v44, 0, 0) )
                {
                  v3 = v48;
                  *((_QWORD *)v5 + v20 + 4) = Sprite;
                  *((_QWORD *)Sprite + 1) = v5;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v3 = 1;
                  v48 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v46, v27, v28, v29);
              }
              else
              {
                v3 = 1;
                v48 = 1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v47, v21, v23, v24);
              if ( v3 )
                break;
            }
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= *((_DWORD *)v5 + 6) )
            {
              v15 = i;
              goto LABEL_30;
            }
          }
        }
        else
        {
LABEL_30:
          *((_QWORD *)v5 + 2) = *((_QWORD *)v4 + 10);
          *((_QWORD *)v4 + 10) = v5;
          if ( v16 )
          {
            v30 = 0LL;
            if ( *((_DWORD *)v5 + 6) )
            {
              v31 = hsurf;
              do
              {
                v32 = (struct SPRITE *)*((_QWORD *)v5 + v30 + 4);
                if ( (*(_DWORD *)v32 & 0x40) == 0 )
                  pSpHintSpriteShape(v32, (HSURF)v31, 0);
                v30 = (unsigned int)(v30 + 1);
              }
              while ( (unsigned int)v30 < *((_DWORD *)v5 + 6) );
            }
          }
          if ( v15 )
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
          v3 = v48;
        }
        v7 = v49;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 6); k = (unsigned int)(k + 1) )
  {
    v35 = (struct SPRITE *)*((_QWORD *)a3 + k + 4);
    if ( v35 )
    {
      if ( (*(_DWORD *)v35 & 0x40) != 0 )
        pSpHintSpriteShape(v35, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + k + 4));
    }
  }
  v36 = v7[22];
  if ( (struct _METASPRITE *)v36 == a3 )
  {
    v7[22] = *((_QWORD *)a3 + 2);
  }
  else
  {
    for ( m = *(_QWORD *)(v36 + 16); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 16) )
      v36 = m;
    *(_QWORD *)(v36 + 16) = *((_QWORD *)a3 + 2);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 6); n = (unsigned int)(n + 1) )
    {
      v39 = (struct SPRITE *)*((_QWORD *)v5 + n + 4);
      if ( v39 )
      {
        if ( (*(_DWORD *)v39 & 0x40) != 0 )
          pSpHintSpriteShape(v39, 0LL, 0);
        vSpDeleteSprite(*((struct SPRITE **)v5 + n + 4));
      }
    }
    Win32FreePool(v5, a2);
    v5 = 0LL;
  }
  Win32FreePool(a3, a2);
  return v5;
}
