/*
 * XREFs of GreUpdateSprite @ 0x1C0032AF0
 * Callers:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C000AA24 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C000AF68 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00326B0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     UpdateSprite @ 0x1C006BC94 (UpdateSprite.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01399AC (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C026E450 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     bMoveDevDragRect @ 0x1C027A420 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C027A6E4 (bMoveDevPreviewRect.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C000AF38 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C000B980 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0033590 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C003BF04 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C003C1DC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C003C598 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C007B130 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C007B37C (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C007B3E8 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C007B460 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C007B6D4 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C007B8B8 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E94AC (DwmAsyncUpdateSprite.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0100B28 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C010A07C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     DwmAsyncDirtySprite @ 0x1C0110984 (DwmAsyncDirtySprite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C02600FC (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026C388 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 */

int __fastcall GreUpdateSprite(
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
        int a15)
{
  HDC v15; // r15
  HDC v16; // r12
  struct tagPOINT *v17; // r11
  struct tagSIZE *v19; // r8
  HWND v20; // r10
  HDEV v21; // rbx
  int v22; // r13d
  struct tagPOINT *v23; // r9
  unsigned int v24; // eax
  int v25; // edi
  struct tagRECT *v26; // rdx
  struct _BLENDFUNCTION *v27; // rcx
  int v28; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rdx
  PRTL_GENERIC_TABLE *v31; // rcx
  void *v32; // rdi
  char *v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  struct tagPOINT *v37; // r9
  __int64 v38; // rdi
  struct SFMLOGICALSURFACE *v39; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // r13
  _QWORD *v41; // rsi
  struct tagRECT v42; // xmm0
  int v43; // r8d
  unsigned __int8 v44; // dl
  int *v45; // rcx
  int updated; // ebx
  unsigned int v47; // eax
  __int64 v48; // rcx
  bool v49; // zf
  int v50; // eax
  int *v51; // rax
  int v52; // ecx
  __int64 v53; // rbx
  int v54; // ecx
  SURFACE *v55; // rax
  unsigned int v56; // edx
  struct tagPOINT *v57; // rcx
  int v58; // ecx
  int v59; // edx
  struct _RECTL *v60; // r8
  __int64 v61; // r9
  __int64 v62; // r9
  LONG y; // edx
  struct PALETTE *v64; // rax
  LONG v65; // ecx
  struct _RECTL *v66; // rcx
  __int64 v67; // rcx
  _BYTE *v68; // rax
  void *v69; // rax
  SFMLOGICALSURFACE *v70; // rsi
  int v71; // eax
  __int64 v72; // rbx
  struct SFMLOGICALSURFACE *v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // r13
  unsigned int v76; // ebx
  __int64 v77; // rcx
  void *v78; // rax
  int v80; // [rsp+20h] [rbp-E0h]
  char v81; // [rsp+60h] [rbp-A0h]
  int v82; // [rsp+64h] [rbp-9Ch]
  unsigned int v83; // [rsp+68h] [rbp-98h] BYREF
  int v84; // [rsp+6Ch] [rbp-94h] BYREF
  struct SFMLOGICALSURFACE *v85; // [rsp+70h] [rbp-90h] BYREF
  int v86; // [rsp+78h] [rbp-88h]
  int *v87; // [rsp+80h] [rbp-80h]
  HDEV v88; // [rsp+88h] [rbp-78h]
  int v89; // [rsp+90h] [rbp-70h]
  int v90; // [rsp+94h] [rbp-6Ch]
  struct tagSIZE *v91; // [rsp+98h] [rbp-68h]
  struct tagRECT *v92; // [rsp+A0h] [rbp-60h]
  struct tagPOINT *v93; // [rsp+A8h] [rbp-58h]
  HDC v94; // [rsp+B0h] [rbp-50h]
  __int64 v95; // [rsp+B8h] [rbp-48h]
  void *v96; // [rsp+C0h] [rbp-40h]
  struct tagPOINT *v97; // [rsp+C8h] [rbp-38h]
  unsigned int v98; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v99; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v100; // [rsp+D8h] [rbp-28h]
  int v101; // [rsp+E0h] [rbp-20h] BYREF
  void *v102; // [rsp+E8h] [rbp-18h]
  HWND v103; // [rsp+F0h] [rbp-10h]
  HDEV v104; // [rsp+F8h] [rbp-8h] BYREF
  SFMLOGICALSURFACE *v105; // [rsp+100h] [rbp+0h]
  struct _RECTL v106; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v107[2]; // [rsp+118h] [rbp+18h] BYREF
  HDC v108; // [rsp+128h] [rbp+28h]
  HWND Buffer[2]; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v110; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v111[56]; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v112; // [rsp+230h] [rbp+130h]

  v15 = a7;
  v16 = a4;
  v17 = a8;
  v19 = a6;
  v20 = a2;
  v95 = a13;
  v21 = a1;
  v22 = 0;
  v108 = a4;
  v23 = a5;
  v24 = a11 & 0xFFDFFFFF;
  v25 = (a11 >> 21) & 1;
  v103 = a2;
  v26 = a12;
  v88 = a1;
  v27 = a10;
  v93 = a5;
  v91 = a6;
  v94 = a7;
  v97 = a8;
  v87 = (int *)a10;
  v92 = a12;
  v89 = 1;
  v86 = v25;
  v83 = 0;
  v81 = 0;
  v112 = a11 & 0xFFDFFFFF;
  if ( a14 )
  {
    if ( !g_pDwmState )
    {
LABEL_147:
      v24 = v112;
      goto LABEL_148;
    }
    v90 = 0;
    if ( !v25 )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
      v90 = 1;
    }
    v104 = v21;
    v28 = 0;
    if ( !v25 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        v28 = 1;
      }
    }
    if ( v25 == 1 )
    {
      GreAcquireSemaphoreSharedInternal(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDwmState);
    }
    else
    {
      GreAcquireSemaphore(ghsemDwmState);
    }
    v31 = (PRTL_GENERIC_TABLE *)g_pDwmState;
    if ( !g_pDwmState )
    {
LABEL_140:
      if ( v90 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      if ( v28 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
        GreReleaseSemaphoreInternal(ghsemSprite);
      }
      if ( !v89 )
        return v22;
      v27 = (struct _BLENDFUNCTION *)v87;
      v26 = v92;
      v19 = v91;
      v23 = v93;
      v21 = v88;
      v20 = v103;
      v17 = v97;
      v15 = v94;
      v16 = v108;
      goto LABEL_147;
    }
    v32 = a3;
    if ( v103 )
    {
      Buffer[0] = v103;
      v32 = 0LL;
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
    if ( !v32 || (LOBYTE(v30) = 15, v35 = HmgShareLockCheck(v32, v30), (v38 = v35) == 0) )
    {
LABEL_139:
      v25 = v86;
      goto LABEL_140;
    }
    if ( (*(_DWORD *)(v35 + 136) & 0x10) != 0 )
    {
LABEL_138:
      DEC_SHARE_REF_CNT(v38);
      goto LABEL_139;
    }
    v89 = 0;
    v82 = 1;
    if ( v35 != -120 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v38 + 120, 0LL);
    }
    v39 = *(struct SFMLOGICALSURFACE **)(v38 + 128);
    FirstLSurf = v39;
    v102 = *(void **)v38;
    v85 = v39;
    v105 = 0LL;
    if ( v39 && *(_QWORD *)v39 )
    {
      LOBYTE(v36) = 18;
      v105 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v39, v36);
    }
    v41 = (_QWORD *)((char *)v39 + 264);
    if ( v39 != (struct SFMLOGICALSURFACE *)-264LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v39 + 264, 0LL);
    }
    if ( v92 )
    {
      v42 = *v92;
      v92 = &v110;
      v110 = v42;
    }
    v43 = v112;
    if ( v112 == 0x2000000 )
    {
      v87 = &v84;
      v84 = 33488896;
      v112 = 570425346;
      v44 = v91 || v93;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v38, v44);
      v43 = 570425346;
    }
    if ( (v43 & 0x20000000) != 0 )
    {
      v43 &= ~0x20000000u;
      v112 = v43;
    }
    else if ( (v43 & 0x40000000) != 0 || !v43 )
    {
      v43 = *(_DWORD *)(v38 + 72);
      v45 = (int *)(v38 + 76);
      v47 = *(_DWORD *)(v38 + 80);
      v87 = (int *)(v38 + 76);
      v112 = v43;
      a9 = v47;
LABEL_42:
      LODWORD(v100) = v43 & 2;
      if ( (v43 & 2) != 0 && (!v45 || (*((_BYTE *)v45 + 3) & 1) != 0 && (*((_DWORD *)v39 + 64) & 1) != 0) )
      {
        v85 = v39;
        v82 = 0;
        FirstLSurf = v39;
        updated = 0;
      }
      else
      {
        v48 = *((_QWORD *)v39 + 24);
        if ( v48 )
        {
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v48) + 116) & 1) == 0 )
            SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v39 + 24));
          v43 = v112;
        }
        v49 = (_DWORD)v100 == 0;
        *(_DWORD *)(v38 + 72) = v43;
        if ( !v49 )
        {
          if ( *(_BYTE *)(v38 + 79) != *((_BYTE *)v87 + 3) )
          {
            v50 = bSpDwmCreateLogicalSurface(v88, (struct DWMSPRITE *)v38, v39, 0LL, &v85);
            v43 = v112;
            FirstLSurf = v85;
            v82 = v50;
          }
          v51 = v87;
          *(_DWORD *)(v38 + 76) = *v87;
          v52 = *v51;
          *((_DWORD *)FirstLSurf + 62) |= 0x40u;
          *((_DWORD *)FirstLSurf + 16) = v52;
        }
        if ( (v43 & 1) != 0 )
        {
          *(_DWORD *)(v38 + 80) = a9;
          if ( *((_QWORD *)v39 + 24) )
          {
            if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v39)
              && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v104) )
            {
              v53 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v39 + 24));
              if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v104) )
              {
                v54 = *(_DWORD *)(v53 + 116);
                if ( (v54 & 0x20) == 0 )
                {
                  *(_DWORD *)(v53 + 116) = v54 | 0x20;
                  pConvertDfbSurfaceToDibPostNKAPC(*(HSURF *)(v53 + 32));
                  v81 = 1;
                }
              }
              else
              {
                v55 = (SURFACE *)pConvertDfbSurfaceToDib(v53, 1LL);
                if ( v55 )
                {
                  FirstLSurf = SURFACE::GetFirstLSurf(v55);
                  v85 = FirstLSurf;
                }
              }
              v56 = v83;
              if ( (*((_BYTE *)FirstLSurf + 256) & 0x20) != 0 )
                v56 = 6;
              v83 = v56;
            }
            v43 = v112;
          }
        }
        updated = v82;
        if ( v82 )
        {
          v57 = v93;
          if ( v93 )
          {
            v58 = v93->x - *(_DWORD *)(v38 + 56);
            v59 = v93->y - *(_DWORD *)(v38 + 60);
            *(_DWORD *)(v38 + 56) = v93->x;
            *(_DWORD *)(v38 + 64) += v58;
            *(_DWORD *)(v38 + 68) += v59;
            *(_DWORD *)(v38 + 60) += v59;
            v57 = v93;
          }
          if ( (*((_DWORD *)FirstLSurf + 64) & 1) != 0 )
          {
            if ( v92 && *((_QWORD *)FirstLSurf + 24) )
              vSpUpdateDirtyRgn((struct DWMSPRITE *)v38, FirstLSurf, v94, v92, &v83, a15);
          }
          else if ( (v43 & 0x2000000) != 0 )
          {
            if ( v57 && v91 )
            {
              updated = bSpDwmUpdateDragRectShape(v88, (struct DWMSPRITE *)v38, FirstLSurf, v37, v91, &v83, &v85);
              v82 = updated;
            }
          }
          else if ( v97 && v91 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v107, v94);
            updated = 0;
            v82 = 0;
            if ( v107[0] && !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v107) )
            {
              v62 = *(_QWORD *)(v61 + 512);
              y = v97->y;
              v64 = *(struct PALETTE **)(v62 + 120);
              v106.left = v97->x;
              v106.right = v91->cx + v106.left;
              v65 = y + v91->cy;
              v106.top = y;
              v106.bottom = v65;
              v66 = (struct _RECTL *)&v110;
              if ( !v92 )
                v66 = v60;
              updated = bSpDwmUpdateSpriteShape(
                          v88,
                          (struct DWMSPRITE *)v38,
                          FirstLSurf,
                          (struct _SURFOBJ *)(v62 + 24),
                          &v106,
                          v64,
                          &v83,
                          v66,
                          &v85);
              v82 = updated;
            }
            XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v107);
          }
          FirstLSurf = v85;
          if ( updated )
          {
            if ( (*((_DWORD *)v85 + 64) & 0x101) == 1 )
              *((_DWORD *)v85 + 64) |= 0x100u;
            v67 = *((_QWORD *)FirstLSurf + 24);
            if ( v67
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v67) + 116) & 1) == 0
              && !*(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 24)) + 240) )
            {
              *((_DWORD *)FirstLSurf + 64) |= 0x20u;
            }
          }
        }
      }
      if ( *(_QWORD *)(v38 + 40) )
      {
        v68 = (_BYTE *)v95;
      }
      else
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v111, v38 + 56);
        v68 = v111;
        v95 = (__int64)v111;
      }
      if ( updated && !v81 && (v68 || (*((_DWORD *)FirstLSurf + 64) & 0x20) != 0) )
      {
        if ( (*((_DWORD *)FirstLSurf + 64) & 0x20) != 0 )
          SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v88, gpSfmState, (int)v37);
        SFMLOGICALSURFACE::GetRedirectionInfo(FirstLSurf, (enum _HLSURF_REDIRECTIONSTYLE *)&v101, &v98, &v99, 0LL, 0LL);
        v100 = *(_QWORD *)FirstLSurf;
        v96 = *(void **)v38;
        v69 = (void *)UserReferenceDwmApiPort();
        DwmAsyncUpdateSprite(v69, v38 + 72, v95, v101, v98, v99);
      }
      if ( v41 )
      {
        ExReleasePushLockExclusiveEx(v41, 0LL);
        KeLeaveCriticalRegion();
      }
      v70 = v105;
      if ( v105 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v105 + 3);
        v71 = *((_DWORD *)v70 + 62);
        if ( (v71 & 0x80u) != 0 && (v71 & 8) != 0 && (v71 & 0x10) != 0 )
        {
          *((_DWORD *)v70 + 62) = v71 & 0xFFFFFFEF;
          SFMLOGICALSURFACE::StopSfmStateTracking(v70, 0LL, gpSfmState);
        }
        v72 = *(_QWORD *)v70;
        if ( *(_QWORD *)v70 )
        {
          LOBYTE(v80) = 18;
          v70 = (SFMLOGICALSURFACE *)HmgRemoveObject(v72, 0LL, 0LL, 1LL, v80, 0LL);
        }
        if ( v70 )
        {
          SFMLOGICALSURFACE::DeInitialize(v70, v72, 0LL);
          FreeObject(v70, 18LL);
          EtwLogicalSurfDestroyEvent(v72, 0LL);
        }
      }
      v73 = v85;
      v74 = *((_QWORD *)v85 + 24);
      if ( v74 )
        v75 = *(_QWORD *)(v74 + 8);
      else
        v75 = 0LL;
      v76 = v83;
      v96 = *(void **)v38;
      if ( v74 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v74) + 116) & 1) != 0 && (v76 & 1) != 0 )
        v76 &= ~1u;
      v77 = *((_QWORD *)v73 + 24);
      if ( v77 )
        SURFOBJ_TO_SURFACE_NOT_NULL(v77);
      if ( v76 )
      {
        if ( (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v73 + 64)) )
        {
          GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)v73);
        }
        else
        {
          v78 = (void *)UserReferenceDwmApiPort();
          DwmAsyncDirtySprite(v78, v75);
        }
      }
      if ( v73 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v73 + 264, 0LL);
      }
      *((_DWORD *)v73 + 64) &= ~0x20u;
      if ( v73 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        ExReleasePushLockExclusiveEx((char *)v73 + 264, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v38 != -120 )
      {
        ExReleasePushLockExclusiveEx(v38 + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      a3 = v102;
      v22 = v82;
      goto LABEL_138;
    }
    v45 = v87;
    goto LABEL_42;
  }
LABEL_148:
  if ( v25 == 1 )
    v24 |= 0x200000u;
  return GdiUpdateSprite(v21, v20, a3, v16, v23, v19, v15, v17, a9, v27, v24, v26);
}
