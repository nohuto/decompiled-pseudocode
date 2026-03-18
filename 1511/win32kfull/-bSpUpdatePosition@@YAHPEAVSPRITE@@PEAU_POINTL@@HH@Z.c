/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004F4A0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C010A108 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026BB8C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026C170 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0271124 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0271904 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0271AC0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0272008 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0272344 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C027270C (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0274DE8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0031F00 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreClientRgnUpdated @ 0x1C004F8F8 (GreClientRgnUpdated.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055270 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C00ECDD8 (GreClientRgnUpdatedStable.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FA144 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00FA73C (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FADA4 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00FB10C (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0108890 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010A1B0 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02731B8 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0273618 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C0275CC4 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02763E4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0277848 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0277F5C (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _RECTL *v4; // rbx
  struct SPRITE *v5; // rdi
  struct _RECTL *v6; // rsi
  int v7; // r9d
  LONG x; // edx
  LONG y; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  LONG v14; // edx
  int v15; // ecx
  struct REGION *v16; // rdx
  BOOL v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r10
  int v24; // r8d
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  int v32; // ecx
  struct _SURFOBJ *v33; // r10
  int v34; // ebx
  int v35; // r8d
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  signed int v41; // r9d
  signed int v42; // r8d
  struct _SURFOBJ *Surface; // rax
  unsigned int v44; // ebx
  struct _RECTL *v45; // r8
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v48; // rax
  struct _RECTL v49; // xmm0
  unsigned __int8 v50; // r11
  LONG v51; // r8d
  struct _POINTL v52; // rax
  int v53; // r9d
  BOOL v54; // ecx
  struct _CLIPOBJ *v55; // rax
  ULONG v56; // ecx
  struct _POINTL v57; // rax
  struct _POINTL v58; // rax
  LONG v59; // ebx
  LONG v60; // eax
  bool v61; // zf
  __int64 v62; // rcx
  unsigned int v63; // r9d
  unsigned int v64; // r8d
  struct SPRITE **v65; // rdx
  LONG v66; // ecx
  struct _POINTL *v67; // rdx
  struct _XLATEOBJ *v69; // [rsp+20h] [rbp-E0h]
  struct _POINTL v70; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h]
  struct _POINTL v72; // [rsp+70h] [rbp-90h] BYREF
  struct SPRITE *v73; // [rsp+78h] [rbp-88h]
  int v74; // [rsp+80h] [rbp-80h]
  struct _CLIPOBJ *v75; // [rsp+88h] [rbp-78h] BYREF
  int v76; // [rsp+90h] [rbp-70h]
  struct _RECTL *v77; // [rsp+98h] [rbp-68h] BYREF
  struct _RECTL *v78; // [rsp+A0h] [rbp-60h] BYREF
  int v79; // [rsp+A8h] [rbp-58h]
  struct _POINTL v80; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL *v81; // [rsp+B8h] [rbp-48h]
  __int64 v82; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL *v83; // [rsp+C8h] [rbp-38h]
  _QWORD v84[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL si128; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v86; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v87[4]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v88[52]; // [rsp+104h] [rbp+4h] BYREF
  __int64 v89; // [rsp+138h] [rbp+38h]
  __int64 v90; // [rsp+150h] [rbp+50h]
  int v91; // [rsp+158h] [rbp+58h]
  int v92; // [rsp+180h] [rbp+80h]
  __int64 v93; // [rsp+190h] [rbp+90h]

  v4 = (struct _RECTL *)*((_QWORD *)a1 + 14);
  v5 = a1;
  v6 = (struct _RECTL *)*((_QWORD *)a1 + 2);
  v76 = a4;
  v7 = 0;
  LODWORD(v71) = a3;
  v81 = a2;
  v73 = a1;
  v74 = 1;
  v70 = (struct _POINTL)v6;
  v78 = v4;
  v83 = v4;
  if ( a2 )
  {
    *((struct _POINTL *)a1 + 14) = *a2;
    x = a2->x;
    y = a2->y;
    si128.right = x + *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    v11 = *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25);
    si128.left = x;
    si128.bottom = y + v11;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)v5 & 0x11) != 0 || (v12 = bIntersect(v6 + 3, &si128, &si128), v7 = 0, !v12) )
  {
    v13 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v13 = 32;
  }
  v14 = *(_DWORD *)v5;
  v15 = *(_DWORD *)v5 & 0x20;
  v72.x = *(_DWORD *)v5;
  if ( v13 == v15 )
  {
    if ( si128.left == *((_DWORD *)v5 + 20)
      && si128.top == *((_DWORD *)v5 + 21)
      && si128.right == *((_DWORD *)v5 + 22)
      && si128.bottom == *((_DWORD *)v5 + 23) )
    {
      if ( *((_DWORD *)v5 + 1) == 2 && gpto )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, (struct _RECTL *)v5 + 5, (struct _RECTL *)v5 + 5);
      goto LABEL_140;
    }
    v14 = v72.x;
  }
  if ( v15 )
  {
    *(_DWORD *)v5 = v14 & 0xFFFFFFDF;
    --v6[4].left;
  }
  if ( *((_QWORD *)v5 + 20) )
  {
    if ( !(_DWORD)v71 )
    {
      vSpRedrawUncoveredArea(v5, &si128);
LABEL_55:
      v7 = 0;
      goto LABEL_56;
    }
  }
  else if ( !(_DWORD)v71 )
  {
    goto LABEL_56;
  }
  v16 = (struct REGION *)*((_QWORD *)v5 + 23);
  v90 = 0LL;
  v91 = 0;
  v92 = 1;
  v93 = 0LL;
  v89 = 0LL;
  if ( v16 )
  {
    XCLIPOBJ::vSetup((XCLIPOBJ *)v87, v16, (struct SPRITE *)((char *)v5 + 80), 0);
    v75 = (struct _CLIPOBJ *)v87;
    v17 = ERECTL::bEmpty((ERECTL *)v88);
    v7 = 0;
    if ( v17 )
      goto LABEL_56;
  }
  else
  {
    v75 = 0LL;
  }
  if ( *((_QWORD *)v5 + 16) )
  {
    if ( *((_DWORD *)v5 + 56) == 3 && !*((_BYTE *)v5 + 231) || *((_DWORD *)v5 + 1) == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)v6, (struct _RECTL *)v5 + 5, 1);
LABEL_54:
      GreClientRgnUpdated(0);
      GreClientRgnUpdatedStable();
      goto LABEL_55;
    }
    vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 0);
    v18 = *(_QWORD **)&v6[2].right;
    v84[0] = 0LL;
    v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
    v20 = 0LL;
    v21 = *((_QWORD *)v5 + 18);
    v22 = *(_QWORD *)(v19 + 120);
    v23 = *(_QWORD *)(*(_QWORD *)&v70 + 40LL);
    v24 = *(_DWORD *)(*((_QWORD *)v5 + 16) + 72LL);
    v82 = 0LL;
    if ( *(_DWORD *)(v23 + 72) != v24 || (*(_DWORD *)v5 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v82,
                            0LL,
                            0,
                            v21,
                            v22,
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0) )
        goto LABEL_52;
      v20 = v82;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v84, *((struct _SURFOBJ **)v5 + 16)) )
    {
      v77 = (struct _RECTL *)((char *)v5 + 80);
      v80.x = *((_DWORD *)v5 + 20) - (_DWORD)v4;
      v25 = *((_DWORD *)v5 + 21);
      v26 = 0LL;
      v80.y = v25 - HIDWORD(v83);
      v27 = *(_QWORD *)(*(_QWORD *)&v70 + 40LL);
      if ( v27
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(*(_QWORD *)&v70 + 40LL)) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x200) == 0 )
      {
        v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v27);
        GreLockDisplayDevice(*(_QWORD *)(v26 + 48));
      }
      v28 = 0LL;
      v29 = *((_QWORD *)v73 + 16);
      v71 = v29;
      if ( v29
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v71) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v71) + 112) & 0x200) == 0 )
      {
        v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v71);
        GreLockDisplayDevice(*(_QWORD *)(v28 + 48));
      }
      v69 = (struct _XLATEOBJ *)v20;
      v6 = (struct _RECTL *)v70;
      SpBitBlt(
        *(struct _SURFOBJ **)(*(_QWORD *)&v70 + 40LL),
        *((struct _SURFOBJ **)v73 + 16),
        0LL,
        v75,
        v69,
        v77,
        &v80,
        0LL,
        0LL,
        0LL,
        0xCCCCu);
      if ( v28 )
        GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
      if ( v26 )
        GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
      v4 = v78;
      v5 = v73;
      goto LABEL_53;
    }
LABEL_52:
    v6 = (struct _RECTL *)v70;
LABEL_53:
    vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 1);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v82, v30);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v84);
    goto LABEL_54;
  }
LABEL_56:
  v31 = si128.right - si128.left;
  v32 = si128.bottom - si128.top;
  LODWORD(v71) = si128.right - si128.left;
  LODWORD(v73) = si128.bottom - si128.top;
  if ( si128.right == si128.left )
  {
    if ( v76 == 1 && !v6[4].left && v6->right )
      vSpUnhook((struct _SPRITESTATE *)v6);
  }
  else
  {
    *(_DWORD *)v5 |= 0x20u;
    ++v6[4].left;
    if ( v76 == 1 && !v6->right )
    {
      vSpHook((struct _SPRITESTATE *)v6);
      v31 = v71;
      v7 = 0;
      v32 = (int)v73;
    }
    v33 = (struct _SURFOBJ *)*((_QWORD *)v5 + 20);
    if ( v33 && v31 <= v33->sizlBitmap.cx && v32 <= v33->sizlBitmap.cy )
    {
      if ( si128.left < *((_DWORD *)v5 + 20)
        || si128.top < *((_DWORD *)v5 + 21)
        || si128.right > *((_DWORD *)v5 + 22)
        || si128.bottom > *((_DWORD *)v5 + 23) )
      {
        v34 = *((_DWORD *)v5 + 52);
        v35 = 0;
        if ( si128.left >= v34 )
        {
          v36 = *((_DWORD *)v5 + 54);
          if ( si128.right > v36 )
            v35 = si128.right - v36;
        }
        else
        {
          v35 = si128.left - v34;
        }
        v37 = *((_DWORD *)v5 + 53);
        LODWORD(v73) = v37;
        if ( si128.top >= v37 )
        {
          v38 = *((_DWORD *)v5 + 55);
          if ( si128.bottom > v38 )
            v7 = si128.bottom - v38;
        }
        else
        {
          v7 = si128.top - v37;
        }
        v39 = (int)v73;
        *((_DWORD *)v5 + 54) += v35;
        v40 = v7 + v39;
        *((_DWORD *)v5 + 55) += v7;
        *((_DWORD *)v5 + 53) = v40;
        *((_DWORD *)v5 + 52) = v35 + v34;
        *((_DWORD *)v5 + 43) = -v40;
        *((_DWORD *)v5 + 42) = -(v35 + v34);
        vSpSmallUnderlayCopy(
          v5,
          (struct _POINTL *)v5 + 21,
          v33,
          (struct _POINTL *)v5 + 21,
          v33,
          v35,
          v7,
          &si128,
          (struct _RECTL *)v5 + 5);
        v4 = v78;
      }
    }
    else
    {
      v41 = *((_DWORD *)v5 + 45);
      v42 = *((_DWORD *)v5 + 44);
      if ( v32 > v41 )
        v41 = v32;
      if ( v31 > v42 )
        v42 = v31;
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v6, 0, v42, v41);
      v77 = (struct _RECTL *)Surface;
      if ( !Surface )
      {
        v44 = 0;
        bSpUpdatePosition(v5, 0LL, 0, 0);
        goto LABEL_141;
      }
      Surface->fjBitmap |= 4u;
      v70.x = -si128.left;
      v70.y = -si128.top;
      if ( (int)v71 > 128 || (int)v73 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v6, &v70, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          v5,
          &v70,
          Surface,
          (struct _POINTL *)v5 + 21,
          *((struct _SURFOBJ **)v5 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)v5 + 5);
      vSpDeleteSurface(*((SURFOBJ **)v5 + 20));
      v45 = v77;
      left = si128.left;
      top = si128.top;
      v48 = v70;
      *((_DWORD *)v5 + 52) = si128.left;
      *((_QWORD *)v5 + 20) = v45;
      *((struct _POINTL *)v5 + 21) = v48;
      *((_DWORD *)v5 + 53) = top;
      *((_DWORD *)v5 + 54) = v45[2].left + left;
      *((_DWORD *)v5 + 55) = top + v45[2].top;
    }
  }
  v49 = (struct _RECTL)*((_OWORD *)v5 + 5);
  v50 = v72.x;
  v51 = *(_DWORD *)v5;
  v52 = (struct _POINTL)*((_QWORD *)v5 + 24);
  v53 = v72.x & 0x20;
  v70 = v52;
  v86 = v49;
  *((struct _RECTL *)v5 + 5) = si128;
  if ( (v53 != 0) != ((v51 & 0x20) != 0) )
  {
    v54 = !v53 && (v51 & 0x20) != 0;
    LODWORD(v71) = v54;
    if ( v52 )
      goto LABEL_112;
    v55 = (struct _CLIPOBJ *)*((_QWORD *)v5 + 1);
    v75 = v55;
    if ( !v55 )
      goto LABEL_135;
    if ( !v54 )
      goto LABEL_135;
    v56 = 0;
    LODWORD(v73) = 0;
    if ( !v55[1].iUniq )
      goto LABEL_135;
    while ( 1 )
    {
      v57 = (struct _POINTL)*((_QWORD *)&v75[1].rclBounds.top + v56);
      v80 = v57;
      if ( *(struct SPRITE **)&v57 != v5 )
      {
        v77 = *(struct _RECTL **)(*(_QWORD *)&v57 + 192LL);
        if ( v77 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v78);
          if ( v78 && RGNOBJ::bCopy((RGNOBJ *)&v78, (struct RGNOBJ *)&v77) )
          {
            LODWORD(v75) = -*(_DWORD *)(*(_QWORD *)&v80 + 112LL);
            HIDWORD(v75) = -*(_DWORD *)(*(_QWORD *)&v80 + 116LL);
            RGNOBJ::bOffset((RGNOBJ *)&v78, (struct _POINTL *)&v75);
            v61 = v79 == 1;
            v58 = (struct _POINTL)v78;
            *((_QWORD *)v5 + 24) = v78;
            v70 = v58;
            if ( !v61 )
              goto LABEL_111;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v78);
LABEL_110:
            v58 = v70;
LABEL_111:
            if ( v58 )
            {
LABEL_112:
              if ( (_DWORD)v71 )
                v59 = v81->x;
              else
                v59 = -(int)v4;
              v72.x = v59;
              if ( (_DWORD)v71 )
                v60 = v81->y;
              else
                v60 = -HIDWORD(v83);
              v72.y = v60;
              if ( !v59 )
              {
                v61 = v60 == 0;
                goto LABEL_133;
              }
              goto LABEL_134;
            }
            goto LABEL_135;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v78);
          if ( v79 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v78);
        }
      }
      v56 = (_DWORD)v73 + 1;
      LODWORD(v73) = v56;
      if ( v56 >= v75[1].iUniq )
        goto LABEL_110;
    }
  }
  if ( !*(_QWORD *)&v52 || (v50 & (unsigned __int8)v51 & 0x20) == 0 )
    goto LABEL_135;
  v62 = *((_QWORD *)v5 + 1);
  if ( v62 )
  {
    v63 = *(_DWORD *)(v62 + 24);
    v64 = 0;
    if ( v63 )
    {
      v65 = (struct SPRITE **)(v62 + 32);
      while ( *v65 == v5 || (*(_DWORD *)*v65 & 0x20) == 0 )
      {
        ++v64;
        ++v65;
        if ( v64 >= v63 )
          goto LABEL_130;
      }
      v77 = v4;
      RGNOBJ::vSet((RGNOBJ *)&v70, (struct _RECTL *)v5 + 6);
      RGNOBJ::bOffset((RGNOBJ *)&v70, (struct _POINTL *)&v77);
      v52 = v70;
    }
  }
LABEL_130:
  if ( v52 )
  {
    v66 = v81->y - HIDWORD(v83);
    v72.x = v81->x - (_DWORD)v4;
    v72.y = v66;
    if ( v72.x )
      goto LABEL_134;
    v61 = v66 == 0;
LABEL_133:
    if ( !v61 )
LABEL_134:
      RGNOBJ::bOffset((RGNOBJ *)&v70, &v72);
  }
LABEL_135:
  v6[7].bottom = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(v5);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, &si128, &v86);
  if ( !v6[7].bottom )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v6);
  vSpRemoveAllSpriteOverlapPresents(*(_QWORD **)&v6->left, v67);
LABEL_140:
  v44 = v74;
LABEL_141:
  if ( v76 == 1 )
  {
    if ( v6[4].left )
    {
      if ( !v6->right )
        vSpHook((struct _SPRITESTATE *)v6);
    }
    else if ( v6->right )
    {
      vSpUnhook((struct _SPRITESTATE *)v6);
    }
  }
  return v44;
}
