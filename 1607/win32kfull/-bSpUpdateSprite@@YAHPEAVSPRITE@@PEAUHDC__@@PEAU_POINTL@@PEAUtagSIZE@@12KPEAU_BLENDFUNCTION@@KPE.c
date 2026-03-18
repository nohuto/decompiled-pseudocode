/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C026F61C
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026A840 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C026FBB4 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0033D28 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00566C0 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C026E3C0 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C026F02C (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0270F54 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C027114C (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C02730FC (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C027492C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275738 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0278670 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpUpdateSprite(
        struct SPRITE *a1,
        HDC a2,
        struct _POINTL *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct _POINTL *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct _RECTL *a10)
{
  struct _SURFOBJ *v10; // rbx
  struct _BLENDFUNCTION *v12; // r15
  unsigned int v14; // esi
  unsigned int v15; // r14d
  int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _RECTL **v19; // r8
  LONG cx; // eax
  LONG cy; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  struct _BLENDFUNCTION v24; // edx
  unsigned int v25; // r13d
  HDC v26; // rdx
  int v27; // ecx
  struct _POINTL *v28; // rax
  int v29; // eax
  unsigned int v30; // r8d
  int updated; // esi
  struct _RECTL *v32; // rax
  LONG v33; // edx
  LONG v34; // r8d
  LONG v35; // r9d
  struct _RECTL *v36; // rax
  __int64 v37; // rcx
  struct _BLENDFUNCTION v38; // [rsp+50h] [rbp-B0h] BYREF
  struct _RECTL **v39; // [rsp+58h] [rbp-A8h] BYREF
  HDC v40; // [rsp+60h] [rbp-A0h]
  struct tagSIZE *v41; // [rsp+68h] [rbp-98h]
  struct _POINTL *v42; // [rsp+70h] [rbp-90h]
  struct _POINTL *v43; // [rsp+78h] [rbp-88h]
  struct _SPRITESTATE *v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  W32PIDLOCK *v46; // [rsp+90h] [rbp-70h]
  _QWORD v47[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v48[40]; // [rsp+A8h] [rbp-58h] BYREF
  struct _SPRITESTATE *v49[24]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL *v50[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v51; // [rsp+1A0h] [rbp+A0h]
  struct _RECTL v52; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _RECTL v53; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v54; // [rsp+1D0h] [rbp+D0h]

  v10 = 0LL;
  v12 = a8;
  v40 = a5;
  v42 = a6;
  v41 = a4;
  v43 = a3;
  *(_QWORD *)&v52.left = a2;
  v50[0] = a10;
  if ( !a1 )
    return 0LL;
  v44 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v45 = *(_QWORD *)v44;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v49, (struct PDEVOBJ *)&v45, (__int64)a3, (__int64)a4);
  v14 = a9;
  v15 = 1;
  v38 = 0;
  if ( (a9 & 0x10000000) != 0 )
  {
    v14 = a9 & 0xEFFFFFFF;
    v38 = (struct _BLENDFUNCTION)1;
  }
  v16 = 0;
  if ( (v14 & 0x200000) != 0 )
  {
    v14 &= ~0x200000u;
    v16 = 1;
  }
  SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v44 + 128));
  v17 = *((_QWORD *)a1 + 16);
  if ( v17 )
  {
    v39 = (struct _RECTL **)SURFOBJ_TO_SURFACE_NOT_NULL(v17);
    if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v39) )
    {
      v46 = (W32PIDLOCK *)(v18 + 272);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 272));
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        v50[0] = 0LL;
        v50[1] = v39[7];
        if ( a10 )
        {
          v53 = *a10;
          ERECTL::operator*=(&v53, v50);
        }
        else
        {
          v53 = *(struct _RECTL *)v50;
        }
        v50[0] = &v53;
      }
      DCOBJ::DCOBJ((DCOBJ *)v47, v40);
      if ( v47[0] && v41 )
      {
        v19 = v39;
        cx = *((_DWORD *)v39 + 14);
        if ( v41->cx < cx )
          cx = v41->cx;
        LODWORD(v39) = cx;
        cy = *((_DWORD *)v19 + 15);
        if ( v41->cy < cy )
          cy = v41->cy;
        HIDWORD(v39) = cy;
        v41 = (struct tagSIZE *)&v39;
      }
      W32PIDLOCK::vUnlockSingleThread(v46);
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v47);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v48);
    }
  }
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v44 + 128));
  if ( (v14 & 0x20000000) != 0 )
  {
    v24 = v38;
    v14 &= ~0x20000000u;
    *((_DWORD *)a1 + 56) = v14 | (v38 != 0 ? 0x10000000 : 0);
    if ( (v14 & 2) != 0 && a8 )
      *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
    v25 = a7;
    *((_DWORD *)a1 + 58) = a7;
    if ( v24 )
    {
      vSpCreateExMirror(**((HDEV **)a1 + 2));
      *(_DWORD *)a1 |= 0x100u;
    }
    v26 = v40;
    if ( !v40 )
    {
      v27 = *((_DWORD *)a1 + 56);
      v26 = (HDC)*((unsigned int *)a1 + 51);
      v38 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
      if ( v27 == 3 && !a8->AlphaFormat )
      {
        v27 = 2;
        v38 = *a8;
        v12 = &v38;
        v38.AlphaFormat = 1;
        v26 = (HDC)a7;
      }
      *((_DWORD *)a1 + 1) = v27;
      *((_DWORD *)a1 + 51) = (_DWORD)v26;
      *((struct _BLENDFUNCTION *)a1 + 50) = *v12;
      goto LABEL_85;
    }
  }
  else
  {
    if ( v14 == 0x40000000 )
    {
      v14 = *((_DWORD *)a1 + 56);
      if ( (v14 & 0x10000000) != 0 )
        v14 &= ~0x10000000u;
      if ( (*(_DWORD *)a1 & 0x40) != 0 && !v14 )
        v14 = *((_DWORD *)a1 + 1);
      v12 = &v38;
      v25 = *((_DWORD *)a1 + 58);
      v38 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
    }
    else
    {
      v25 = a7;
    }
    v26 = v40;
  }
  if ( (*(_DWORD *)(v45 + 56) & 0x400) == 0 )
  {
    if ( *(_QWORD *)&v52.left || v41 || v26 || v42 || v25 )
    {
      updated = bSpUpdateShape(a1, v14, *(HDC *)&v52.left, v26, v25, v12, v42, v41, v50[0]);
      if ( !updated || v16 )
        goto LABEL_63;
      v28 = v43;
      if ( !v43 )
        v28 = (struct _POINTL *)((char *)a1 + 112);
      v30 = 0;
    }
    else
    {
      v28 = v43;
      if ( v14 - 2 <= 1 && v12 && !v43 )
      {
        v29 = bSpUpdateAlpha(a1, v12, 1);
LABEL_62:
        updated = v29;
        goto LABEL_63;
      }
      if ( (v14 & 0x7FFFFFFF) != 0 || v12 )
      {
        updated = 1;
LABEL_63:
        v32 = v50[0];
        if ( v50[0] )
        {
          v33 = *((_DWORD *)a1 + 28) + v50[0]->right;
          v34 = *((_DWORD *)a1 + 29) + v50[0]->top;
          v35 = *((_DWORD *)a1 + 29) + v50[0]->bottom;
          v52.left = *((_DWORD *)a1 + 28) + v50[0]->left;
          v52.right = v33;
          v52.top = v34;
          v52.bottom = v35;
          ERECTL::operator*=(&v52, (_DWORD *)a1 + 20);
          if ( !ERECTL::bEmpty((ERECTL *)&v52) )
          {
            v53 = v52;
            vSpAddAndCompactDirtyRect(a1, &v53);
            v36 = 0LL;
            v50[0] = 0LL;
            v50[1] = 0LL;
            v51 = 0LL;
            if ( v16 == 1 )
            {
              PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v50, v44, &v52);
              v36 = v50[0];
            }
            if ( v36 || !v16 )
              vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v52, 0);
            if ( v16 == 1 )
              PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v50);
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v50);
          }
        }
        else
        {
          v53 = (struct _RECTL)0LL;
          v54 = 0LL;
          if ( v16 == 1 )
          {
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v53, v44, (struct _RECTL *)a1 + 5);
            v32 = *(struct _RECTL **)&v53.left;
          }
          if ( v32 || !v16 )
            vSpRedrawSprite(a1);
          if ( v16 == 1 )
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v53);
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v53);
          if ( (*(_DWORD *)(v45 + 56) & 0x400) == 0 )
          {
            v37 = *(_QWORD *)(v45 + 2576);
            if ( v37 )
              v10 = (struct _SURFOBJ *)(v37 + 24);
            PDEVOBJ::vSync((PDEVOBJ *)&v45, v10, 0LL, 0);
          }
        }
        v15 = updated;
        goto LABEL_85;
      }
      v30 = v14 & 0x80000000;
    }
    v29 = bSpUpdatePosition(a1, v28, v30, 0);
    goto LABEL_62;
  }
LABEL_85:
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v49, (__int64)v26, v22, v23);
  return v15;
}
