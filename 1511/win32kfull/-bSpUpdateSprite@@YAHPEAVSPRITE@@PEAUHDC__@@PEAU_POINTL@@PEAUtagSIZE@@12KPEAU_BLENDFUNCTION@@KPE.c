/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0271124
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026C388 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0271688 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0038E2C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0053D80 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0053DB0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0068678 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C026FEEC (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0270B58 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02729FC (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0272BF4 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0274BA8 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02763E4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02771F0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C027A120 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
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
  struct _BLENDFUNCTION v22; // edx
  unsigned int v23; // r13d
  HDC v24; // rdx
  int v25; // ecx
  unsigned int v26; // edx
  struct _POINTL *v27; // rax
  int v28; // eax
  unsigned int v29; // r8d
  int updated; // esi
  struct _RECTL *v31; // rax
  LONG v32; // edx
  LONG v33; // r8d
  LONG v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rcx
  struct _BLENDFUNCTION v37; // [rsp+50h] [rbp-B0h] BYREF
  struct _RECTL **v38; // [rsp+58h] [rbp-A8h] BYREF
  struct _RECTL v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  struct tagSIZE *v41; // [rsp+78h] [rbp-88h]
  struct _RECTL *v42[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL *v43; // [rsp+90h] [rbp-70h]
  struct _POINTL *v44; // [rsp+98h] [rbp-68h]
  HDC v45; // [rsp+A0h] [rbp-60h]
  struct _SPRITESTATE *v46; // [rsp+A8h] [rbp-58h]
  W32PIDLOCK *v47; // [rsp+B0h] [rbp-50h]
  struct _SPRITESTATE *v48[24]; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v49; // [rsp+180h] [rbp+80h] BYREF
  __int64 v50; // [rsp+190h] [rbp+90h]
  struct _RECTL v51; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v52; // [rsp+1B0h] [rbp+B0h]

  v10 = 0LL;
  v12 = a8;
  v45 = a5;
  v43 = a6;
  v41 = a4;
  v44 = a3;
  *(_QWORD *)&v39.left = a2;
  v42[0] = a10;
  if ( !a1 )
    return 0LL;
  v46 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v40 = *(_QWORD *)v46;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v48, (struct PDEVOBJ *)&v40);
  v14 = a9;
  v15 = 1;
  v37 = 0;
  if ( (a9 & 0x10000000) != 0 )
  {
    v14 = a9 & 0xEFFFFFFF;
    v37 = (struct _BLENDFUNCTION)1;
  }
  v16 = 0;
  if ( (v14 & 0x200000) != 0 )
  {
    v14 &= ~0x200000u;
    v16 = 1;
  }
  SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v46 + 128));
  v17 = *((_QWORD *)a1 + 16);
  if ( v17 )
  {
    v38 = (struct _RECTL **)SURFOBJ_TO_SURFACE_NOT_NULL(v17);
    if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v38) )
    {
      v47 = (W32PIDLOCK *)(v18 + 264);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 264));
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        v42[0] = 0LL;
        v42[1] = v38[7];
        if ( a10 )
        {
          v51 = *a10;
          ERECTL::operator*=(&v51, v42);
        }
        else
        {
          v51 = *(struct _RECTL *)v42;
        }
        v42[0] = &v51;
      }
      DCOBJ::DCOBJ((DCOBJ *)&v49, v45);
      if ( *(_QWORD *)&v49.left && v41 )
      {
        v19 = v38;
        cx = *((_DWORD *)v38 + 14);
        if ( v41->cx < cx )
          cx = v41->cx;
        LODWORD(v38) = cx;
        cy = *((_DWORD *)v19 + 15);
        if ( v41->cy < cy )
          cy = v41->cy;
        HIDWORD(v38) = cy;
        v41 = (struct tagSIZE *)&v38;
      }
      W32PIDLOCK::vUnlockSingleThread(v47);
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v49);
    }
  }
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v46 + 128));
  if ( (v14 & 0x20000000) != 0 )
  {
    v22 = v37;
    v14 &= ~0x20000000u;
    *((_DWORD *)a1 + 56) = v14 | (v37 != 0 ? 0x10000000 : 0);
    if ( (v14 & 2) != 0 && a8 )
      *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
    v23 = a7;
    *((_DWORD *)a1 + 58) = a7;
    if ( v22 )
    {
      vSpCreateExMirror(**((HDEV **)a1 + 2));
      *(_DWORD *)a1 |= 0x100u;
    }
    v24 = v45;
    if ( !v45 )
    {
      v25 = *((_DWORD *)a1 + 56);
      v26 = *((_DWORD *)a1 + 51);
      v37 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
      if ( v25 == 3 && !a8->AlphaFormat )
      {
        v25 = 2;
        v37 = *a8;
        v12 = &v37;
        v37.AlphaFormat = 1;
        v26 = a7;
      }
      *((_DWORD *)a1 + 1) = v25;
      *((_DWORD *)a1 + 51) = v26;
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
      v12 = &v37;
      v23 = *((_DWORD *)a1 + 58);
      v37 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
    }
    else
    {
      v23 = a7;
    }
    v24 = v45;
  }
  if ( (*(_DWORD *)(v40 + 56) & 0x400) == 0 )
  {
    if ( *(_QWORD *)&v39.left || v41 || v24 || v43 || v23 )
    {
      updated = bSpUpdateShape(a1, v14, *(HDC *)&v39.left, v24, v23, v12, v43, v41, v42[0]);
      if ( !updated || v16 )
        goto LABEL_63;
      v27 = v44;
      if ( !v44 )
        v27 = (struct _POINTL *)((char *)a1 + 112);
      v29 = 0;
    }
    else
    {
      v27 = v44;
      if ( v14 - 2 <= 1 && v12 && !v44 )
      {
        v28 = bSpUpdateAlpha(a1, v12, 1);
LABEL_62:
        updated = v28;
        goto LABEL_63;
      }
      if ( (v14 & 0x7FFFFFFF) != 0 || v12 )
      {
        updated = 1;
LABEL_63:
        v31 = v42[0];
        if ( v42[0] )
        {
          v32 = *((_DWORD *)a1 + 28) + v42[0]->right;
          v33 = *((_DWORD *)a1 + 29) + v42[0]->top;
          v34 = *((_DWORD *)a1 + 29) + v42[0]->bottom;
          v39.left = *((_DWORD *)a1 + 28) + v42[0]->left;
          v39.right = v32;
          v39.top = v33;
          v39.bottom = v34;
          ERECTL::operator*=(&v39, (_DWORD *)a1 + 20);
          if ( !ERECTL::bEmpty((ERECTL *)&v39) )
          {
            v49 = v39;
            vSpAddAndCompactDirtyRect(a1, &v49);
            v35 = 0LL;
            v51 = (struct _RECTL)0LL;
            v52 = 0LL;
            if ( v16 == 1 )
            {
              PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v51, v46, &v39);
              v35 = *(_QWORD *)&v51.left;
            }
            if ( v35 || !v16 )
              vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v39, 0);
            if ( v16 == 1 )
              PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v51);
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v51);
          }
        }
        else
        {
          v49 = (struct _RECTL)0LL;
          v50 = 0LL;
          if ( v16 == 1 )
          {
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v49, v46, (struct _RECTL *)a1 + 5);
            v31 = *(struct _RECTL **)&v49.left;
          }
          if ( v31 || !v16 )
            vSpRedrawSprite(a1);
          if ( v16 == 1 )
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v49);
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v49);
          if ( (*(_DWORD *)(v40 + 56) & 0x400) == 0 )
          {
            v36 = *(_QWORD *)(v40 + 2576);
            if ( v36 )
              v10 = (struct _SURFOBJ *)(v36 + 24);
            PDEVOBJ::vSync((PDEVOBJ *)&v40, v10, 0LL, 0);
          }
        }
        v15 = updated;
        goto LABEL_85;
      }
      v29 = v14 & 0x80000000;
    }
    v28 = bSpUpdatePosition(a1, v27, v29, 0);
    goto LABEL_62;
  }
LABEL_85:
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v48);
  return v15;
}
