/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004F4A0
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C004EF40 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0053D80 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0053DB0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FA7B8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     UserVisrgnFromHwnd @ 0x1C01E7D14 (UserVisrgnFromHwnd.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0273618 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C0275C94 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02771F0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02787F0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  HDEV v2; // rsi
  HDEV v3; // r14
  int v4; // r13d
  __int64 i; // rdi
  __int64 v6; // rdx
  struct REGION *v7; // rdx
  int v8; // ebx
  struct REGION *v9; // r15
  int v10; // r9d
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // r12d
  unsigned int v16; // r14d
  int v17; // r15d
  int v18; // eax
  int v19; // eax
  int v20; // edx
  struct _POINTL *v21; // rdx
  struct REGION *v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  struct REGION *v25; // [rsp+50h] [rbp-B8h]
  struct _POINTL v26; // [rsp+58h] [rbp-B0h] BYREF
  HDEV v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v29[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v30[192]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v31[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v32[4]; // [rsp+158h] [rbp+50h] BYREF
  char v33[16]; // [rsp+15Ch] [rbp+54h] BYREF
  char v34; // [rsp+16Ch] [rbp+64h]
  __int64 v35; // [rsp+190h] [rbp+88h]
  __int64 v36; // [rsp+1A8h] [rbp+A0h]
  int v37; // [rsp+1B0h] [rbp+A8h]
  int v38; // [rsp+1D8h] [rbp+D0h]
  __int64 v39; // [rsp+1E8h] [rbp+E0h]
  _BYTE v40[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v41[16]; // [rsp+1FCh] [rbp+F4h] BYREF
  char v42; // [rsp+20Ch] [rbp+104h]
  __int64 v43; // [rsp+230h] [rbp+128h]
  __int64 v44; // [rsp+248h] [rbp+140h]
  int v45; // [rsp+250h] [rbp+148h]
  int v46; // [rsp+278h] [rbp+170h]
  __int64 v47; // [rsp+288h] [rbp+180h]
  _DWORD v48[84]; // [rsp+298h] [rbp+190h] BYREF
  _DWORD v49[84]; // [rsp+3E8h] [rbp+2E0h] BYREF

  v2 = a1 + 24;
  v27 = a1;
  v3 = a1;
  if ( *((_QWORD *)a1 + 14) )
  {
    v4 = 1;
    if ( (a2 & 4) != 0 )
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(a1 + 24), 1);
    for ( i = *((_QWORD *)v2 + 2); ; i = *(_QWORD *)(i + 24) )
    {
      if ( !i )
        return;
      v6 = *(_QWORD *)(i + 72);
      if ( v6 )
        break;
LABEL_45:
      ;
    }
    UserVisrgnFromHwnd(v2 + 266, v6, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v29, *((HRGN *)v2 + 133), 0);
    if ( !v29[0] || !v22 || !RGNOBJ::bCopy((RGNOBJ *)&v22, (struct RGNOBJ *)v29) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
LABEL_43:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v29);
      if ( (_DWORD)v23 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
      goto LABEL_45;
    }
    v26.x = -*((_DWORD *)v3 + 652);
    v26.y = -*((_DWORD *)v3 + 653);
    RGNOBJ::bOffset((RGNOBJ *)&v22, &v26);
    v7 = *(struct REGION **)(i + 184);
    v8 = 1;
    v9 = v22;
    v25 = v22;
    if ( v7 )
    {
      v10 = *(_DWORD *)(i + 116);
      v11 = *(_DWORD *)(i + 112) + *(_DWORD *)(i + 104) - *(_DWORD *)(i + 96);
      v31[0] = *(_DWORD *)(i + 112);
      v31[2] = v11;
      v12 = v10 + *(_DWORD *)(i + 108) - *(_DWORD *)(i + 100);
      v31[1] = v10;
      v31[3] = v12;
      v36 = 0LL;
      v37 = 0;
      v38 = 1;
      v39 = 0LL;
      v35 = 0LL;
      v44 = 0LL;
      v45 = 0;
      v46 = 1;
      v47 = 0LL;
      v43 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v32, v7, (struct ERECTL *)v31, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v40, v9, (struct ERECTL *)v31, 0);
      ERECTL::bEmpty((ERECTL *)v33);
      v13 = ERECTL::bEmpty((ERECTL *)v41);
      if ( v13 == v14 )
      {
        if ( !v34 && !v42 )
          goto LABEL_32;
        if ( v34 == v42 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v32, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v40, 0, 0, 4u, 0x64u);
          v15 = 1;
          while ( 1 )
          {
            v16 = 0;
            v17 = 0;
            v48[0] = 0;
            v49[0] = 0;
            if ( v15 )
            {
              v18 = XCLIPOBJ::bEnum((XCLIPOBJ *)v32, 0x144u, (char *)v48, 0LL);
              v16 = v48[0];
              v15 = v18;
            }
            if ( v4 )
            {
              v19 = XCLIPOBJ::bEnum((XCLIPOBJ *)v40, 0x144u, (char *)v49, 0LL);
              v17 = v49[0];
              v4 = v19;
            }
            if ( v16 != v17 )
              break;
            v20 = 0;
            if ( v16 )
            {
              while ( v49[4 * v20 + 1] == v48[4 * v20 + 1]
                   && v49[4 * v20 + 2] == v48[4 * v20 + 2]
                   && v49[4 * v20 + 3] == v48[4 * v20 + 3]
                   && v49[4 * v20 + 4] == v48[4 * v20 + 4] )
              {
                if ( ++v20 >= v16 )
                  goto LABEL_29;
              }
              v8 = 0;
              v15 = 0;
              v4 = 0;
            }
LABEL_29:
            if ( !v15 && !v4 )
              goto LABEL_31;
          }
          v8 = 0;
LABEL_31:
          v9 = v25;
          v4 = 1;
          v3 = v27;
          goto LABEL_32;
        }
      }
    }
    v8 = 0;
LABEL_32:
    vSpFreeClipResources((struct SPRITE *)i);
    *(_QWORD *)(i + 184) = v9;
    *((_DWORD *)v9 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
    v24 = *(_QWORD *)v2;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v28, (struct PDEVOBJ *)&v24);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v30, (struct PDEVOBJ *)&v24);
    *(_DWORD *)i &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v22, (struct _RECTL *)v2 + 3) != 2 )
      *(_DWORD *)i |= 1u;
    bSpUpdatePosition((struct SPRITE *)i, (struct _POINTL *)(i + 112), 0, 0);
    if ( gpto )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v2, (struct _RECTL *)(i + 80), (struct _RECTL *)(i + 80));
    if ( !v8 )
    {
      if ( *((_QWORD *)v2 + 130) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v21, (struct _RECTL *)(i + 80), 0LL, 1);
      vSpRedrawSprite((struct SPRITE *)i);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v30);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v28);
    goto LABEL_43;
  }
}
