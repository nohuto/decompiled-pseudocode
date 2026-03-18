/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02746F4
 * Callers:
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0270A68 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02773F0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0277900 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02781FC (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0278854 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffAlphaBlend @ 0x1C00E1598 (OffAlphaBlend.c)
 *     OffTransparentBlt @ 0x1C0127F90 (OffTransparentBlt.c)
 *     OffBitBlt @ 0x1C012896C (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C014CB60 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C026C200 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026F2F0 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C026F3B4 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0273B50 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0273DEC (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C0275BF0 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C027674C (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C027A158 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComposite(struct SPRITE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  int *v7; // rcx
  int v8; // ecx
  struct REGION *v9; // rbx
  struct REGION *v10; // r8
  struct REGION *v11; // rbx
  struct _SPRITESTATE *v12; // rcx
  int v13; // eax
  int v14; // ecx
  int v15; // r13d
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r14
  struct _SURFOBJ *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rbx
  struct _SURFOBJ *v26; // rcx
  struct _SURFOBJ *v27; // rcx
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v29; // rdx
  __int64 v30; // rbx
  int v31; // ecx
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rbx
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _SURFOBJ *v37; // rdx
  unsigned int v38; // eax
  struct _RECTL v39; // xmm6
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rbx
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  unsigned int v44; // edx
  struct _SURFOBJ *v45; // rcx
  __int64 v46; // rbx
  struct _POINTL v48; // [rsp+80h] [rbp-88h] BYREF
  struct _POINTL *v49; // [rsp+88h] [rbp-80h]
  struct REGION *v50; // [rsp+90h] [rbp-78h] BYREF
  __int64 v51; // [rsp+98h] [rbp-70h] BYREF
  int v52; // [rsp+A0h] [rbp-68h]
  struct _CLIPOBJ *v53; // [rsp+A8h] [rbp-60h]
  struct REGION *v54; // [rsp+B0h] [rbp-58h] BYREF
  int v55; // [rsp+B8h] [rbp-50h]
  __int64 v56; // [rsp+C0h] [rbp-48h]
  __int64 v57; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int8 *v60; // [rsp+E0h] [rbp-28h] BYREF
  struct _RECTL v61; // [rsp+E8h] [rbp-20h] BYREF
  struct REGION *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h] BYREF
  struct REGION *v64; // [rsp+108h] [rbp+0h] BYREF
  __int64 v65[5]; // [rsp+110h] [rbp+8h] BYREF
  struct _RECTL v66; // [rsp+138h] [rbp+30h] BYREF
  __int64 v67; // [rsp+148h] [rbp+40h] BYREF
  int v68; // [rsp+150h] [rbp+48h]
  int v69; // [rsp+154h] [rbp+4Ch]
  REGION *v70; // [rsp+158h] [rbp+50h] BYREF
  int v71; // [rsp+160h] [rbp+58h]
  int v72; // [rsp+164h] [rbp+5Ch]
  int v73; // [rsp+168h] [rbp+60h]
  __int64 v74; // [rsp+190h] [rbp+88h]
  __int64 v75; // [rsp+1A8h] [rbp+A0h]
  int v76; // [rsp+1B0h] [rbp+A8h]
  int v77; // [rsp+1D8h] [rbp+D0h]
  __int64 v78; // [rsp+1E8h] [rbp+E0h]
  int v79; // [rsp+1F0h] [rbp+E8h]

  v49 = a2;
  v75 = 0LL;
  v76 = 0;
  v78 = 0LL;
  v77 = 1;
  v74 = 0LL;
  v79 = 0;
  if ( (unsigned int)bIgnoreMirrorUpdate(a1) )
    goto LABEL_197;
  v8 = *v7;
  if ( (v8 & 0x400) != 0 || (v8 & 0xC0) == 0x40 || (v8 & 0x20) == 0 || (v8 & 1) != 0 )
    goto LABEL_197;
  v53 = 0LL;
  v9 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
  v62 = v9;
  v50 = 0LL;
  if ( !*((_QWORD *)a1 + 23) || !v9 )
    goto LABEL_19;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v54);
  if ( v54
    && (v63 = *((_QWORD *)a1 + 23),
        v64 = v9,
        RGNOBJ::bMerge((RGNOBJ *)&v54, (struct RGNOBJ *)&v63, (struct RGNOBJ *)&v64, BYTE1(gafjRgnOp))) )
  {
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v54) == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v54);
      vSpAddAndCompactDirtyRegion(a1, v9);
      if ( v55 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v54);
      goto LABEL_197;
    }
    v10 = v54;
    v50 = v54;
  }
  else
  {
    v10 = v50;
  }
  if ( v55 == 1 )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v54);
    v10 = v50;
  }
  if ( v10 )
  {
    v53 = (struct _CLIPOBJ *)&v70;
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v70, 0, v10, (struct ERECTL *)a4, 0);
  }
  else
  {
LABEL_19:
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !*((_QWORD *)a1 + 23) )
      {
        if ( v9 )
          goto LABEL_29;
        goto LABEL_197;
      }
      if ( !v9 )
        goto LABEL_197;
    }
    v11 = (struct REGION *)*((_QWORD *)a1 + 23);
    if ( !v11 )
    {
LABEL_30:
      v14 = *(_DWORD *)a1;
      v15 = *((_DWORD *)a1 + 1);
      v16 = *((_QWORD *)a1 + 2);
      v17 = (*(_DWORD *)a1 & 8) == 0;
      v56 = v16;
      if ( !v17 )
        v15 = 4;
      if ( (v14 & 0x100) != 0 )
        v15 &= ~0x10000000u;
      v48.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
      v48.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
      v18 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v16 + 40));
      v19 = (__int64 *)v56;
      v20 = *(_QWORD *)(v18 + 120);
      v21 = *((_QWORD *)a1 + 18);
      *(_QWORD *)&v61.left = 0LL;
      LODWORD(v18) = *(_DWORD *)(v56 + 116);
      v51 = 0LL;
      if ( *((_DWORD *)a1 + 38) != (_DWORD)v18
        || *((_DWORD *)a1 + 39) != *(_DWORD *)(v56 + 120)
        || (*(_DWORD *)a1 & 0x40) != 0 )
      {
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              &v51,
                              0LL,
                              0,
                              v21,
                              v20,
                              (__int64)ppalDefault,
                              (__int64)ppalDefault,
                              0,
                              0,
                              0,
                              0) )
          goto LABEL_194;
        v19 = (__int64 *)v56;
      }
      switch ( v15 )
      {
        case 2:
          v37 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v37 && SURFREFVIEW::bMap((SURFREFVIEW *)&v61, v37) )
          {
            v66.right = v48.x + a4->right - a4->left;
            v66.bottom = v48.y + a4->bottom - a4->top;
            v66.left = v48.x;
            v66.top = v48.y;
            v57 = 0LL;
            v58 = 0LL;
            v59 = 0LL;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v57,
                                 0LL,
                                 0,
                                 v21,
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0)
              && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v58,
                                 0LL,
                                 0,
                                 v20,
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0)
              && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v59,
                                 0LL,
                                 0,
                                 (__int64)gppalRGB,
                                 v20,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0) )
            {
              LODWORD(v65[0]) = *((_DWORD *)a1 + 50);
              v65[1] = v57;
              v65[2] = v58;
              v65[3] = v59;
              v38 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
              v52 = 0;
              v60 = 0LL;
              if ( v38 == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
              {
                GreAcquireSemaphore(*(_QWORD *)(v56 + 136));
                vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v66, &v60);
                v39 = v66;
                v52 = 1;
              }
              else
              {
                v39 = v61;
              }
              v40 = *((_QWORD *)a1 + 16);
              v41 = 0LL;
              if ( v40
                && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 16)) + 112) & 0x4000) != 0
                 || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v40) + 112) & 0x80000000) != 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v40) + 112) & 0x200) == 0 )
              {
                v41 = SURFOBJ_TO_SURFACE_NOT_NULL(v40);
                GreLockDisplayDevice(*(_QWORD *)(v41 + 48));
              }
              v42 = 0LL;
              if ( a3
                && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
                 || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x80000000) != 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
              {
                v42 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
                GreLockDisplayDevice(*(_QWORD *)(v42 + 48));
              }
              if ( a3->iType == 1
                && bAllowShareAccess(a3)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
              {
                v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 120LL);
              }
              else if ( a3->iType == 1
                     && bAllowShareAccess(a3)
                     && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                     && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                     && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                      || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                     || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x10000) == 0 )
              {
                v43 = EngAlphaBlend;
              }
              else
              {
                v43 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 174);
              }
              OffAlphaBlend(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64))v43,
                (int *)v49,
                (__int64)a3,
                (int *)a1 + 34,
                *((_QWORD *)a1 + 16),
                v53,
                v51,
                a4,
                &v66,
                (__int64)v65);
              if ( v42 )
                GreUnlockDisplayDevice(*(_QWORD *)(v42 + 48));
              if ( v41 )
                GreUnlockDisplayDevice(*(_QWORD *)(v41 + 48));
              if ( v52 )
              {
                v44 = *((_DWORD *)a1 + 51);
                v45 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                v66 = v39;
                vSpDeletePerPixelAlphaFromColorKey(v45, v44, &v66, v60);
                v46 = v56;
                EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", *(_QWORD *)(v56 + 136));
                GreReleaseSemaphoreInternal(*(_QWORD *)(v46 + 136));
              }
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v58);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57);
          }
          goto LABEL_194;
        case 4:
          v22 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( !v22 || !SURFREFVIEW::bMap((SURFREFVIEW *)&v61, v22) )
            goto LABEL_194;
          v23 = *((_QWORD *)a1 + 16);
          v24 = 0LL;
          if ( v23
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 16)) + 112) & 0x4000) != 0
             || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x80000000) != 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x200) == 0 )
          {
            v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v23);
            GreLockDisplayDevice(*(_QWORD *)(v24 + 48));
          }
          v25 = 0LL;
          if ( a3
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
             || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x80000000) != 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
          {
            v25 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
            GreLockDisplayDevice(*(_QWORD *)(v25 + 48));
          }
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 )
          {
            v26 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            if ( v26->hdev )
            {
              if ( v26->iType != 1
                || !bAllowShareAccess(v26)
                || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
                || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
              {
                v27 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                if ( (v27->iType != 1
                   || !bAllowShareAccess(v27)
                   || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                   || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                   || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                   && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 16)) + 112) & 0x400) != 0 )
                {
                  v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)a1 + 16) + 24LL) + 1352LL);
LABEL_87:
                  OffCopyBits(
                    (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v28,
                    (LONG *)v49,
                    (__int64)a3,
                    (int *)a1 + 34,
                    *((_QWORD *)a1 + 16),
                    v53,
                    v51,
                    a4,
                    &v48);
LABEL_119:
                  if ( v25 )
                    GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
                  if ( !v24 )
                    goto LABEL_194;
                  v33 = *(_QWORD *)(v24 + 48);
                  goto LABEL_149;
                }
LABEL_86:
                v28 = EngCopyBits;
                goto LABEL_87;
              }
LABEL_77:
              v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
              goto LABEL_87;
            }
          }
          if ( a3->iType == 1 )
          {
            if ( bAllowShareAccess(a3)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
            {
              goto LABEL_77;
            }
            if ( a3->iType == 1
              && bAllowShareAccess(a3)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
            {
              goto LABEL_86;
            }
          }
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
          {
            v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a3->hdev + 169);
            goto LABEL_87;
          }
          goto LABEL_86;
        case 1:
          v29 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( !v29 || !SURFREFVIEW::bMap((SURFREFVIEW *)&v61, v29) )
            goto LABEL_194;
          v24 = 0LL;
          v30 = *((_QWORD *)a1 + 16);
          v31 = v48.x + a4->right - a4->left;
          v67 = (__int64)v48;
          v68 = v31;
          v69 = v48.y + a4->bottom - a4->top;
          if ( v30
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x4000) != 0
             || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x80000000) != 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x200) == 0 )
          {
            v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v30);
            GreLockDisplayDevice(*(_QWORD *)(v24 + 48));
          }
          v25 = 0LL;
          if ( a3
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
             || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x80000000) != 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
          {
            v25 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
            GreLockDisplayDevice(*(_QWORD *)(v25 + 48));
          }
          if ( a3->iType == 1
            && bAllowShareAccess(a3)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
          {
            v32 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 112LL);
          }
          else if ( a3->iType == 1
                 && bAllowShareAccess(a3)
                 && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                 && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                  || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                 || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x8000) == 0 )
          {
            v32 = EngTransparentBlt;
          }
          else
          {
            v32 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 173);
          }
          OffTransparentBlt(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, int, int))v32,
            (LONG *)v49,
            (__int64)a3,
            (int *)a1 + 34,
            *((_QWORD *)a1 + 16),
            v53,
            v51,
            a4,
            &v67,
            *((_DWORD *)a1 + 51),
            0);
          goto LABEL_119;
        case 0x1000000:
          vSpDrawCursor(a1, v49, a3, a4, &v48);
          goto LABEL_194;
      }
      v34 = *v19;
      v35 = 0LL;
      if ( a3
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
      {
        v35 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
        GreLockDisplayDevice(*(_QWORD *)(v35 + 48));
      }
      if ( a3->iType == 1 )
      {
        if ( bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
        {
          v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
          goto LABEL_147;
        }
        if ( a3->iType == 1
          && bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_146;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) == 0 )
LABEL_146:
        v36 = EngBitBlt;
      else
        v36 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 168);
LABEL_147:
      OffBitBlt(
        (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v36,
        (LONG *)v49,
        (__int64)a3,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        a4,
        0LL,
        0LL,
        v34 + 1576,
        &gptlZero,
        23130);
      if ( v35 )
      {
        v33 = *(_QWORD *)(v35 + 48);
LABEL_149:
        GreUnlockDisplayDevice(v33);
      }
LABEL_194:
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
      if ( v62 )
        vSpAddAndCompactDirtyRegion(a1, v62);
      SURFREFVIEW::bUnMap((SURFREFVIEW *)&v61);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v51);
      goto LABEL_197;
    }
    v12 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
    v53 = (struct _CLIPOBJ *)&v70;
    v13 = bConcurrent(v12);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v70, v13, v11, (struct ERECTL *)a4, 0);
    v9 = v62;
  }
  if ( SHIDWORD(v70) < v72 && v71 < v73 )
    goto LABEL_30;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
  if ( v9 )
LABEL_29:
    vSpAddAndCompactDirtyRegion(a1, v9);
LABEL_197:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(&v70);
}
