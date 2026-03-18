/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C01324D8
 * Callers:
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 * Callees:
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0033E38 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0050EE0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C0051ED0 (DwmAsyncUpdateSprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0052190 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0052360 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00523D8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0053714 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C00630FC (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0063AB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0065268 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C00659D0 (DwmAsyncCreateSprite.c)
 *     GreDeleteSprite @ 0x1C00660AC (GreDeleteSprite.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00666DC (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00667FC (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00D88D4 (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00EF2C0 (UserIsWindowOnDesktopAndComposed.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00F0E78 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     UserGetHwndProcess @ 0x1C012BEC4 (UserGetHwndProcess.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     UserGetMiniWinInfo @ 0x1C01DE4D0 (UserGetMiniWinInfo.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C02697A8 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0269CEC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  HDEV v7; // r14
  unsigned __int8 *v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // r9d
  HSPRITE DwmSpriteObj; // rax
  __int64 v14; // rdx
  struct DWMSPRITE *v15; // r15
  _OWORD *v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  HSURF Surface; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _SURFOBJ *v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  SURFACE *v30; // rsi
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  unsigned __int64 HwndProcess; // rax
  __int64 v33; // rdi
  __int64 v34; // rcx
  int v35; // ebx
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rcx
  int v43; // ebx
  void *v44; // rax
  int updated; // eax
  __int64 v46; // r9
  UINT_PTR v47; // r9
  unsigned __int64 *v48; // rbx
  unsigned __int64 v49; // rcx
  unsigned __int64 *v50; // rsi
  _QWORD *v51; // rbx
  unsigned __int64 v52; // rcx
  _QWORD *v53; // rsi
  struct DwmState *v54; // rbx
  char *v55; // r8
  unsigned int v57; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v58; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v59; // [rsp+58h] [rbp-A8h] BYREF
  int v60; // [rsp+5Ch] [rbp-A4h] BYREF
  int v61; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h] BYREF
  HDEV v63; // [rsp+70h] [rbp-90h] BYREF
  char v64[8]; // [rsp+78h] [rbp-88h] BYREF
  char v65[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v66; // [rsp+88h] [rbp-78h]
  _QWORD v67[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v68[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct DWMSPRITE *v69; // [rsp+C0h] [rbp-40h]
  __int128 v70[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v71; // [rsp+100h] [rbp+0h] BYREF
  int v72; // [rsp+108h] [rbp+8h]
  int v73; // [rsp+10Ch] [rbp+Ch]
  struct tagRECT v74; // [rsp+110h] [rbp+10h] BYREF

  v2 = a2;
  v66 = a2;
  v63 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v61);
  v7 = a1 + 24;
  if ( *((_DWORD *)a1 + 41) )
    v7 = (HDEV)(**((_QWORD **)a1 + 21) + 96LL);
  v8 = (unsigned __int8 *)*((_QWORD *)v7 + 2);
  v57 = 0;
  do
  {
    if ( !v8 )
      break;
    v9 = *((_QWORD *)v8 + 9);
    if ( v9 && (unsigned int)UserIsWindowOnDesktopAndComposed(v9, v2, v5, v6) )
    {
      if ( *((_DWORD *)a1 + 41) )
      {
        if ( (*(_DWORD *)v8 & 0x20) == 0 )
        {
          v10 = *((_QWORD *)v8 + 1);
          v11 = 0;
          v12 = *(_DWORD *)(v10 + 24);
          if ( v12 )
          {
            while ( (**(_DWORD **)(v10 + 8LL * v11 + 32) & 0x20) == 0 )
            {
              if ( ++v11 >= v12 )
                goto LABEL_14;
            }
            v8 = *(unsigned __int8 **)(v10 + 8LL * v11 + 32);
          }
        }
      }
LABEL_14:
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*((HWND *)v8 + 9), v2, a1, 0);
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v68, DwmSpriteObj);
      v15 = v69;
      if ( v69 )
      {
        v16 = (_OWORD *)((char *)v69 + 56);
        v4 = 1;
        v17 = *((_QWORD *)v69 + 16);
        v18 = **((_QWORD **)v8 + 2);
        *((_DWORD *)v69 + 14) = *(_DWORD *)(v18 + 2608) + *((_DWORD *)v8 + 28);
        *((_DWORD *)v15 + 15) = *((_DWORD *)v8 + 29) + *(_DWORD *)(v18 + 2612);
        *((_DWORD *)v15 + 16) = *(_DWORD *)(v18 + 2608) + *((_DWORD *)v8 + 28);
        *((_DWORD *)v15 + 17) = *((_DWORD *)v8 + 29) + *(_DWORD *)(v18 + 2612);
        *((_QWORD *)v15 + 9) = *((_QWORD *)v8 + 28);
        *((_DWORD *)v15 + 20) = *((_DWORD *)v8 + 58);
        if ( (*(_DWORD *)v8 & 1) != 0
          || (*(_DWORD *)v8 & 0x10) != 0
          || *((_DWORD *)v8 + 20) >= *((_DWORD *)v8 + 22)
          || (v19 = 1, *((_DWORD *)v8 + 21) >= *((_DWORD *)v8 + 23)) )
        {
          v19 = 0;
        }
        *((_DWORD *)v15 + 34) ^= (v19 ^ *((_DWORD *)v15 + 34)) & 1;
        v20 = *((_QWORD *)v8 + 16);
        if ( v20 )
        {
          *((_DWORD *)v15 + 16) += *(_DWORD *)(v20 + 32);
          *((_DWORD *)v15 + 17) += *(_DWORD *)(*((_QWORD *)v8 + 16) + 36LL);
          v21 = *((_QWORD *)v8 + 30);
          if ( v21 )
          {
            LOBYTE(v14) = 5;
            v22 = HmgReferenceCheckLock(v21, v14, 0LL);
            SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, a1, (struct _SURFOBJ *)(v22 + 24));
            *(_DWORD *)(v17 + 256) |= 1u;
            *(_DWORD *)(v17 + 256) ^= ((unsigned __int16)*(_DWORD *)(v17 + 256) ^ (*v8 >> 7 << 8)) & 0x100;
          }
          else
          {
            Surface = hsurfSpCreateSurface((__int64)a1, (struct tagSIZE *)(*((_QWORD *)v8 + 16) + 32LL));
            if ( Surface )
            {
              LOBYTE(v24) = 5;
              v25 = HmgReferenceCheckLock(Surface, v24, 0LL);
              SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, a1, (struct _SURFOBJ *)(v25 + 24));
              v26 = *(struct _SURFOBJ **)(v17 + 192);
              v67[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v67, v26);
              if ( v67[0] )
              {
                v27 = *((_QWORD *)v8 + 16);
                v71 = 0LL;
                v72 = *(_DWORD *)(v27 + 32);
                v28 = *(_DWORD *)(v27 + 36);
                v29 = *(_QWORD *)(v17 + 192);
                v62 = 0LL;
                v73 = v28;
                v30 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v29);
                if ( (*((_DWORD *)v30 + 28) & 0x400) != 0 )
                  v31 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 358);
                else
                  v31 = EngCopyBits;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v63) )
                  v31 = RedirCopyBits;
                HwndProcess = UserGetHwndProcess(*((_QWORD *)v15 + 5));
                SURFACE::vAppContainerOwner(v30, HwndProcess);
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v31)(
                  *(_QWORD *)(v17 + 192),
                  *((_QWORD *)v8 + 16),
                  0LL,
                  0LL,
                  &v71,
                  &v62);
                v16 = (_OWORD *)((char *)v15 + 56);
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v67);
            }
            else
            {
              v4 = 0;
            }
          }
        }
        if ( v4 )
        {
          memset(v70, 0, 0x38uLL);
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v65, (struct DWMSPRITE *)((char *)v15 + 120));
          UserGetMiniWinInfo(*((_QWORD *)v15 + 5), v70);
          v33 = *(_QWORD *)v15;
          v34 = *(_DWORD *)(v17 + 256) & 4;
          v35 = v34 | *((_DWORD *)v15 + 34) & 1 | (*(_DWORD *)(v17 + 256) >> 1) & 0x18 | (2
                                                                                        * (*(_DWORD *)(v17 + 256) & 1 | (8 * (*((_DWORD *)v15 + 34) & 0xE))));
          v36 = (void *)UserReferenceDwmApiPort(v34);
          if ( (int)DwmAsyncCreateSprite(v36, v33, *((_QWORD *)v15 + 5), v16, v35, (__int64)v70) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v17 + 192)
              || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*((_QWORD *)v8 + 9), v37, v38, v39) )
            {
              *(_DWORD *)(v17 + 256) |= 0x20u;
              SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v17, a1, gpSfmState);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v17,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v60,
                &v59,
                &v58,
                0LL,
                0LL);
              v40 = *(_QWORD *)v15;
              v41 = *(_QWORD *)v17;
              v42 = *(_DWORD *)(v17 + 256) & 4;
              v43 = v42 | *((_DWORD *)v15 + 34) & 1 | (*(_DWORD *)(v17 + 256) >> 1) & 0x18 | (2
                                                                                            * (*(_DWORD *)(v17 + 256) & 1 | (8 * (*((_DWORD *)v15 + 34) & 0xE))));
              v44 = (void *)UserReferenceDwmApiPort(v42);
              updated = DwmAsyncUpdateSprite(v44, v40, v41, v43, (__int64 *)v15 + 9, v70, v60, v59, v58);
              v4 = updated >= 0;
              *(_DWORD *)(v17 + 256) &= ~0x20u;
              if ( updated >= 0 )
              {
                CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v64, (struct _EX_PUSH_LOCK *)(v17 + 264));
                v74.right = *((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 14);
                v74.bottom = *((_DWORD *)v15 + 17) - *((_DWORD *)v15 + 15);
                *(_QWORD *)&v74.left = 0LL;
                vSpUpdateDirtyRgn(
                  (struct _POINTL *)v15,
                  (struct SFMLOGICALSURFACE *)v17,
                  0LL,
                  (struct _RECTL *)&v74,
                  &v57,
                  0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v64);
                v46 = *(_QWORD *)(v17 + 192);
                if ( v46 )
                  v47 = *(_QWORD *)(v46 + 8);
                else
                  v47 = 0LL;
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v15, (struct SFMLOGICALSURFACE *)v17, v57, v47);
              }
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v65);
        }
        v15 = v69;
      }
      else
      {
        v4 = 0;
      }
      v8 = (unsigned __int8 *)*((_QWORD *)v8 + 3);
      if ( v15 )
        _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
      v69 = 0LL;
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v68);
      v2 = v66;
    }
    else
    {
      v8 = (unsigned __int8 *)*((_QWORD *)v8 + 3);
    }
  }
  while ( v4 );
  if ( v4 )
  {
    if ( *((_DWORD *)a1 + 41) )
    {
      v48 = (unsigned __int64 *)*((_QWORD *)a1 + 22);
      if ( v48 )
      {
        do
        {
          v49 = v48[1];
          v50 = (unsigned __int64 *)v48[2];
          if ( v49 && (unsigned int)UserIsWindowOnDesktopAndComposed(v49, v2, v5, v6) )
          {
            GdiHintSpriteShape(a1, (HWND)v48[1], 0LL, 0, 0);
            GdiDeleteSprite(a1, (HWND)v48[1], v48);
          }
          v48 = v50;
        }
        while ( v50 );
      }
    }
    else
    {
      v51 = (_QWORD *)*((_QWORD *)a1 + 14);
      if ( v51 )
      {
        do
        {
          v52 = v51[9];
          v53 = (_QWORD *)v51[3];
          if ( v52 && (unsigned int)UserIsWindowOnDesktopAndComposed(v52, v2, v5, v6) )
          {
            if ( v51[30] )
              GdiHintSpriteShape(a1, (HWND)v51[9], 0LL, 0, 0);
            GdiDeleteSprite(a1, (HWND)v51[9], v51);
          }
          v51 = v53;
        }
        while ( v53 );
      }
    }
  }
  else
  {
    v54 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v54 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      if ( v54 )
        v55 = (char *)v54 - 24;
      else
        v55 = 0LL;
      v54 = (struct DwmState *)*((_QWORD *)v55 + 3);
      GreDeleteSprite(a1, 0LL, *(HSPRITE *)v55, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT((__int64)a1, v61);
  return v4;
}
