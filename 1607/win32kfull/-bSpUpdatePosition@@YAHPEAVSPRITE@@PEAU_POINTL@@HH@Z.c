/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0075788 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C012BCA8 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026A044 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026A628 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C026F61C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C026FE30 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C026FFEC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0270534 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027089C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0270C64 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C027333C (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C003D6F0 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055DD8 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreClientRgnUpdated @ 0x1C0075BE8 (GreClientRgnUpdated.c)
 *     GreClientRgnUpdatedStable @ 0x1C010BD6C (GreClientRgnUpdatedStable.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011BBB0 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C011C1AC (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C818 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C011CB80 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0129E60 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C012BD50 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271710 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0271B70 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C0274218 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C027492C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0275D90 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C02764A4 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _RECTL *v4; // rbx
  struct SPRITE *v5; // rdi
  struct _RECTL *v6; // rsi
  int v7; // r9d
  __int64 v8; // r8
  LONG x; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  LONG v13; // edx
  int v14; // ecx
  struct REGION *v15; // rdx
  BOOL v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r10
  int v23; // r8d
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rax
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
  LONG y; // eax
  bool v61; // zf
  __int64 v62; // rcx
  unsigned int v63; // r9d
  unsigned int v64; // r8d
  struct SPRITE **v65; // rdx
  LONG v66; // ecx
  struct _POINTL *v67; // rdx
  __int64 v68; // r8
  struct _XLATEOBJ *v70; // [rsp+20h] [rbp-E0h]
  struct _POINTL v71; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+68h] [rbp-98h]
  struct _POINTL v73; // [rsp+70h] [rbp-90h] BYREF
  struct SPRITE *v74; // [rsp+78h] [rbp-88h]
  int v75; // [rsp+80h] [rbp-80h]
  struct _CLIPOBJ *v76; // [rsp+88h] [rbp-78h] BYREF
  int v77; // [rsp+90h] [rbp-70h]
  struct _RECTL *v78; // [rsp+98h] [rbp-68h] BYREF
  struct _RECTL *v79; // [rsp+A0h] [rbp-60h] BYREF
  int v80; // [rsp+A8h] [rbp-58h]
  struct _POINTL v81; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-48h] BYREF
  struct _POINTL *v83; // [rsp+C0h] [rbp-40h]
  struct _RECTL *v84; // [rsp+C8h] [rbp-38h]
  _QWORD v85[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL si128; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v87; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v88[4]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v89[52]; // [rsp+104h] [rbp+4h] BYREF
  __int64 v90; // [rsp+138h] [rbp+38h]
  __int64 v91; // [rsp+150h] [rbp+50h]
  int v92; // [rsp+158h] [rbp+58h]
  int v93; // [rsp+180h] [rbp+80h]
  __int64 v94; // [rsp+190h] [rbp+90h]

  v4 = (struct _RECTL *)*((_QWORD *)a1 + 14);
  v5 = a1;
  v6 = (struct _RECTL *)*((_QWORD *)a1 + 2);
  v77 = a4;
  v7 = 0;
  LODWORD(v72) = a3;
  v8 = (__int64)a2;
  v83 = a2;
  v74 = a1;
  v75 = 1;
  v71 = (struct _POINTL)v6;
  v79 = v4;
  v84 = v4;
  if ( a2 )
  {
    *((struct _POINTL *)a1 + 14) = *a2;
    x = a2->x;
    v8 = *(unsigned int *)(v8 + 4);
    si128.right = x + *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    v10 = *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25);
    si128.left = x;
    si128.bottom = v8 + v10;
    si128.top = v8;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)v5 & 0x11) != 0 || (v11 = bIntersect(v6 + 3, &si128, &si128), v7 = 0, !v11) )
  {
    v12 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v12 = 32;
  }
  v13 = *(_DWORD *)v5;
  v14 = *(_DWORD *)v5 & 0x20;
  v73.x = *(_DWORD *)v5;
  if ( v12 == v14 )
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
    v13 = v73.x;
  }
  if ( v14 )
  {
    *(_DWORD *)v5 = v13 & 0xFFFFFFDF;
    --v6[4].left;
  }
  if ( *((_QWORD *)v5 + 20) )
  {
    if ( !(_DWORD)v72 )
    {
      vSpRedrawUncoveredArea(v5, &si128);
LABEL_55:
      v7 = 0;
      goto LABEL_56;
    }
  }
  else if ( !(_DWORD)v72 )
  {
    goto LABEL_56;
  }
  v15 = (struct REGION *)*((_QWORD *)v5 + 23);
  v91 = 0LL;
  v92 = 0;
  v93 = 1;
  v94 = 0LL;
  v90 = 0LL;
  if ( v15 )
  {
    XCLIPOBJ::vSetup((XCLIPOBJ *)v88, v15, (struct SPRITE *)((char *)v5 + 80), 0);
    v76 = (struct _CLIPOBJ *)v88;
    v16 = ERECTL::bEmpty((ERECTL *)v89);
    v7 = 0;
    if ( v16 )
      goto LABEL_56;
  }
  else
  {
    v76 = 0LL;
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
    vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 0LL, v8, 0LL);
    v17 = *(_QWORD **)&v6[2].right;
    v85[0] = 0LL;
    v18 = SURFOBJ_TO_SURFACE_NOT_NULL(v17);
    v19 = 0LL;
    v20 = *((_QWORD *)v5 + 18);
    v21 = *(_QWORD *)(v18 + 120);
    v22 = *(_QWORD *)(*(_QWORD *)&v71 + 40LL);
    v23 = *(_DWORD *)(*((_QWORD *)v5 + 16) + 72LL);
    v82 = 0LL;
    if ( *(_DWORD *)(v22 + 72) != v23 || (*(_DWORD *)v5 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v82,
                            0LL,
                            0,
                            v20,
                            v21,
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0) )
        goto LABEL_52;
      v19 = v82;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v85, *((struct _SURFOBJ **)v5 + 16)) )
    {
      v78 = (struct _RECTL *)((char *)v5 + 80);
      v81.x = *((_DWORD *)v5 + 20) - (_DWORD)v4;
      v26 = *((_DWORD *)v5 + 21);
      v27 = 0LL;
      v81.y = v26 - HIDWORD(v84);
      v28 = *(_QWORD *)(*(_QWORD *)&v71 + 40LL);
      if ( v28
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(*(_QWORD *)&v71 + 40LL)) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x200) == 0 )
      {
        v27 = SURFOBJ_TO_SURFACE_NOT_NULL(v28);
        GreLockDisplayDevice(*(_QWORD *)(v27 + 48));
      }
      v29 = 0LL;
      v30 = *((_QWORD *)v74 + 16);
      v72 = v30;
      if ( v30
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v72) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v72) + 112) & 0x200) == 0 )
      {
        v29 = SURFOBJ_TO_SURFACE_NOT_NULL(v72);
        GreLockDisplayDevice(*(_QWORD *)(v29 + 48));
      }
      v70 = (struct _XLATEOBJ *)v19;
      v6 = (struct _RECTL *)v71;
      SpBitBlt(
        *(struct _SURFOBJ **)(*(_QWORD *)&v71 + 40LL),
        *((struct _SURFOBJ **)v74 + 16),
        0LL,
        v76,
        v70,
        v78,
        &v81,
        0LL,
        0LL,
        0LL,
        0xCCCCu);
      if ( v29 )
        GreUnlockDisplayDevice(*(_QWORD *)(v29 + 48));
      if ( v27 )
        GreUnlockDisplayDevice(*(_QWORD *)(v27 + 48));
      v4 = v79;
      v5 = v74;
      goto LABEL_53;
    }
LABEL_52:
    v6 = (struct _RECTL *)v71;
LABEL_53:
    vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 1LL, v24, v25);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v82);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v85);
    goto LABEL_54;
  }
LABEL_56:
  v31 = si128.right - si128.left;
  v32 = si128.bottom - si128.top;
  LODWORD(v72) = si128.right - si128.left;
  LODWORD(v74) = si128.bottom - si128.top;
  if ( si128.right == si128.left )
  {
    if ( v77 == 1 && !v6[4].left && v6->right )
      vSpUnhook((struct _SPRITESTATE *)v6);
  }
  else
  {
    *(_DWORD *)v5 |= 0x20u;
    ++v6[4].left;
    if ( v77 == 1 && !v6->right )
    {
      vSpHook((struct _SPRITESTATE *)v6);
      v31 = v72;
      v7 = 0;
      v32 = (int)v74;
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
        LODWORD(v74) = v37;
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
        v39 = (int)v74;
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
        v4 = v79;
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
      v78 = (struct _RECTL *)Surface;
      if ( !Surface )
      {
        v44 = 0;
        bSpUpdatePosition(v5, 0LL, 0, 0);
        goto LABEL_141;
      }
      Surface->fjBitmap |= 4u;
      v71.x = -si128.left;
      v71.y = -si128.top;
      if ( (int)v72 > 128 || (int)v74 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v6, &v71, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          v5,
          &v71,
          Surface,
          (struct _POINTL *)v5 + 21,
          *((struct _SURFOBJ **)v5 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)v5 + 5);
      vSpDeleteSurface(*((SURFOBJ **)v5 + 20));
      v45 = v78;
      left = si128.left;
      top = si128.top;
      v48 = v71;
      *((_DWORD *)v5 + 52) = si128.left;
      *((_QWORD *)v5 + 20) = v45;
      *((struct _POINTL *)v5 + 21) = v48;
      *((_DWORD *)v5 + 53) = top;
      *((_DWORD *)v5 + 54) = v45[2].left + left;
      *((_DWORD *)v5 + 55) = top + v45[2].top;
    }
  }
  v49 = (struct _RECTL)*((_OWORD *)v5 + 5);
  v50 = v73.x;
  v51 = *(_DWORD *)v5;
  v52 = (struct _POINTL)*((_QWORD *)v5 + 24);
  v53 = v73.x & 0x20;
  v71 = v52;
  v87 = v49;
  *((struct _RECTL *)v5 + 5) = si128;
  if ( (v53 != 0) != ((v51 & 0x20) != 0) )
  {
    v54 = !v53 && (v51 & 0x20) != 0;
    LODWORD(v72) = v54;
    if ( v52 )
      goto LABEL_112;
    v55 = (struct _CLIPOBJ *)*((_QWORD *)v5 + 1);
    v76 = v55;
    if ( !v55 )
      goto LABEL_135;
    if ( !v54 )
      goto LABEL_135;
    v56 = 0;
    LODWORD(v74) = 0;
    if ( !v55[1].iUniq )
      goto LABEL_135;
    while ( 1 )
    {
      v57 = (struct _POINTL)*((_QWORD *)&v76[1].rclBounds.top + v56);
      v81 = v57;
      if ( *(struct SPRITE **)&v57 != v5 )
      {
        v78 = *(struct _RECTL **)(*(_QWORD *)&v57 + 192LL);
        if ( v78 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v79);
          if ( v79 && RGNOBJ::bCopy((RGNOBJ *)&v79, (struct RGNOBJ *)&v78) )
          {
            LODWORD(v76) = -*(_DWORD *)(*(_QWORD *)&v81 + 112LL);
            HIDWORD(v76) = -*(_DWORD *)(*(_QWORD *)&v81 + 116LL);
            RGNOBJ::bOffset((RGNOBJ *)&v79, (struct _POINTL *)&v76);
            v61 = v80 == 1;
            v58 = (struct _POINTL)v79;
            *((_QWORD *)v5 + 24) = v79;
            v71 = v58;
            if ( !v61 )
              goto LABEL_111;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v79);
LABEL_110:
            v58 = v71;
LABEL_111:
            if ( v58 )
            {
LABEL_112:
              if ( (_DWORD)v72 )
                v59 = v83->x;
              else
                v59 = -(int)v4;
              v73.x = v59;
              if ( (_DWORD)v72 )
                y = v83->y;
              else
                y = -HIDWORD(v84);
              v73.y = y;
              if ( !v59 )
              {
                v61 = y == 0;
                goto LABEL_133;
              }
              goto LABEL_134;
            }
            goto LABEL_135;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v79);
          if ( v80 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v79);
        }
      }
      v56 = (_DWORD)v74 + 1;
      LODWORD(v74) = v56;
      if ( v56 >= v76[1].iUniq )
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
      v78 = v4;
      RGNOBJ::vSet((RGNOBJ *)&v71, (struct _RECTL *)v5 + 6);
      RGNOBJ::bOffset((RGNOBJ *)&v71, (struct _POINTL *)&v78);
      v52 = v71;
    }
  }
LABEL_130:
  if ( v52 )
  {
    v66 = v83->y - HIDWORD(v84);
    v73.x = v83->x - (_DWORD)v4;
    v73.y = v66;
    if ( v73.x )
      goto LABEL_134;
    v61 = v66 == 0;
LABEL_133:
    if ( !v61 )
LABEL_134:
      RGNOBJ::bOffset((RGNOBJ *)&v71, &v73);
  }
LABEL_135:
  v6[7].bottom = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(v5);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, &si128, &v87);
  if ( !v6[7].bottom )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v6);
  vSpRemoveAllSpriteOverlapPresents(*(_QWORD **)&v6->left, v67, v68);
LABEL_140:
  v44 = v75;
LABEL_141:
  if ( v77 == 1 )
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
