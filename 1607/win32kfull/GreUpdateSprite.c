/*
 * XREFs of GreUpdateSprite @ 0x1C00503E0
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C004FFEC (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     UpdateSprite @ 0x1C00527B0 (UpdateSprite.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00D72A4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00D748C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C013FB2C (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025D0AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C026C910 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     bMoveDevDragRect @ 0x1C0278970 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0278C38 (bMoveDevPreviewRect.c)
 * Callees:
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C000CEB8 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1C0050E44 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0050EE0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00518AC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     DwmAsyncUpdateSprite @ 0x1C0051ED0 (DwmAsyncUpdateSprite.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0052088 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0052360 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00523D8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0052968 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00534D8 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C0053F20 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00D79D0 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00F0FAC (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C012845C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     DwmAsyncDirtySprite @ 0x1C0132C84 (DwmAsyncDirtySprite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C025CF54 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C025D9EC (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026A840 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 */

__int64 __fastcall GreUpdateSprite(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        __int64 a13,
        int a14,
        struct _LUID *a15)
{
  int v15; // r12d
  HDC v16; // r10
  HDC v17; // r15
  struct tagPOINT *v18; // r11
  struct tagSIZE *v20; // r8
  HWND v21; // r14
  HDEV v22; // rbx
  unsigned int v23; // r13d
  struct tagPOINT *v24; // r9
  unsigned int v25; // eax
  unsigned int v26; // edi
  struct tagRECT *v27; // rdx
  struct _BLENDFUNCTION *v28; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rdx
  PRTL_GENERIC_TABLE *v31; // rcx
  void *v32; // rdi
  char *v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  struct SFMLOGICALSURFACE *v37; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // r13
  __int64 v39; // rdx
  struct tagPOINT *v40; // r9
  _QWORD *v41; // rsi
  struct tagRECT v42; // xmm0
  int v43; // r8d
  bool v44; // dl
  int *v45; // rcx
  int v46; // ebx
  unsigned int v47; // eax
  __int64 v48; // rcx
  bool v49; // zf
  int v50; // eax
  int *v51; // rax
  int v52; // ecx
  __int64 v53; // rbx
  int v54; // ecx
  SURFACE *v55; // rax
  int v56; // ecx
  struct tagPOINT *v57; // rcx
  int v58; // ecx
  int v59; // edx
  int updated; // eax
  __int64 v61; // r9
  __int64 v62; // r9
  LONG v63; // edx
  LONG v64; // ecx
  int v65; // eax
  __int64 v66; // rcx
  _BYTE *v67; // rax
  __int64 v68; // rcx
  void *v69; // rax
  struct SFMLOGICALSURFACE *v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // r13
  unsigned int v73; // ebx
  __int64 v74; // rcx
  __int64 v75; // rcx
  void *v76; // rax
  char v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+68h] [rbp-98h] BYREF
  int v81; // [rsp+6Ch] [rbp-94h] BYREF
  struct SFMLOGICALSURFACE *v82; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v83; // [rsp+78h] [rbp-88h]
  int *v84; // [rsp+80h] [rbp-80h]
  struct SFMLOGICALSURFACE *v85; // [rsp+88h] [rbp-78h]
  int v86; // [rsp+90h] [rbp-70h]
  int v87; // [rsp+94h] [rbp-6Ch]
  struct tagRECT *v88; // [rsp+98h] [rbp-68h]
  struct tagSIZE *v89; // [rsp+A0h] [rbp-60h]
  HDEV v90; // [rsp+A8h] [rbp-58h]
  __int64 v91; // [rsp+B0h] [rbp-50h]
  struct tagPOINT *v92; // [rsp+B8h] [rbp-48h]
  void *v93; // [rsp+C0h] [rbp-40h]
  unsigned int v94; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v95; // [rsp+CCh] [rbp-34h] BYREF
  int v96; // [rsp+D0h] [rbp-30h] BYREF
  HDC v97; // [rsp+D8h] [rbp-28h]
  LONG *v98; // [rsp+E0h] [rbp-20h]
  HDEV v99; // [rsp+E8h] [rbp-18h] BYREF
  void *v100; // [rsp+F0h] [rbp-10h]
  HWND v101; // [rsp+F8h] [rbp-8h]
  struct _RECTL v102; // [rsp+100h] [rbp+0h] BYREF
  HDC v103; // [rsp+110h] [rbp+10h]
  HWND Buffer[2]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v105[32]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v106; // [rsp+148h] [rbp+48h]
  int v107; // [rsp+150h] [rbp+50h]
  _QWORD v108[2]; // [rsp+158h] [rbp+58h] BYREF
  char v109[32]; // [rsp+168h] [rbp+68h] BYREF
  struct tagRECT v110; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v111[56]; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v112; // [rsp+280h] [rbp+180h]

  v15 = 0;
  v16 = a7;
  v17 = a4;
  v18 = a8;
  v20 = a6;
  v21 = a2;
  v91 = a13;
  v22 = a1;
  v23 = 0;
  v103 = a4;
  v24 = a5;
  v25 = a11 & 0xFFDFFFFF;
  v26 = (a11 >> 21) & 1;
  v101 = a2;
  v27 = a12;
  v90 = a1;
  v28 = a10;
  v92 = a5;
  v89 = a6;
  v97 = a7;
  v98 = (LONG *)a8;
  v84 = (int *)a10;
  v88 = a12;
  v87 = 1;
  v83 = v26;
  v80 = 0;
  v78 = 0;
  v112 = a11 & 0xFFDFFFFF;
  if ( !a14 )
    goto LABEL_137;
  if ( !g_pDwmState )
  {
LABEL_136:
    v25 = v112;
LABEL_137:
    if ( v26 == 1 )
      v25 |= 0x200000u;
    return (unsigned int)GdiUpdateSprite(v22, v21, a3, v17, v24, v20, v16, v18, a9, v28, v25, v27);
  }
  v86 = 0;
  if ( !v26 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v86 = 1;
  }
  v99 = v22;
  if ( !v26 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v27, (__int64)v20, (__int64)v24);
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v15 = 1;
    }
  }
  if ( v26 == 1 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDwmState);
  }
  else
  {
    GreAcquireSemaphore(ghsemDwmState);
  }
  v31 = (PRTL_GENERIC_TABLE *)g_pDwmState;
  if ( g_pDwmState )
  {
    v32 = a3;
    if ( v21 )
    {
      v32 = 0LL;
      Buffer[0] = v21;
      v33 = (char *)g_pDwmState + 72;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v33, 0LL);
        v31 = (PRTL_GENERIC_TABLE *)g_pDwmState;
      }
      v34 = RtlLookupElementGenericTable(*v31, Buffer);
      if ( v34 )
        v32 = (void *)v34[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v33, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v32 )
      goto LABEL_129;
    LOBYTE(v30) = 15;
    v35 = HmgShareLockCheck(v32, v30);
    v36 = v35;
    if ( !v35 )
      goto LABEL_129;
    if ( (*(_DWORD *)(v35 + 136) & 0x10) != 0 )
    {
LABEL_128:
      DEC_SHARE_REF_CNT(v36);
LABEL_129:
      v26 = v83;
      goto LABEL_130;
    }
    v87 = 0;
    v79 = 1;
    if ( v35 != -120 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v36 + 120, 0LL);
    }
    v37 = *(struct SFMLOGICALSURFACE **)(v36 + 128);
    FirstLSurf = v37;
    v100 = *(void **)v36;
    v85 = v37;
    v82 = v37;
    UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(v105);
    v106 = 0LL;
    v107 = 1;
    if ( v37 && *(_QWORD *)v37 )
    {
      LOBYTE(v39) = 18;
      v106 = HmgLock(*(_QWORD *)v37, v39);
    }
    v41 = (_QWORD *)((char *)v37 + 264);
    if ( v37 != (struct SFMLOGICALSURFACE *)-264LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v37 + 264, 0LL);
    }
    if ( v88 )
    {
      v42 = *v88;
      v88 = &v110;
      v110 = v42;
    }
    v43 = v112;
    if ( v112 == 0x2000000 )
    {
      v84 = &v81;
      v81 = 33488896;
      v112 = 570425346;
      v44 = v89 || v92;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v36, v44);
      v43 = 570425346;
    }
    if ( (v43 & 0x20000000) != 0 )
    {
      v43 &= ~0x20000000u;
      v112 = v43;
    }
    else if ( (v43 & 0x40000000) != 0 || !v43 )
    {
      v43 = *(_DWORD *)(v36 + 72);
      v45 = (int *)(v36 + 76);
      v47 = *(_DWORD *)(v36 + 80);
      v84 = (int *)(v36 + 76);
      v112 = v43;
      a9 = v47;
LABEL_42:
      LODWORD(v93) = v43 & 2;
      if ( (v43 & 2) != 0 && (!v45 || (*((_BYTE *)v45 + 3) & 1) != 0 && (*((_DWORD *)v37 + 64) & 1) != 0) )
      {
        v85 = v37;
        v79 = 0;
        FirstLSurf = v37;
        v46 = 0;
      }
      else
      {
        v48 = *((_QWORD *)v37 + 24);
        if ( v48 )
        {
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v48) + 116) & 1) == 0 )
            SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v37 + 24));
          v43 = v112;
        }
        v49 = (_DWORD)v93 == 0;
        *(_DWORD *)(v36 + 72) = v43;
        if ( !v49 )
        {
          if ( *(_BYTE *)(v36 + 79) != *((_BYTE *)v84 + 3) )
          {
            v50 = bSpDwmCreateLogicalSurface(v90, (struct DWMSPRITE *)v36, v37, 0LL, &v82);
            FirstLSurf = v82;
            v43 = v112;
            v85 = v82;
            v79 = v50;
          }
          v51 = v84;
          *(_DWORD *)(v36 + 76) = *v84;
          v52 = *v51;
          *((_DWORD *)FirstLSurf + 62) |= 0x40u;
          *((_DWORD *)FirstLSurf + 16) = v52;
        }
        if ( (v43 & 1) != 0 )
        {
          *(_DWORD *)(v36 + 80) = a9;
          if ( *((_QWORD *)v37 + 24) )
          {
            if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v37)
              && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v99) )
            {
              v53 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v37 + 24));
              if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v99) )
              {
                v54 = *(_DWORD *)(v53 + 116);
                if ( (v54 & 0x20) == 0 )
                {
                  *(_DWORD *)(v53 + 116) = v54 | 0x20;
                  pConvertDfbSurfaceToDibPostNKAPC(*(HSURF *)(v53 + 32));
                  v78 = 1;
                }
              }
              else
              {
                v55 = (SURFACE *)pConvertDfbSurfaceToDib(v53, 1LL);
                if ( v55 )
                {
                  FirstLSurf = SURFACE::GetFirstLSurf(v55);
                  v85 = FirstLSurf;
                  v82 = FirstLSurf;
                }
              }
              v56 = v80;
              if ( (*((_BYTE *)FirstLSurf + 256) & 0x20) != 0 )
                v56 = 6;
              v80 = v56;
            }
            v43 = v112;
          }
        }
        v46 = v79;
        if ( v79 )
        {
          v57 = v92;
          if ( v92 )
          {
            v58 = v92->x - *(_DWORD *)(v36 + 56);
            v59 = v92->y - *(_DWORD *)(v36 + 60);
            *(_DWORD *)(v36 + 56) = v92->x;
            *(_DWORD *)(v36 + 64) += v58;
            *(_DWORD *)(v36 + 68) += v59;
            *(_DWORD *)(v36 + 60) += v59;
            v57 = v92;
          }
          if ( (*((_DWORD *)FirstLSurf + 64) & 1) != 0 )
          {
            if ( v88 && *((_QWORD *)FirstLSurf + 24) )
              vSpUpdateDirtyRgn((struct DWMSPRITE *)v36, FirstLSurf, v97, v88, (unsigned int *)&v80, (int)a15);
          }
          else if ( (v43 & 0x2000000) != 0 )
          {
            if ( v57 && v89 )
            {
              updated = bSpDwmUpdateDragRectShape(
                          v90,
                          (struct DWMSPRITE *)v36,
                          FirstLSurf,
                          v40,
                          v89,
                          (unsigned int *)&v80,
                          &v82);
              FirstLSurf = v82;
              v46 = updated;
              v85 = v82;
              v79 = updated;
            }
          }
          else if ( v98 && v89 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v108, v97);
            v46 = 0;
            v79 = 0;
            if ( v108[0] && !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v108) )
            {
              v62 = *(_QWORD *)(v61 + 512);
              v63 = v98[1];
              v102.left = *v98;
              v102.right = v89->cx + v102.left;
              v64 = v63 + v89->cy;
              v102.top = v63;
              v102.bottom = v64;
              v65 = bSpDwmUpdateSpriteShape(
                      v90,
                      (struct DWMSPRITE *)v36,
                      FirstLSurf,
                      (struct _SURFOBJ *)(v62 + 24),
                      &v102,
                      *(struct PALETTE **)(v62 + 120),
                      (unsigned int *)&v80,
                      (struct _RECTL *)((unsigned __int64)&v110 & -(__int64)(v88 != 0LL)),
                      &v82);
              FirstLSurf = v82;
              v46 = v65;
              v85 = v82;
              v79 = v65;
            }
            XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v108);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v109);
          }
          if ( v46 )
          {
            if ( (*((_DWORD *)FirstLSurf + 64) & 0x101) == 1 )
              *((_DWORD *)FirstLSurf + 64) |= 0x100u;
            v66 = *((_QWORD *)FirstLSurf + 24);
            if ( v66
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v66) + 116) & 1) == 0
              && !*(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 24)) + 248) )
            {
              *((_DWORD *)FirstLSurf + 64) |= 0x20u;
            }
          }
        }
      }
      if ( *(_QWORD *)(v36 + 40) )
      {
        v67 = (_BYTE *)v91;
      }
      else
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v111, v36 + 56);
        v67 = v111;
        v91 = (__int64)v111;
      }
      if ( v46 && !v78 && (v67 || (*((_DWORD *)FirstLSurf + 64) & 0x20) != 0) )
      {
        if ( (*((_DWORD *)FirstLSurf + 64) & 0x20) != 0 )
          SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v90, gpSfmState, (int)v40);
        SFMLOGICALSURFACE::GetRedirectionInfo(FirstLSurf, (enum _HLSURF_REDIRECTIONSTYLE *)&v96, &v95, &v94, 0LL, 0LL);
        v68 = *((_DWORD *)FirstLSurf + 64) & 4;
        v82 = *(struct SFMLOGICALSURFACE **)FirstLSurf;
        v93 = *(void **)v36;
        v69 = (void *)UserReferenceDwmApiPort(v68);
        DwmAsyncUpdateSprite(v69, v36 + 72, v91, v96, v95, v94);
      }
      if ( v41 )
      {
        ExReleasePushLockExclusiveEx(v41, 0LL);
        KeLeaveCriticalRegion();
      }
      SFMLOGICALSURFACEREF_vDestructor(v105);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v105);
      v70 = v85;
      v71 = *((_QWORD *)v85 + 24);
      if ( v71 )
        v72 = *(_QWORD *)(v71 + 8);
      else
        v72 = 0LL;
      v73 = v80;
      v91 = *(_QWORD *)v36;
      if ( v71 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v71) + 116) & 1) != 0 && (v73 & 1) != 0 )
        v73 &= ~1u;
      v74 = *((_QWORD *)v70 + 24);
      if ( (!v74 || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v74) + 116) & 1) == 0 || v73) && v73 )
      {
        if ( (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v70 + 64)) )
        {
          GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v70, v73, v72);
        }
        else
        {
          v76 = (void *)UserReferenceDwmApiPort(v75);
          DwmAsyncDirtySprite(v76, v72);
        }
      }
      if ( v70 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v70 + 264, 0LL);
      }
      *((_DWORD *)v70 + 64) &= ~0x20u;
      if ( v70 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        ExReleasePushLockExclusiveEx((char *)v70 + 264, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v36 != -120 )
      {
        ExReleasePushLockExclusiveEx(v36 + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      v21 = v101;
      a3 = v100;
      v23 = v79;
      goto LABEL_128;
    }
    v45 = v84;
    goto LABEL_42;
  }
LABEL_130:
  if ( v86 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  if ( v87 )
  {
    v28 = (struct _BLENDFUNCTION *)v84;
    v27 = v88;
    v20 = v89;
    v24 = v92;
    v22 = v90;
    v16 = v97;
    v18 = (struct tagPOINT *)v98;
    v17 = v103;
    goto LABEL_136;
  }
  return v23;
}
