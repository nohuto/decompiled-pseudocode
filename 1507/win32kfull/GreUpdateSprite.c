/*
 * XREFs of GreUpdateSprite @ 0x1C001B070
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C001BB50 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     UpdateSprite @ 0x1C00591C0 (UpdateSprite.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C010DF3C (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0260028 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C026143C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C026F414 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     bMoveDevDragRect @ 0x1C027B430 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C027B6F4 (bMoveDevPreviewRect.c)
 * Callees:
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C00093A0 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C000BE74 (DwmAsyncUpdateSprite.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C000EA78 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0010F0C (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00111E4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0011A24 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0011A90 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0011B08 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0011D7C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0011EE8 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0012720 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C001A6C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00F8308 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C011E5C0 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     DwmAsyncDirtySprite @ 0x1C0121FCC (DwmAsyncDirtySprite.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025FF84 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026166C (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0261EC0 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026D818 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
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
  __int64 v69; // rcx
  int v70; // ebx
  int v71; // ebx
  void *v72; // rax
  HLSURF *v73; // rbx
  int v74; // eax
  HLSURF v75; // rsi
  struct SFMLOGICALSURFACE *v76; // rsi
  __int64 v77; // rcx
  UINT_PTR v78; // r13
  ULONG v79; // ebx
  __int64 v80; // rcx
  __int64 v81; // rcx
  void *v82; // rax
  int v84; // [rsp+20h] [rbp-E0h]
  char v85; // [rsp+60h] [rbp-A0h]
  int v86; // [rsp+64h] [rbp-9Ch]
  unsigned int v87; // [rsp+68h] [rbp-98h] BYREF
  int v88; // [rsp+6Ch] [rbp-94h] BYREF
  struct SFMLOGICALSURFACE *v89; // [rsp+70h] [rbp-90h] BYREF
  int v90; // [rsp+78h] [rbp-88h]
  int *v91; // [rsp+80h] [rbp-80h]
  HDEV v92; // [rsp+88h] [rbp-78h]
  int v93; // [rsp+90h] [rbp-70h]
  int v94; // [rsp+94h] [rbp-6Ch]
  struct tagSIZE *v95; // [rsp+98h] [rbp-68h]
  struct tagRECT *v96; // [rsp+A0h] [rbp-60h]
  struct tagPOINT *v97; // [rsp+A8h] [rbp-58h]
  HDC v98; // [rsp+B0h] [rbp-50h]
  __int64 v99; // [rsp+B8h] [rbp-48h]
  void *v100; // [rsp+C0h] [rbp-40h]
  struct tagPOINT *v101; // [rsp+C8h] [rbp-38h]
  unsigned int v102; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v103; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v104; // [rsp+D8h] [rbp-28h]
  int v105; // [rsp+E0h] [rbp-20h] BYREF
  HWND v106; // [rsp+E8h] [rbp-18h]
  HDEV v107; // [rsp+F0h] [rbp-10h] BYREF
  void *v108; // [rsp+F8h] [rbp-8h]
  struct _RECTL v109; // [rsp+100h] [rbp+0h] BYREF
  HDC v110; // [rsp+110h] [rbp+10h]
  _BYTE v111[32]; // [rsp+118h] [rbp+18h] BYREF
  SFMLOGICALSURFACE *v112; // [rsp+138h] [rbp+38h]
  int v113; // [rsp+140h] [rbp+40h]
  HWND Buffer[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v115[6]; // [rsp+158h] [rbp+58h] BYREF
  struct tagRECT v116; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v117[56]; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v118; // [rsp+280h] [rbp+180h]

  v15 = a7;
  v16 = a4;
  v17 = a8;
  v19 = a6;
  v20 = a2;
  v99 = a13;
  v21 = a1;
  v22 = 0;
  v110 = a4;
  v23 = a5;
  v24 = a11 & 0xFFDFFFFF;
  v25 = (a11 >> 21) & 1;
  v106 = a2;
  v26 = a12;
  v92 = a1;
  v27 = a10;
  v97 = a5;
  v95 = a6;
  v98 = a7;
  v101 = a8;
  v91 = (int *)a10;
  v96 = a12;
  v93 = 1;
  v90 = v25;
  v87 = 0;
  v85 = 0;
  v118 = a11 & 0xFFDFFFFF;
  if ( a14 )
  {
    if ( !g_pDwmState )
    {
LABEL_148:
      v24 = v118;
      goto LABEL_149;
    }
    v94 = 0;
    if ( !v25 )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
      v94 = 1;
    }
    v107 = v21;
    v28 = 0;
    if ( !v25 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
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
LABEL_141:
      if ( v94 )
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
      if ( !v93 )
        return v22;
      v27 = (struct _BLENDFUNCTION *)v91;
      v26 = v96;
      v19 = v95;
      v23 = v97;
      v21 = v92;
      v20 = v106;
      v17 = v101;
      v15 = v98;
      v16 = v110;
      goto LABEL_148;
    }
    v32 = a3;
    if ( v106 )
    {
      Buffer[0] = v106;
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
    if ( !v32 || (LOBYTE(v30) = 15, v35 = HmgShareLockCheck(v32, v30), (v36 = v35) == 0) )
    {
LABEL_140:
      v25 = v90;
      goto LABEL_141;
    }
    if ( (*(_DWORD *)(v35 + 136) & 0x10) != 0 )
    {
LABEL_139:
      DEC_SHARE_REF_CNT(v36);
      goto LABEL_140;
    }
    v93 = 0;
    v86 = 1;
    if ( v35 != -120 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v36 + 120, 0LL);
    }
    v37 = *(struct SFMLOGICALSURFACE **)(v36 + 128);
    FirstLSurf = v37;
    v108 = *(void **)v36;
    v89 = v37;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v111);
    v112 = 0LL;
    v113 = 1;
    if ( v37 && *(_QWORD *)v37 )
    {
      LOBYTE(v39) = 18;
      v112 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v37, v39);
    }
    v41 = (_QWORD *)((char *)v37 + 264);
    if ( v37 != (struct SFMLOGICALSURFACE *)-264LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v37 + 264, 0LL);
    }
    if ( v96 )
    {
      v42 = *v96;
      v96 = &v116;
      v116 = v42;
    }
    v43 = v118;
    if ( v118 == 0x2000000 )
    {
      v91 = &v88;
      v88 = 33488896;
      v118 = 570425346;
      v44 = v95 || v97;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v36, v44);
      v43 = 570425346;
    }
    if ( (v43 & 0x20000000) != 0 )
    {
      v43 &= ~0x20000000u;
      v118 = v43;
    }
    else if ( (v43 & 0x40000000) != 0 || !v43 )
    {
      v43 = *(_DWORD *)(v36 + 72);
      v45 = (int *)(v36 + 76);
      v47 = *(_DWORD *)(v36 + 80);
      v91 = (int *)(v36 + 76);
      v118 = v43;
      a9 = v47;
LABEL_42:
      LODWORD(v104) = v43 & 2;
      if ( (v43 & 2) != 0 && (!v45 || (*((_BYTE *)v45 + 3) & 1) != 0 && (*((_DWORD *)v37 + 64) & 1) != 0) )
      {
        v89 = v37;
        v86 = 0;
        FirstLSurf = v37;
        updated = 0;
      }
      else
      {
        v48 = *((_QWORD *)v37 + 24);
        if ( v48 )
        {
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v48) + 116) & 1) == 0 )
            SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v37 + 24));
          v43 = v118;
        }
        v49 = (_DWORD)v104 == 0;
        *(_DWORD *)(v36 + 72) = v43;
        if ( !v49 )
        {
          if ( *(_BYTE *)(v36 + 79) != *((_BYTE *)v91 + 3) )
          {
            v50 = bSpDwmCreateLogicalSurface(v92, (struct DWMSPRITE *)v36, v37, 0LL, &v89);
            v43 = v118;
            FirstLSurf = v89;
            v86 = v50;
          }
          v51 = v91;
          *(_DWORD *)(v36 + 76) = *v91;
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
              && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v107) )
            {
              v53 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v37 + 24));
              if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v107) )
              {
                v54 = *(_DWORD *)(v53 + 116);
                if ( (v54 & 0x20) == 0 )
                {
                  *(_DWORD *)(v53 + 116) = v54 | 0x20;
                  pConvertDfbSurfaceToDibPostNKAPC(*(HSURF *)(v53 + 32));
                  v85 = 1;
                }
              }
              else
              {
                v55 = (SURFACE *)pConvertDfbSurfaceToDib(v53, 1LL);
                if ( v55 )
                {
                  FirstLSurf = SURFACE::GetFirstLSurf(v55);
                  v89 = FirstLSurf;
                }
              }
              v56 = v87;
              if ( (*((_BYTE *)FirstLSurf + 256) & 0x20) != 0 )
                v56 = 6;
              v87 = v56;
            }
            v43 = v118;
          }
        }
        updated = v86;
        if ( v86 )
        {
          v57 = v97;
          if ( v97 )
          {
            v58 = v97->x - *(_DWORD *)(v36 + 56);
            v59 = v97->y - *(_DWORD *)(v36 + 60);
            *(_DWORD *)(v36 + 56) = v97->x;
            *(_DWORD *)(v36 + 64) += v58;
            *(_DWORD *)(v36 + 68) += v59;
            *(_DWORD *)(v36 + 60) += v59;
            v57 = v97;
          }
          if ( (*((_DWORD *)FirstLSurf + 64) & 1) != 0 )
          {
            if ( v96 && *((_QWORD *)FirstLSurf + 24) )
              vSpUpdateDirtyRgn((struct DWMSPRITE *)v36, FirstLSurf, v98, (struct _RECTL *)v96, &v87, a15);
          }
          else if ( (v43 & 0x2000000) != 0 )
          {
            if ( v57 && v95 )
            {
              updated = bSpDwmUpdateDragRectShape(v92, (struct DWMSPRITE *)v36, FirstLSurf, v40, v95, &v87, &v89);
              v86 = updated;
            }
          }
          else if ( v101 && v95 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v115, v98);
            updated = 0;
            v86 = 0;
            if ( v115[0] && !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v115) )
            {
              v62 = *(_QWORD *)(v61 + 512);
              y = v101->y;
              v64 = *(struct PALETTE **)(v62 + 120);
              v109.left = v101->x;
              v109.right = v95->cx + v109.left;
              v65 = y + v95->cy;
              v109.top = y;
              v109.bottom = v65;
              v66 = (struct _RECTL *)&v116;
              if ( !v96 )
                v66 = v60;
              updated = bSpDwmUpdateSpriteShape(
                          v92,
                          (struct DWMSPRITE *)v36,
                          FirstLSurf,
                          (struct _SURFOBJ *)(v62 + 24),
                          &v109,
                          v64,
                          &v87,
                          v66,
                          &v89);
              v86 = updated;
            }
            DCOBJ::~DCOBJ((DCOBJ *)v115);
          }
          FirstLSurf = v89;
          if ( updated )
          {
            if ( (*((_DWORD *)v89 + 64) & 0x101) == 1 )
              *((_DWORD *)v89 + 64) |= 0x100u;
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
      if ( *(_QWORD *)(v36 + 40) )
      {
        v68 = (_BYTE *)v99;
      }
      else
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v117, v36 + 56);
        v68 = v117;
        v99 = (__int64)v117;
      }
      if ( updated && !v85 && (v68 || (*((_DWORD *)FirstLSurf + 64) & 0x20) != 0) )
      {
        if ( (*((_DWORD *)FirstLSurf + 64) & 0x20) != 0 )
          SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v92, gpSfmState);
        SFMLOGICALSURFACE::GetRedirectionInfo(
          FirstLSurf,
          (enum _HLSURF_REDIRECTIONSTYLE *)&v105,
          &v102,
          &v103,
          0LL,
          0LL);
        v69 = *((_DWORD *)FirstLSurf + 64) & 4;
        v70 = *(_DWORD *)(v36 + 136) & 1 | (*((_DWORD *)FirstLSurf + 64) >> 1) & 0x18 | (2
                                                                                       * (*((_DWORD *)FirstLSurf + 64) & 1 | (8 * (*(_DWORD *)(v36 + 136) & 0xE))));
        v104 = *(_QWORD *)FirstLSurf;
        v71 = v69 | v70;
        v100 = *(void **)v36;
        v72 = (void *)UserReferenceDwmApiPort(v69);
        DwmAsyncUpdateSprite(v72, (__int64)v100, v104, v71, (__int64 *)(v36 + 72), (__int128 *)v99, v105, v102, v103);
      }
      if ( v41 )
      {
        ExReleasePushLockExclusiveEx(v41, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v112 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v112 + 3);
        if ( v113 == 1 )
        {
          v73 = (HLSURF *)v112;
          v74 = *((_DWORD *)v112 + 62);
          if ( (v74 & 0x80u) != 0 && (v74 & 8) != 0 && (v74 & 0x10) != 0 )
          {
            *((_DWORD *)v112 + 62) = v74 & 0xFFFFFFEF;
            SFMLOGICALSURFACE::StopSfmStateTracking(v112, 0LL, gpSfmState);
            v73 = (HLSURF *)v112;
          }
          v75 = *v73;
          if ( *v73 )
          {
            LOBYTE(v84) = 18;
            v73 = (HLSURF *)HmgRemoveObject(v75, 0LL, 0LL, 1LL, v84, 0LL);
          }
          if ( v73 )
          {
            SFMLOGICALSURFACE::DeInitialize(v73, v75, 0);
            FreeObject(v73, 18LL);
            EtwLogicalSurfDestroyEvent(v75, 0LL);
          }
        }
      }
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v111);
      v76 = v89;
      v77 = *((_QWORD *)v89 + 24);
      if ( v77 )
        v78 = *(_QWORD *)(v77 + 8);
      else
        v78 = 0LL;
      v79 = v87;
      v100 = *(void **)v36;
      if ( v77 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v77) + 116) & 1) != 0 && (v79 & 1) != 0 )
        v79 &= ~1u;
      v80 = *((_QWORD *)v76 + 24);
      if ( v80 )
        SURFOBJ_TO_SURFACE_NOT_NULL(v80);
      if ( v79 )
      {
        if ( bShouldUseSfmTokenArray(*((_DWORD *)v76 + 64)) )
        {
          GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v76, v79, v78);
        }
        else
        {
          v82 = (void *)UserReferenceDwmApiPort(v81);
          DwmAsyncDirtySprite(v82, v78);
        }
      }
      if ( v76 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v76 + 264, 0LL);
      }
      *((_DWORD *)v76 + 64) &= ~0x20u;
      if ( v76 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        ExReleasePushLockExclusiveEx((char *)v76 + 264, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v36 != -120 )
      {
        ExReleasePushLockExclusiveEx(v36 + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      a3 = v108;
      v22 = v86;
      goto LABEL_139;
    }
    v45 = v91;
    goto LABEL_42;
  }
LABEL_149:
  if ( v25 == 1 )
    v24 |= 0x200000u;
  return GdiUpdateSprite(v21, v20, a3, v16, v23, v19, v15, v17, a9, v27, v24, v26);
}
