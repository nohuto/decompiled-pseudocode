/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0075788
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C0075160 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C011C228 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     UserVisrgnFromHwnd @ 0x1C01DE564 (UserVisrgnFromHwnd.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0271B70 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C02741E8 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275738 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0276D38 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
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
  __int64 v21; // r8
  __int64 v22; // r9
  struct _POINTL *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct REGION *v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C8h]
  struct _POINTL v28; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v29; // [rsp+50h] [rbp-B8h]
  struct REGION *v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v33[7]; // [rsp+70h] [rbp-98h] BYREF
  struct _SPRITESTATE *v34[24]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v35[4]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v36[4]; // [rsp+178h] [rbp+70h] BYREF
  char v37[16]; // [rsp+17Ch] [rbp+74h] BYREF
  char v38; // [rsp+18Ch] [rbp+84h]
  __int64 v39; // [rsp+1B0h] [rbp+A8h]
  __int64 v40; // [rsp+1C8h] [rbp+C0h]
  int v41; // [rsp+1D0h] [rbp+C8h]
  int v42; // [rsp+1F8h] [rbp+F0h]
  __int64 v43; // [rsp+208h] [rbp+100h]
  _BYTE v44[4]; // [rsp+218h] [rbp+110h] BYREF
  char v45[16]; // [rsp+21Ch] [rbp+114h] BYREF
  char v46; // [rsp+22Ch] [rbp+124h]
  __int64 v47; // [rsp+250h] [rbp+148h]
  __int64 v48; // [rsp+268h] [rbp+160h]
  int v49; // [rsp+270h] [rbp+168h]
  int v50; // [rsp+298h] [rbp+190h]
  __int64 v51; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v52[84]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _DWORD v53[84]; // [rsp+408h] [rbp+300h] BYREF

  v2 = a1 + 24;
  v29 = a1;
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
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v33, *((HRGN *)v2 + 133), 0, 0);
    if ( !v33[0] || !v26 || !RGNOBJ::bCopy((RGNOBJ *)&v26, (struct RGNOBJ *)v33) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
LABEL_43:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v33);
      if ( v27 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
      goto LABEL_45;
    }
    v28.x = -*((_DWORD *)v3 + 652);
    v28.y = -*((_DWORD *)v3 + 653);
    RGNOBJ::bOffset((RGNOBJ *)&v26, &v28);
    v7 = *(struct REGION **)(i + 184);
    v8 = 1;
    v9 = v26;
    v30 = v26;
    if ( v7 )
    {
      v10 = *(_DWORD *)(i + 116);
      v11 = *(_DWORD *)(i + 112) + *(_DWORD *)(i + 104) - *(_DWORD *)(i + 96);
      v35[0] = *(_DWORD *)(i + 112);
      v35[2] = v11;
      v12 = v10 + *(_DWORD *)(i + 108) - *(_DWORD *)(i + 100);
      v35[1] = v10;
      v35[3] = v12;
      v40 = 0LL;
      v41 = 0;
      v42 = 1;
      v43 = 0LL;
      v39 = 0LL;
      v48 = 0LL;
      v49 = 0;
      v50 = 1;
      v51 = 0LL;
      v47 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v36, v7, (struct ERECTL *)v35, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v44, v9, (struct ERECTL *)v35, 0);
      ERECTL::bEmpty((ERECTL *)v37);
      v13 = ERECTL::bEmpty((ERECTL *)v45);
      if ( v13 == v14 )
      {
        if ( !v38 && !v46 )
          goto LABEL_32;
        if ( v38 == v46 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v36, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v44, 0, 0, 4u, 0x64u);
          v15 = 1;
          while ( 1 )
          {
            v16 = 0;
            v17 = 0;
            v52[0] = 0;
            v53[0] = 0;
            if ( v15 )
            {
              v18 = XCLIPOBJ::bEnum((XCLIPOBJ *)v36, 0x144u, (char *)v52, 0LL);
              v16 = v52[0];
              v15 = v18;
            }
            if ( v4 )
            {
              v19 = XCLIPOBJ::bEnum((XCLIPOBJ *)v44, 0x144u, (char *)v53, 0LL);
              v17 = v53[0];
              v4 = v19;
            }
            if ( v16 != v17 )
              break;
            v20 = 0;
            if ( v16 )
            {
              while ( v53[4 * v20 + 1] == v52[4 * v20 + 1]
                   && v53[4 * v20 + 2] == v52[4 * v20 + 2]
                   && v53[4 * v20 + 3] == v52[4 * v20 + 3]
                   && v53[4 * v20 + 4] == v52[4 * v20 + 4] )
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
          v9 = v30;
          v4 = 1;
          v3 = v29;
          goto LABEL_32;
        }
      }
    }
    v8 = 0;
LABEL_32:
    vSpFreeClipResources((struct SPRITE *)i);
    *(_QWORD *)(i + 184) = v9;
    *((_DWORD *)v9 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
    v31 = *(_QWORD *)v2;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v32, (struct PDEVOBJ *)&v31);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v34, (struct PDEVOBJ *)&v31, v21, v22);
    *(_DWORD *)i &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v26, (struct _RECTL *)v2 + 3) != 2 )
      *(_DWORD *)i |= 1u;
    bSpUpdatePosition((struct SPRITE *)i, (struct _POINTL *)(i + 112), 0, 0);
    if ( gpto )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v2, (struct _RECTL *)(i + 80), (struct _RECTL *)(i + 80));
    if ( !v8 )
    {
      if ( *((_QWORD *)v2 + 130) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v23, (struct _RECTL *)(i + 80), 0LL, 1);
      vSpRedrawSprite((struct SPRITE *)i);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v34, (__int64)v23, v24, v25);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v32);
    goto LABEL_43;
  }
}
