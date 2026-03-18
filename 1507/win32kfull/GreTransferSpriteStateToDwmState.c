/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C014A1F0
 * Callers:
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 * Callees:
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C000AAFC (UserIsWindowWithNoRedirectionBitmap.c)
 *     DwmAsyncUpdateSprite @ 0x1C000BE74 (DwmAsyncUpdateSprite.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C000C644 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C000C8EC (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     GreDeleteSprite @ 0x1C000CBEC (GreDeleteSprite.c)
 *     DwmAsyncCreateSprite @ 0x1C000D52C (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C000D620 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C0010410 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0010444 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00111C4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00118C0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0011A90 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0011B08 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C001A6C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C009CE48 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00F81D4 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     UserGetHwndProcess @ 0x1C00FCD80 (UserGetHwndProcess.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C012C3D0 (UserIsWindowOnDesktopAndComposed.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     UserGetMiniWinInfo @ 0x1C01E7810 (UserGetMiniWinInfo.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C026C778 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C026CCBC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // edi
  HDEV v5; // r14
  unsigned __int8 *v6; // r14
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edx
  unsigned int v10; // r9d
  HSPRITE DwmSpriteObj; // rax
  __int64 v12; // rdx
  struct DWMSPRITE *v13; // r15
  _OWORD *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  HSURF Surface; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  struct _SURFOBJ *v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  SURFACE *v28; // rsi
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  struct _EPROCESS *HwndProcess; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rcx
  int v35; // ebx
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rcx
  int v41; // ebx
  void *v42; // rax
  int updated; // eax
  __int64 v44; // r9
  __int64 v45; // r9
  unsigned __int64 *v46; // rbx
  unsigned __int64 v47; // rcx
  unsigned __int64 *v48; // rsi
  _QWORD *v49; // rbx
  unsigned __int64 v50; // rcx
  _QWORD *v51; // rsi
  struct DwmState *v52; // rbx
  char *v53; // r8
  unsigned int v55; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v56; // [rsp+54h] [rbp-ACh] BYREF
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  int v58; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+68h] [rbp-98h] BYREF
  char v61[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h]
  HDEV v63; // [rsp+80h] [rbp-80h] BYREF
  char v64[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v65[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v66[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct DWMSPRITE *v67; // [rsp+C0h] [rbp-40h]
  _BYTE v68[56]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v69; // [rsp+100h] [rbp+0h] BYREF
  int v70; // [rsp+108h] [rbp+8h]
  int v71; // [rsp+10Ch] [rbp+Ch]
  struct tagRECT v72; // [rsp+110h] [rbp+10h] BYREF

  v2 = a2;
  v62 = a2;
  v63 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v58);
  v5 = a1 + 24;
  if ( *((_DWORD *)a1 + 41) )
    v5 = (HDEV)(**((_QWORD **)a1 + 21) + 96LL);
  v6 = (unsigned __int8 *)*((_QWORD *)v5 + 2);
  v55 = 0;
  do
  {
    if ( !v6 )
      break;
    v7 = *((_QWORD *)v6 + 9);
    if ( v7 && (unsigned int)UserIsWindowOnDesktopAndComposed(v7, v2) )
    {
      if ( *((_DWORD *)a1 + 41) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v8 = *((_QWORD *)v6 + 1);
          v9 = 0;
          v10 = *(_DWORD *)(v8 + 24);
          if ( v10 )
          {
            while ( (**(_DWORD **)(v8 + 8LL * v9 + 32) & 0x20) == 0 )
            {
              if ( ++v9 >= v10 )
                goto LABEL_14;
            }
            v6 = *(unsigned __int8 **)(v8 + 8LL * v9 + 32);
          }
        }
      }
LABEL_14:
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*((HWND *)v6 + 9), v2, a1, 0);
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v66, DwmSpriteObj);
      v13 = v67;
      if ( v67 )
      {
        v14 = (_OWORD *)((char *)v67 + 56);
        v4 = 1;
        v15 = *((_QWORD *)v67 + 16);
        v16 = **((_QWORD **)v6 + 2);
        *((_DWORD *)v67 + 14) = *(_DWORD *)(v16 + 2608) + *((_DWORD *)v6 + 28);
        *((_DWORD *)v13 + 15) = *(_DWORD *)(v16 + 2612) + *((_DWORD *)v6 + 29);
        *((_DWORD *)v13 + 16) = *(_DWORD *)(v16 + 2608) + *((_DWORD *)v6 + 28);
        *((_DWORD *)v13 + 17) = *(_DWORD *)(v16 + 2612) + *((_DWORD *)v6 + 29);
        *((_QWORD *)v13 + 9) = *((_QWORD *)v6 + 28);
        *((_DWORD *)v13 + 20) = *((_DWORD *)v6 + 58);
        if ( (*(_DWORD *)v6 & 1) != 0
          || (*(_DWORD *)v6 & 0x10) != 0
          || *((_DWORD *)v6 + 20) >= *((_DWORD *)v6 + 22)
          || (v17 = 1, *((_DWORD *)v6 + 21) >= *((_DWORD *)v6 + 23)) )
        {
          v17 = 0;
        }
        *((_DWORD *)v13 + 34) ^= (*((_DWORD *)v13 + 34) ^ v17) & 1;
        v18 = *((_QWORD *)v6 + 16);
        if ( v18 )
        {
          *((_DWORD *)v13 + 16) += *(_DWORD *)(v18 + 32);
          *((_DWORD *)v13 + 17) += *(_DWORD *)(*((_QWORD *)v6 + 16) + 36LL);
          v19 = *((_QWORD *)v6 + 30);
          if ( v19 )
          {
            LOBYTE(v12) = 5;
            v20 = HmgReferenceCheckLock(v19, v12, 0LL);
            SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, a1, (struct _SURFOBJ *)(v20 + 24));
            *(_DWORD *)(v15 + 256) |= 1u;
            *(_DWORD *)(v15 + 256) ^= ((unsigned __int16)*(_DWORD *)(v15 + 256) ^ (*v6 >> 7 << 8)) & 0x100;
          }
          else
          {
            Surface = hsurfSpCreateSurface((__int64)a1, (struct tagSIZE *)(*((_QWORD *)v6 + 16) + 32LL));
            if ( Surface )
            {
              LOBYTE(v22) = 5;
              v23 = HmgReferenceCheckLock(Surface, v22, 0LL);
              SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, a1, (struct _SURFOBJ *)(v23 + 24));
              v24 = *(struct _SURFOBJ **)(v15 + 192);
              v65[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v65, v24);
              if ( v65[0] )
              {
                v25 = *((_QWORD *)v6 + 16);
                v69 = 0LL;
                v70 = *(_DWORD *)(v25 + 32);
                v26 = *(_DWORD *)(v25 + 36);
                v27 = *(_QWORD *)(v15 + 192);
                v71 = v26;
                v60 = 0LL;
                v28 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v27);
                if ( (*((_DWORD *)v28 + 28) & 0x400) != 0 )
                  v29 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 359);
                else
                  v29 = EngCopyBits;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v63) )
                  v29 = RedirCopyBits;
                HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*((_QWORD *)v13 + 5));
                SURFACE::vAppContainerOwner(v28, HwndProcess, v31, v32);
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v29)(
                  *(_QWORD *)(v15 + 192),
                  *((_QWORD *)v6 + 16),
                  0LL,
                  0LL,
                  &v69,
                  &v60);
                v14 = (_OWORD *)((char *)v13 + 56);
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v65);
            }
            else
            {
              v4 = 0;
            }
          }
        }
        if ( v4 )
        {
          memset(v68, 0, sizeof(v68));
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v64, (struct DWMSPRITE *)((char *)v13 + 120));
          UserGetMiniWinInfo(*((_QWORD *)v13 + 5), v68);
          v33 = *(_QWORD *)v13;
          v34 = *(_DWORD *)(v15 + 256) & 4;
          v35 = v34 | *((_DWORD *)v13 + 34) & 1 | (*(_DWORD *)(v15 + 256) >> 1) & 0x18 | (2
                                                                                        * (*(_DWORD *)(v15 + 256) & 1 | (8 * (*((_DWORD *)v13 + 34) & 0xE))));
          v36 = (void *)UserReferenceDwmApiPort(v34);
          if ( (int)DwmAsyncCreateSprite(v36, v33, *((_QWORD *)v13 + 5), v14, v35, (__int64)v68) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v15 + 192) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*((_QWORD *)v6 + 9), v37) )
            {
              *(_DWORD *)(v15 + 256) |= 0x20u;
              SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v15, a1, gpSfmState);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v15,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v57,
                &v56,
                &v59,
                0LL,
                0LL);
              v38 = *(_QWORD *)v13;
              v39 = *(_QWORD *)v15;
              v40 = *(_DWORD *)(v15 + 256) & 4;
              v41 = v40 | *((_DWORD *)v13 + 34) & 1 | (*(_DWORD *)(v15 + 256) >> 1) & 0x18 | (2
                                                                                            * (*(_DWORD *)(v15 + 256) & 1 | (8 * (*((_DWORD *)v13 + 34) & 0xE))));
              v42 = (void *)UserReferenceDwmApiPort(v40);
              updated = DwmAsyncUpdateSprite(v42, v38, v39, v41, (__int64 *)v13 + 9, (__int128 *)v68, v57, v56, v59);
              v4 = updated >= 0;
              *(_DWORD *)(v15 + 256) &= ~0x20u;
              if ( updated >= 0 )
              {
                CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v61, (struct _EX_PUSH_LOCK *)(v15 + 264));
                v72.right = *((_DWORD *)v13 + 16) - *((_DWORD *)v13 + 14);
                v72.bottom = *((_DWORD *)v13 + 17) - *((_DWORD *)v13 + 15);
                *(_QWORD *)&v72.left = 0LL;
                vSpUpdateDirtyRgn(v13, (struct SFMLOGICALSURFACE *)v15, 0LL, (struct _RECTL *)&v72, &v55, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v61);
                v44 = *(_QWORD *)(v15 + 192);
                if ( v44 )
                  v45 = *(_QWORD *)(v44 + 8);
                else
                  v45 = 0LL;
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v13, (struct SFMLOGICALSURFACE *)v15, v55, v45);
              }
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v64);
        }
        v13 = v67;
      }
      else
      {
        v4 = 0;
      }
      v6 = (unsigned __int8 *)*((_QWORD *)v6 + 3);
      if ( v13 )
        _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
      v67 = 0LL;
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v66);
      v2 = v62;
    }
    else
    {
      v6 = (unsigned __int8 *)*((_QWORD *)v6 + 3);
    }
  }
  while ( v4 );
  if ( v4 )
  {
    if ( *((_DWORD *)a1 + 41) )
    {
      v46 = (unsigned __int64 *)*((_QWORD *)a1 + 22);
      if ( v46 )
      {
        do
        {
          v47 = v46[1];
          v48 = (unsigned __int64 *)v46[2];
          if ( v47 && (unsigned int)UserIsWindowOnDesktopAndComposed(v47, v2) )
          {
            GdiHintSpriteShape(a1, (HWND)v46[1], 0LL, 0, 0);
            GdiDeleteSprite(a1, (HWND)v46[1], v46);
          }
          v46 = v48;
        }
        while ( v48 );
      }
    }
    else
    {
      v49 = (_QWORD *)*((_QWORD *)a1 + 14);
      if ( v49 )
      {
        do
        {
          v50 = v49[9];
          v51 = (_QWORD *)v49[3];
          if ( v50 && (unsigned int)UserIsWindowOnDesktopAndComposed(v50, v2) )
          {
            if ( v49[30] )
              GdiHintSpriteShape(a1, (HWND)v49[9], 0LL, 0, 0);
            GdiDeleteSprite(a1, (HWND)v49[9], v49);
          }
          v49 = v51;
        }
        while ( v51 );
      }
    }
  }
  else
  {
    v52 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v52 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      if ( v52 )
        v53 = (char *)v52 - 24;
      else
        v53 = 0LL;
      v52 = (struct DwmState *)*((_QWORD *)v53 + 3);
      GreDeleteSprite(a1, 0LL, *(void **)v53, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT((__int64)a1, v58);
  return v4;
}
