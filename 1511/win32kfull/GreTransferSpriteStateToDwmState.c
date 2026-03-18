/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C00D2428
 * Callers:
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 * Callees:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0033590 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0038DE8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C003C1BC (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C007B03C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B218 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C007B3E8 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C007B460 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C007C164 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007D810 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C007DDA4 (DwmAsyncCreateSprite.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C007E710 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C007E830 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     GreDeleteSprite @ 0x1C007FE74 (GreDeleteSprite.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00D5B64 (UserIsWindowOnDesktopAndComposed.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E94AC (DwmAsyncUpdateSprite.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01009F4 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C0101CA4 (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserGetHwndProcess @ 0x1C010A298 (UserGetHwndProcess.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     UserGetMiniWinInfo @ 0x1C01E7C80 (UserGetMiniWinInfo.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C026B2E8 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C026B82C (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // esi
  HDEV v5; // r15
  unsigned __int8 *v6; // r15
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // r9d
  HSPRITE DwmSpriteObj; // rax
  __int64 v14; // rdx
  struct DWMSPRITE *v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  HSURF Surface; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  struct _SURFOBJ *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  unsigned __int64 HwndProcess; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  int v33; // ebx
  void *v34; // rax
  void *v35; // rax
  int updated; // eax
  __int64 v37; // r9
  UINT_PTR v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rdi
  struct DwmState *v44; // rbx
  char *v45; // r8
  unsigned int v46; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h] BYREF
  struct DWMSPRITE *v53; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v54[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v55[8]; // [rsp+88h] [rbp-78h] BYREF
  HDEV v56; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v57[2]; // [rsp+98h] [rbp-68h] BYREF
  SURFACE *v58; // [rsp+A8h] [rbp-58h]
  _BYTE v59[56]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-18h] BYREF
  int v61; // [rsp+F0h] [rbp-10h]
  int v62; // [rsp+F4h] [rbp-Ch]
  struct tagRECT v63; // [rsp+F8h] [rbp-8h] BYREF

  v2 = a2;
  v51 = a2;
  v56 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v50);
  v5 = a1 + 24;
  if ( *((_DWORD *)a1 + 41) )
    v5 = (HDEV)(**((_QWORD **)a1 + 21) + 96LL);
  v6 = (unsigned __int8 *)*((_QWORD *)v5 + 2);
  v46 = 0;
  do
  {
    if ( !v6 )
      break;
    v9 = *((_QWORD *)v6 + 9);
    if ( v9 && (unsigned int)UserIsWindowOnDesktopAndComposed(v9, v2) )
    {
      if ( *((_DWORD *)a1 + 41) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v10 = *((_QWORD *)v6 + 1);
          v11 = 0;
          v12 = *(_DWORD *)(v10 + 24);
          if ( v12 )
          {
            while ( (**(_DWORD **)(v10 + 8LL * v11 + 32) & 0x20) == 0 )
            {
              if ( ++v11 >= v12 )
                goto LABEL_18;
            }
            v6 = *(unsigned __int8 **)(v10 + 8LL * v11 + 32);
          }
        }
      }
LABEL_18:
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*((HWND *)v6 + 9), v2, a1, 0);
      v53 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v53, DwmSpriteObj);
      v15 = v53;
      if ( v53 )
      {
        v4 = 1;
        v16 = *((_QWORD *)v53 + 16);
        v17 = **((_QWORD **)v6 + 2);
        *((_DWORD *)v53 + 14) = *(_DWORD *)(v17 + 2608) + *((_DWORD *)v6 + 28);
        *((_DWORD *)v15 + 15) = *(_DWORD *)(v17 + 2612) + *((_DWORD *)v6 + 29);
        *((_DWORD *)v15 + 16) = *(_DWORD *)(v17 + 2608) + *((_DWORD *)v6 + 28);
        *((_DWORD *)v15 + 17) = *(_DWORD *)(v17 + 2612) + *((_DWORD *)v6 + 29);
        *((_QWORD *)v15 + 9) = *((_QWORD *)v6 + 28);
        *((_DWORD *)v15 + 20) = *((_DWORD *)v6 + 58);
        if ( (*(_DWORD *)v6 & 1) != 0
          || (*(_DWORD *)v6 & 0x10) != 0
          || *((_DWORD *)v6 + 20) >= *((_DWORD *)v6 + 22)
          || (v18 = 1, *((_DWORD *)v6 + 21) >= *((_DWORD *)v6 + 23)) )
        {
          v18 = 0;
        }
        *((_DWORD *)v15 + 34) ^= (*((_DWORD *)v15 + 34) ^ v18) & 1;
        v19 = *((_QWORD *)v6 + 16);
        if ( v19 )
        {
          *((_DWORD *)v15 + 16) += *(_DWORD *)(v19 + 32);
          *((_DWORD *)v15 + 17) += *(_DWORD *)(*((_QWORD *)v6 + 16) + 36LL);
          v20 = *((_QWORD *)v6 + 30);
          if ( v20 )
          {
            LOBYTE(v14) = 5;
            v21 = HmgReferenceCheckLock(v20, v14, 0LL);
            SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v16, a1, (struct _SURFOBJ *)(v21 + 24));
            *(_DWORD *)(v16 + 256) |= 1u;
            *(_DWORD *)(v16 + 256) ^= ((unsigned __int16)*(_DWORD *)(v16 + 256) ^ (*v6 >> 7 << 8)) & 0x100;
          }
          else
          {
            Surface = hsurfSpCreateSurface(a1, (struct tagSIZE *)(*((_QWORD *)v6 + 16) + 32LL));
            if ( Surface )
            {
              LOBYTE(v23) = 5;
              v24 = HmgReferenceCheckLock(Surface, v23, 0LL);
              SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v16, a1, (struct _SURFOBJ *)(v24 + 24));
              v25 = *(struct _SURFOBJ **)(v16 + 192);
              v57[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v57, v25);
              if ( v57[0] )
              {
                v26 = *((_QWORD *)v6 + 16);
                v60 = 0LL;
                v61 = *(_DWORD *)(v26 + 32);
                v27 = *(_DWORD *)(v26 + 36);
                v28 = *(_QWORD *)(v16 + 192);
                v62 = v27;
                v52 = 0LL;
                v58 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v28);
                if ( (*((_DWORD *)v58 + 28) & 0x400) != 0 )
                  v29 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 359);
                else
                  v29 = EngCopyBits;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v56) )
                  v29 = RedirCopyBits;
                HwndProcess = UserGetHwndProcess(*((_QWORD *)v15 + 5));
                SURFACE::vAppContainerOwner(v58, HwndProcess);
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v29)(
                  *(_QWORD *)(v16 + 192),
                  *((_QWORD *)v6 + 16),
                  0LL,
                  0LL,
                  &v60,
                  &v52);
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v57);
            }
            else
            {
              v4 = 0;
            }
          }
        }
        if ( v4 )
        {
          memset(v59, 0, sizeof(v59));
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v55, (struct DWMSPRITE *)((char *)v15 + 120));
          UserGetMiniWinInfo(*((_QWORD *)v15 + 5), v59);
          v31 = *(_QWORD *)v15;
          v32 = *(_DWORD *)(v16 + 256) & 4;
          v33 = v32 | *((_DWORD *)v15 + 34) & 1 | (*(_DWORD *)(v16 + 256) >> 1) & 0x18 | (2
                                                                                        * (*(_DWORD *)(v16 + 256) & 1 | (8 * (*((_DWORD *)v15 + 34) & 0xE))));
          v34 = (void *)UserReferenceDwmApiPort(v32);
          if ( (int)DwmAsyncCreateSprite(
                      v34,
                      v31,
                      *((_QWORD *)v15 + 5),
                      (struct DWMSPRITE *)((char *)v15 + 56),
                      v33,
                      (__int64)v59) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v16 + 192) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*((_QWORD *)v6 + 9)) )
            {
              *(_DWORD *)(v16 + 256) |= 0x20u;
              SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v16, a1, gpSfmState);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v16,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v48,
                &v47,
                &v49,
                0LL,
                0LL);
              v35 = (void *)UserReferenceDwmApiPort(*(_DWORD *)(v16 + 256) & 4);
              updated = DwmAsyncUpdateSprite(v35, (__int64)v15 + 72, (__int64)v59, v48, v47, v49);
              v4 = updated >= 0;
              *(_DWORD *)(v16 + 256) &= ~0x20u;
              if ( updated >= 0 )
              {
                CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v54, (struct _EX_PUSH_LOCK *)(v16 + 264));
                v63.right = *((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 14);
                v63.bottom = *((_DWORD *)v15 + 17) - *((_DWORD *)v15 + 15);
                *(_QWORD *)&v63.left = 0LL;
                vSpUpdateDirtyRgn(v15, (struct SFMLOGICALSURFACE *)v16, 0LL, (struct _RECTL *)&v63, &v46, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v54);
                v37 = *(_QWORD *)(v16 + 192);
                if ( v37 )
                  v38 = *(_QWORD *)(v37 + 8);
                else
                  v38 = 0LL;
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v15, (struct SFMLOGICALSURFACE *)v16, v46, v38);
              }
              v2 = v51;
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v55);
        }
      }
      else
      {
        v4 = 0;
      }
      v6 = (unsigned __int8 *)*((_QWORD *)v6 + 3);
      if ( v15 )
        _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
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
      v39 = *((_QWORD *)a1 + 22);
      if ( v39 )
      {
        do
        {
          v40 = *(_QWORD *)(v39 + 8);
          v41 = *(_QWORD *)(v39 + 16);
          if ( v40 && (unsigned int)UserIsWindowOnDesktopAndComposed(v40, v2) )
          {
            GdiHintSpriteShape(a1, *(HWND *)(v39 + 8), 0LL, 0, 0);
            GdiDeleteSprite(a1, *(HWND *)(v39 + 8), (void *)v39);
          }
          v39 = v41;
        }
        while ( v41 );
      }
    }
    else
    {
      v7 = *((_QWORD *)a1 + 14);
      if ( v7 )
      {
        do
        {
          v42 = *(_QWORD *)(v7 + 72);
          v43 = *(_QWORD *)(v7 + 24);
          if ( v42 && (unsigned int)UserIsWindowOnDesktopAndComposed(v42, v2) )
          {
            if ( *(_QWORD *)(v7 + 240) )
              GdiHintSpriteShape(a1, *(HWND *)(v7 + 72), 0LL, 0, 0);
            GdiDeleteSprite(a1, *(HWND *)(v7 + 72), (void *)v7);
          }
          v7 = v43;
        }
        while ( v43 );
      }
    }
  }
  else
  {
    v44 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v44 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      if ( v44 )
        v45 = (char *)v44 - 24;
      else
        v45 = 0LL;
      v44 = (struct DwmState *)*((_QWORD *)v45 + 3);
      GreDeleteSprite(a1, 0LL, *(HSPRITE *)v45, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT((__int64)a1, v50);
  return v4;
}
