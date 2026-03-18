/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0061784 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C00FE8E8 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026D01C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026D600 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0272120 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0272910 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0272ACC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0273014 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0273350 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0273718 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275DF4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C001DDF0 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreClientRgnUpdated @ 0x1C0061BE4 (GreClientRgnUpdated.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C008A720 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C00E7C74 (GreClientRgnUpdatedStable.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F4F24 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00F551C (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F5B88 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00F5EF0 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00FE250 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FE990 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02741C4 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0274624 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C0276CD0 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02773F0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0278854 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0278F68 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
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
  int v30; // eax
  int v31; // ecx
  struct _SURFOBJ *v32; // r10
  int v33; // ebx
  int v34; // r8d
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  signed int v40; // r9d
  signed int v41; // r8d
  struct _SURFOBJ *Surface; // rax
  unsigned int v43; // ebx
  struct _RECTL *v44; // r8
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v47; // rax
  struct _RECTL v48; // xmm0
  unsigned __int8 v49; // r11
  LONG v50; // r8d
  struct _POINTL v51; // rax
  int v52; // r9d
  BOOL v53; // ecx
  struct _CLIPOBJ *v54; // rax
  ULONG v55; // ecx
  struct _POINTL v56; // rax
  struct _POINTL v57; // rax
  LONG v58; // ebx
  LONG v59; // eax
  bool v60; // zf
  __int64 v61; // rcx
  unsigned int v62; // r9d
  unsigned int v63; // r8d
  struct SPRITE **v64; // rdx
  LONG v65; // ecx
  struct _POINTL *v66; // rdx
  struct _XLATEOBJ *v68; // [rsp+20h] [rbp-E0h]
  struct _POINTL v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+68h] [rbp-98h]
  struct _POINTL v71; // [rsp+70h] [rbp-90h] BYREF
  struct SPRITE *v72; // [rsp+78h] [rbp-88h]
  int v73; // [rsp+80h] [rbp-80h]
  struct _CLIPOBJ *v74; // [rsp+88h] [rbp-78h] BYREF
  int v75; // [rsp+90h] [rbp-70h]
  struct _RECTL *v76; // [rsp+98h] [rbp-68h] BYREF
  struct _RECTL *v77; // [rsp+A0h] [rbp-60h] BYREF
  int v78; // [rsp+A8h] [rbp-58h]
  struct _POINTL v79; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL *v80; // [rsp+B8h] [rbp-48h]
  __int64 v81; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL *v82; // [rsp+C8h] [rbp-38h]
  _QWORD v83[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL si128; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v85; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v86[4]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v87[52]; // [rsp+104h] [rbp+4h] BYREF
  __int64 v88; // [rsp+138h] [rbp+38h]
  __int64 v89; // [rsp+150h] [rbp+50h]
  int v90; // [rsp+158h] [rbp+58h]
  int v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+190h] [rbp+90h]

  v4 = (struct _RECTL *)*((_QWORD *)a1 + 14);
  v5 = a1;
  v6 = (struct _RECTL *)*((_QWORD *)a1 + 2);
  v75 = a4;
  v7 = 0;
  LODWORD(v70) = a3;
  v80 = a2;
  v72 = a1;
  v73 = 1;
  v69 = (struct _POINTL)v6;
  v77 = v4;
  v82 = v4;
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
  v71.x = *(_DWORD *)v5;
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
    v14 = v71.x;
  }
  if ( v15 )
  {
    *(_DWORD *)v5 = v14 & 0xFFFFFFDF;
    --v6[4].left;
  }
  if ( *((_QWORD *)v5 + 20) )
  {
    if ( !(_DWORD)v70 )
    {
      vSpRedrawUncoveredArea(v5, &si128);
LABEL_55:
      v7 = 0;
      goto LABEL_56;
    }
  }
  else if ( !(_DWORD)v70 )
  {
    goto LABEL_56;
  }
  v16 = (struct REGION *)*((_QWORD *)v5 + 23);
  v89 = 0LL;
  v90 = 0;
  v91 = 1;
  v92 = 0LL;
  v88 = 0LL;
  if ( v16 )
  {
    XCLIPOBJ::vSetup((XCLIPOBJ *)v86, v16, (struct SPRITE *)((char *)v5 + 80), 0);
    v74 = (struct _CLIPOBJ *)v86;
    v17 = ERECTL::bEmpty((ERECTL *)v87);
    v7 = 0;
    if ( v17 )
      goto LABEL_56;
  }
  else
  {
    v74 = 0LL;
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
    v83[0] = 0LL;
    v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
    v20 = 0LL;
    v21 = *((_QWORD *)v5 + 18);
    v22 = *(_QWORD *)(v19 + 120);
    v23 = *(_QWORD *)(*(_QWORD *)&v69 + 40LL);
    v24 = *(_DWORD *)(*((_QWORD *)v5 + 16) + 72LL);
    v81 = 0LL;
    if ( *(_DWORD *)(v23 + 72) != v24 || (*(_DWORD *)v5 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v81,
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
      v20 = v81;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v83, *((struct _SURFOBJ **)v5 + 16)) )
    {
      v76 = (struct _RECTL *)((char *)v5 + 80);
      v79.x = *((_DWORD *)v5 + 20) - (_DWORD)v4;
      v25 = *((_DWORD *)v5 + 21);
      v26 = 0LL;
      v79.y = v25 - HIDWORD(v82);
      v27 = *(_QWORD *)(*(_QWORD *)&v69 + 40LL);
      if ( v27
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(*(_QWORD *)&v69 + 40LL)) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x200) == 0 )
      {
        v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v27);
        GreLockDisplayDevice(*(_QWORD *)(v26 + 48));
      }
      v28 = 0LL;
      v29 = *((_QWORD *)v72 + 16);
      v70 = v29;
      if ( v29
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v70) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v70) + 112) & 0x200) == 0 )
      {
        v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v70);
        GreLockDisplayDevice(*(_QWORD *)(v28 + 48));
      }
      v68 = (struct _XLATEOBJ *)v20;
      v6 = (struct _RECTL *)v69;
      SpBitBlt(
        *(struct _SURFOBJ **)(*(_QWORD *)&v69 + 40LL),
        *((struct _SURFOBJ **)v72 + 16),
        0LL,
        v74,
        v68,
        v76,
        &v79,
        0LL,
        0LL,
        0LL,
        0xCCCCu);
      if ( v28 )
        GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
      if ( v26 )
        GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
      v4 = v77;
      v5 = v72;
      goto LABEL_53;
    }
LABEL_52:
    v6 = (struct _RECTL *)v69;
LABEL_53:
    vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 1);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v81);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v83);
    goto LABEL_54;
  }
LABEL_56:
  v30 = si128.right - si128.left;
  v31 = si128.bottom - si128.top;
  LODWORD(v70) = si128.right - si128.left;
  LODWORD(v72) = si128.bottom - si128.top;
  if ( si128.right == si128.left )
  {
    if ( v75 == 1 && !v6[4].left && v6->right )
      vSpUnhook((struct _SPRITESTATE *)v6);
  }
  else
  {
    *(_DWORD *)v5 |= 0x20u;
    ++v6[4].left;
    if ( v75 == 1 && !v6->right )
    {
      vSpHook((struct _SPRITESTATE *)v6);
      v30 = v70;
      v7 = 0;
      v31 = (int)v72;
    }
    v32 = (struct _SURFOBJ *)*((_QWORD *)v5 + 20);
    if ( v32 && v30 <= v32->sizlBitmap.cx && v31 <= v32->sizlBitmap.cy )
    {
      if ( si128.left < *((_DWORD *)v5 + 20)
        || si128.top < *((_DWORD *)v5 + 21)
        || si128.right > *((_DWORD *)v5 + 22)
        || si128.bottom > *((_DWORD *)v5 + 23) )
      {
        v33 = *((_DWORD *)v5 + 52);
        v34 = 0;
        if ( si128.left >= v33 )
        {
          v35 = *((_DWORD *)v5 + 54);
          if ( si128.right > v35 )
            v34 = si128.right - v35;
        }
        else
        {
          v34 = si128.left - v33;
        }
        v36 = *((_DWORD *)v5 + 53);
        LODWORD(v72) = v36;
        if ( si128.top >= v36 )
        {
          v37 = *((_DWORD *)v5 + 55);
          if ( si128.bottom > v37 )
            v7 = si128.bottom - v37;
        }
        else
        {
          v7 = si128.top - v36;
        }
        v38 = (int)v72;
        *((_DWORD *)v5 + 54) += v34;
        v39 = v7 + v38;
        *((_DWORD *)v5 + 55) += v7;
        *((_DWORD *)v5 + 53) = v39;
        *((_DWORD *)v5 + 52) = v34 + v33;
        *((_DWORD *)v5 + 43) = -v39;
        *((_DWORD *)v5 + 42) = -(v34 + v33);
        vSpSmallUnderlayCopy(
          v5,
          (struct _POINTL *)v5 + 21,
          v32,
          (struct _POINTL *)v5 + 21,
          v32,
          v34,
          v7,
          &si128,
          (struct _RECTL *)v5 + 5);
        v4 = v77;
      }
    }
    else
    {
      v40 = *((_DWORD *)v5 + 45);
      v41 = *((_DWORD *)v5 + 44);
      if ( v31 > v40 )
        v40 = v31;
      if ( v30 > v41 )
        v41 = v30;
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v6, 0, v41, v40);
      v76 = (struct _RECTL *)Surface;
      if ( !Surface )
      {
        v43 = 0;
        bSpUpdatePosition(v5, 0LL, 0, 0);
        goto LABEL_141;
      }
      Surface->fjBitmap |= 4u;
      v69.x = -si128.left;
      v69.y = -si128.top;
      if ( (int)v70 > 128 || (int)v72 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v6, &v69, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          v5,
          &v69,
          Surface,
          (struct _POINTL *)v5 + 21,
          *((struct _SURFOBJ **)v5 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)v5 + 5);
      vSpDeleteSurface(*((SURFOBJ **)v5 + 20));
      v44 = v76;
      left = si128.left;
      top = si128.top;
      v47 = v69;
      *((_DWORD *)v5 + 52) = si128.left;
      *((_QWORD *)v5 + 20) = v44;
      *((struct _POINTL *)v5 + 21) = v47;
      *((_DWORD *)v5 + 53) = top;
      *((_DWORD *)v5 + 54) = v44[2].left + left;
      *((_DWORD *)v5 + 55) = top + v44[2].top;
    }
  }
  v48 = (struct _RECTL)*((_OWORD *)v5 + 5);
  v49 = v71.x;
  v50 = *(_DWORD *)v5;
  v51 = (struct _POINTL)*((_QWORD *)v5 + 24);
  v52 = v71.x & 0x20;
  v69 = v51;
  v85 = v48;
  *((struct _RECTL *)v5 + 5) = si128;
  if ( (v52 != 0) != ((v50 & 0x20) != 0) )
  {
    v53 = !v52 && (v50 & 0x20) != 0;
    LODWORD(v70) = v53;
    if ( v51 )
      goto LABEL_112;
    v54 = (struct _CLIPOBJ *)*((_QWORD *)v5 + 1);
    v74 = v54;
    if ( !v54 )
      goto LABEL_135;
    if ( !v53 )
      goto LABEL_135;
    v55 = 0;
    LODWORD(v72) = 0;
    if ( !v54[1].iUniq )
      goto LABEL_135;
    while ( 1 )
    {
      v56 = (struct _POINTL)*((_QWORD *)&v74[1].rclBounds.top + v55);
      v79 = v56;
      if ( *(struct SPRITE **)&v56 != v5 )
      {
        v76 = *(struct _RECTL **)(*(_QWORD *)&v56 + 192LL);
        if ( v76 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v77);
          if ( v77 && RGNOBJ::bCopy((RGNOBJ *)&v77, (struct RGNOBJ *)&v76) )
          {
            LODWORD(v74) = -*(_DWORD *)(*(_QWORD *)&v79 + 112LL);
            HIDWORD(v74) = -*(_DWORD *)(*(_QWORD *)&v79 + 116LL);
            RGNOBJ::bOffset((RGNOBJ *)&v77, (struct _POINTL *)&v74);
            v60 = v78 == 1;
            v57 = (struct _POINTL)v77;
            *((_QWORD *)v5 + 24) = v77;
            v69 = v57;
            if ( !v60 )
              goto LABEL_111;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v77);
LABEL_110:
            v57 = v69;
LABEL_111:
            if ( v57 )
            {
LABEL_112:
              if ( (_DWORD)v70 )
                v58 = v80->x;
              else
                v58 = -(int)v4;
              v71.x = v58;
              if ( (_DWORD)v70 )
                v59 = v80->y;
              else
                v59 = -HIDWORD(v82);
              v71.y = v59;
              if ( !v58 )
              {
                v60 = v59 == 0;
                goto LABEL_133;
              }
              goto LABEL_134;
            }
            goto LABEL_135;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v77);
          if ( v78 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v77);
        }
      }
      v55 = (_DWORD)v72 + 1;
      LODWORD(v72) = v55;
      if ( v55 >= v74[1].iUniq )
        goto LABEL_110;
    }
  }
  if ( !*(_QWORD *)&v51 || (v49 & (unsigned __int8)v50 & 0x20) == 0 )
    goto LABEL_135;
  v61 = *((_QWORD *)v5 + 1);
  if ( v61 )
  {
    v62 = *(_DWORD *)(v61 + 24);
    v63 = 0;
    if ( v62 )
    {
      v64 = (struct SPRITE **)(v61 + 32);
      while ( *v64 == v5 || (*(_DWORD *)*v64 & 0x20) == 0 )
      {
        ++v63;
        ++v64;
        if ( v63 >= v62 )
          goto LABEL_130;
      }
      v76 = v4;
      RGNOBJ::vSet((RGNOBJ *)&v69, (struct _RECTL *)v5 + 6);
      RGNOBJ::bOffset((RGNOBJ *)&v69, (struct _POINTL *)&v76);
      v51 = v69;
    }
  }
LABEL_130:
  if ( v51 )
  {
    v65 = v80->y - HIDWORD(v82);
    v71.x = v80->x - (_DWORD)v4;
    v71.y = v65;
    if ( v71.x )
      goto LABEL_134;
    v60 = v65 == 0;
LABEL_133:
    if ( !v60 )
LABEL_134:
      RGNOBJ::bOffset((RGNOBJ *)&v69, &v71);
  }
LABEL_135:
  v6[7].bottom = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(v5);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, &si128, &v85);
  if ( !v6[7].bottom )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v6);
  vSpRemoveAllSpriteOverlapPresents(*(_QWORD **)&v6->left, v66);
LABEL_140:
  v43 = v73;
LABEL_141:
  if ( v75 == 1 )
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
  return v43;
}
