/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C00EF478
 * Callers:
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 * Callees:
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0052108 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C0052140 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0052190 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     DwmAsyncDestroySprite @ 0x1C0066028 (DwmAsyncDestroySprite.c)
 *     GreDeleteSprite @ 0x1C00660AC (GreDeleteSprite.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00666DC (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00667FC (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00D88D4 (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00EF2C0 (UserIsWindowOnDesktopAndComposed.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C025E1CC (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0269664 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0269CEC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026A840 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C0270F0C (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(HDEV a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 v4; // r8
  __int64 v5; // r9
  HDC v6; // r12
  HDC DisplayDC; // r15
  HDC v8; // rbx
  HDC v9; // r10
  struct DwmState *v10; // r14
  char *v11; // rdi
  __int64 v12; // r14
  HLSURF v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned int v18; // r9d
  __int64 v19; // r13
  LONG v20; // eax
  HWND v21; // rdx
  unsigned int v22; // ecx
  LONG v23; // eax
  HSPRITE v24; // rbx
  void *v25; // rax
  unsigned int v27; // [rsp+58h] [rbp-49h]
  int v28; // [rsp+6Ch] [rbp-35h] BYREF
  struct SURFACE *v29; // [rsp+70h] [rbp-31h]
  struct tagPOINT v30; // [rsp+78h] [rbp-29h] BYREF
  struct tagSIZE v31; // [rsp+80h] [rbp-21h] BYREF
  struct tagPOINT v32; // [rsp+88h] [rbp-19h] BYREF
  struct tagSIZE v33; // [rsp+90h] [rbp-11h] BYREF
  struct tagPOINT v34; // [rsp+98h] [rbp-9h] BYREF
  HDC v35; // [rsp+A0h] [rbp-1h]
  HDC v36; // [rsp+A8h] [rbp+7h]
  __int64 v37; // [rsp+B0h] [rbp+Fh]
  _QWORD v38[3]; // [rsp+B8h] [rbp+17h] BYREF

  memset(&v38[1], 0, 12);
  v37 = a2;
  v3 = 1;
  v38[0] = a1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v28);
  if ( !g_pDwmState )
    goto LABEL_47;
  v6 = 0LL;
  v29 = 0LL;
  DisplayDC = 0LL;
  v8 = *(HDC *)(gpDispInfo + 24LL);
  v9 = (HDC)ghdcMem;
  v10 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
  v36 = v8;
  v35 = (HDC)ghdcMem;
  if ( v10 == (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_39;
  do
  {
    if ( v10 )
      v11 = (char *)v10 - 24;
    else
      v11 = 0LL;
    v12 = *((_QWORD *)v11 + 16);
    if ( (*((_DWORD *)v11 + 18) & 0x400000) != 0 )
    {
      v10 = (struct DwmState *)*((_QWORD *)v11 + 3);
      GreDeleteSprite(a1, 0LL, *(HSPRITE *)v11, 1);
      continue;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*((_QWORD *)v11 + 5), v37, v4, v5) )
    {
      v10 = (struct DwmState *)*((_QWORD *)v11 + 3);
      continue;
    }
    if ( GdiCreateSprite(a1, *((HWND *)v11 + 5), (struct tagRECT *)(v11 + 56)) )
    {
      v17 = *(_QWORD *)(v12 + 192);
      v3 = 1;
      if ( v17 )
      {
        v29 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v12, v13);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v12, a1, 0LL);
LABEL_15:
        if ( *((_QWORD *)v11 + 9) == v38[1] && *((_DWORD *)v11 + 20) == LODWORD(v38[2]) )
        {
          *((_DWORD *)v11 + 18) = 4;
          *((_DWORD *)v11 + 19) = 16711680;
        }
        if ( v17 )
        {
          v18 = *(_DWORD *)(v12 + 256);
          if ( (v18 & 1) != 0 )
          {
            GdiHintSpriteShape(a1, *((HWND *)v11 + 5), *(HBITMAP *)(v17 + 8), (v18 >> 8) & 1, 1);
            GdiUpdateSprite(
              a1,
              *((HWND *)v11 + 5),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *((_DWORD *)v11 + 20),
              (struct _BLENDFUNCTION *)v11 + 19,
              *((_DWORD *)v11 + 18) | 0x20000000,
              0LL);
          }
          else
          {
            if ( !DisplayDC )
            {
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
              if ( !DisplayDC )
                DisplayDC = v36;
            }
            if ( v6 || (v6 = (HDC)GreCreateDisplayDC(a1, 1LL)) != 0LL || (v6 = v35) != 0LL )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v29 + 28) |= 0x4000000u;
                v19 = GreSelectBitmap(v6, *(_QWORD *)(v17 + 8));
                if ( v19 )
                {
                  v20 = *((_DWORD *)v11 + 14);
                  v21 = (HWND)*((_QWORD *)v11 + 5);
                  v22 = *((_DWORD *)v11 + 18) | 0x20000000;
                  v30.y = 0;
                  v30.x = 0;
                  v32.x = v20;
                  v32.y = *((_DWORD *)v11 + 15);
                  v31 = *(struct tagSIZE *)(v17 + 32);
                  GdiUpdateSprite(
                    a1,
                    v21,
                    0LL,
                    DisplayDC,
                    &v32,
                    &v31,
                    v6,
                    &v30,
                    *((_DWORD *)v11 + 20),
                    (struct _BLENDFUNCTION *)v11 + 19,
                    v22,
                    0LL);
                  GreSelectBitmap(v6, v19);
                }
                v3 = 1;
              }
            }
          }
        }
        else
        {
          v23 = *((_DWORD *)v11 + 14);
          v33 = 0LL;
          v27 = *((_DWORD *)v11 + 18) | 0x20000000;
          v34.x = v23;
          v34.y = *((_DWORD *)v11 + 15);
          GdiUpdateSprite(
            a1,
            *((HWND *)v11 + 5),
            0LL,
            0LL,
            &v34,
            &v33,
            0LL,
            0LL,
            *((_DWORD *)v11 + 20),
            (struct _BLENDFUNCTION *)v11 + 19,
            v27,
            0LL);
        }
        if ( v17 )
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v12, (HSURF *)v29);
        goto LABEL_36;
      }
      if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(*((_QWORD *)v11 + 5), (__int64)v13, v15, v16) )
        goto LABEL_15;
    }
    else
    {
      v3 = 0;
    }
LABEL_36:
    v10 = (struct DwmState *)*((_QWORD *)v11 + 3);
    v24 = *(HSPRITE *)v11;
    v25 = (void *)UserReferenceDwmApiPort(v14);
    DwmAsyncDestroySprite(v25, (__int64)v24);
    vspDestroyDwmSpriteObjInternal(a1, 0, (struct DWMSPRITE *)v11);
  }
  while ( v10 != (struct DwmState *)((char *)g_pDwmState + 80) );
  v9 = v35;
  v8 = v36;
LABEL_39:
  if ( ((_DWORD)a1[14] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)v38);
  if ( v6 && v6 != v9 )
    GreDeleteDC(v6);
  if ( DisplayDC && DisplayDC != v8 )
    GreDeleteDC(DisplayDC);
LABEL_47:
  LEAVE_GRE_DWM_CRIT((__int64)a1, v28);
  return v3;
}
