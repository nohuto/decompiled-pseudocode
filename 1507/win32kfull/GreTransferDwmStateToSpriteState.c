/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C012BAD0
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C012B95C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 * Callees:
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C000AAFC (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C000C644 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C000C8EC (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     GreDeleteSprite @ 0x1C000CBEC (GreDeleteSprite.c)
 *     DwmAsyncDestroySprite @ 0x1C000CC54 (DwmAsyncDestroySprite.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0011838 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C0011870 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00118C0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C012C3D0 (UserIsWindowOnDesktopAndComposed.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0261F20 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C026C634 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C026CCBC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026D818 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C02739C0 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(HDEV a1, __int64 a2)
{
  unsigned int v3; // r13d
  HDC v4; // r12
  HDC DisplayDC; // r15
  HDC v6; // rbx
  HDC v7; // r10
  struct DwmState *v8; // r14
  char *v9; // rdi
  __int64 v10; // r14
  HLSURF v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // r9d
  __int64 v15; // r13
  LONG v16; // eax
  HWND v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rbx
  void *v20; // rax
  unsigned int v22; // [rsp+48h] [rbp-59h]
  unsigned int v23; // [rsp+58h] [rbp-49h]
  int v24; // [rsp+6Ch] [rbp-35h] BYREF
  struct SURFACE *v25; // [rsp+70h] [rbp-31h]
  struct tagSIZE v26; // [rsp+78h] [rbp-29h] BYREF
  HDC v27; // [rsp+80h] [rbp-21h]
  struct tagSIZE v28; // [rsp+88h] [rbp-19h] BYREF
  HDC v29; // [rsp+90h] [rbp-11h]
  struct tagPOINT v30; // [rsp+98h] [rbp-9h] BYREF
  struct tagPOINT v31; // [rsp+A0h] [rbp-1h] BYREF
  struct tagPOINT v32; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+Fh]
  _QWORD v34[3]; // [rsp+B8h] [rbp+17h] BYREF

  memset(&v34[1], 0, 12);
  v33 = a2;
  v3 = 1;
  v34[0] = a1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v24);
  if ( !g_pDwmState )
    goto LABEL_47;
  v4 = 0LL;
  v25 = 0LL;
  DisplayDC = 0LL;
  v6 = *(HDC *)(gpDispInfo + 24LL);
  v7 = (HDC)ghdcMem;
  v8 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
  v29 = v6;
  v27 = (HDC)ghdcMem;
  if ( v8 == (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_39;
  do
  {
    if ( v8 )
      v9 = (char *)v8 - 24;
    else
      v9 = 0LL;
    v10 = *((_QWORD *)v9 + 16);
    if ( (*((_DWORD *)v9 + 18) & 0x400000) != 0 )
    {
      v8 = (struct DwmState *)*((_QWORD *)v9 + 3);
      GreDeleteSprite(a1, 0LL, *(void **)v9, 1);
      continue;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*((_QWORD *)v9 + 5), v33) )
    {
      v8 = (struct DwmState *)*((_QWORD *)v9 + 3);
      continue;
    }
    if ( GdiCreateSprite(a1, *((HWND *)v9 + 5), (struct tagRECT *)(v9 + 56)) )
    {
      v13 = *(_QWORD *)(v10 + 192);
      v3 = 1;
      if ( v13 )
      {
        v25 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v10, v11);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v10, a1, 0LL);
LABEL_15:
        if ( *((_QWORD *)v9 + 9) == v34[1] && *((_DWORD *)v9 + 20) == LODWORD(v34[2]) )
        {
          *((_DWORD *)v9 + 18) = 4;
          *((_DWORD *)v9 + 19) = 16711680;
        }
        if ( v13 )
        {
          v14 = *(_DWORD *)(v10 + 256);
          if ( (v14 & 1) != 0 )
          {
            GdiHintSpriteShape(a1, *((HWND *)v9 + 5), *(HBITMAP *)(v13 + 8), (v14 >> 8) & 1, 1);
            GdiUpdateSprite(
              a1,
              *((HWND *)v9 + 5),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *((_DWORD *)v9 + 20),
              (struct _BLENDFUNCTION *)v9 + 19,
              *((_DWORD *)v9 + 18) | 0x20000000,
              0LL);
          }
          else
          {
            if ( !DisplayDC )
            {
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
              if ( !DisplayDC )
                DisplayDC = v29;
            }
            if ( v4 || (v4 = (HDC)GreCreateDisplayDC(a1, 1LL)) != 0LL || (v4 = v27) != 0LL )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v25 + 28) |= 0x4000000u;
                v15 = GreSelectBitmap(v4, *(_QWORD *)(v13 + 8));
                if ( v15 )
                {
                  v16 = *((_DWORD *)v9 + 14);
                  v17 = (HWND)*((_QWORD *)v9 + 5);
                  v18 = *((_DWORD *)v9 + 18) | 0x20000000;
                  v30.y = 0;
                  v30.x = 0;
                  v31.x = v16;
                  v31.y = *((_DWORD *)v9 + 15);
                  v28 = *(struct tagSIZE *)(v13 + 32);
                  GdiUpdateSprite(
                    a1,
                    v17,
                    0LL,
                    DisplayDC,
                    &v31,
                    &v28,
                    v4,
                    &v30,
                    *((_DWORD *)v9 + 20),
                    (struct _BLENDFUNCTION *)v9 + 19,
                    v18,
                    0LL);
                  GreSelectBitmap(v4, v15);
                }
                v3 = 1;
              }
            }
          }
        }
        else
        {
          v23 = *((_DWORD *)v9 + 18) | 0x20000000;
          v32 = (struct tagPOINT)*((_QWORD *)v9 + 7);
          v22 = *((_DWORD *)v9 + 20);
          v26 = 0LL;
          GdiUpdateSprite(
            a1,
            *((HWND *)v9 + 5),
            0LL,
            0LL,
            &v32,
            &v26,
            0LL,
            0LL,
            v22,
            (struct _BLENDFUNCTION *)v9 + 19,
            v23,
            0LL);
        }
        if ( v13 )
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v10, (HSURF *)v25);
        goto LABEL_36;
      }
      if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(*((_QWORD *)v9 + 5), (__int64)v11) )
        goto LABEL_15;
    }
    else
    {
      v3 = 0;
    }
LABEL_36:
    v8 = (struct DwmState *)*((_QWORD *)v9 + 3);
    v19 = *(_QWORD *)v9;
    v20 = (void *)UserReferenceDwmApiPort(v12);
    DwmAsyncDestroySprite(v20, v19);
    vspDestroyDwmSpriteObjInternal(a1, 0, (struct DWMSPRITE *)v9);
  }
  while ( v8 != (struct DwmState *)((char *)g_pDwmState + 80) );
  v7 = v27;
  v6 = v29;
LABEL_39:
  if ( ((_DWORD)a1[14] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)v34);
  if ( v4 && v4 != v7 )
    GreDeleteDC(v4);
  if ( DisplayDC && DisplayDC != v6 )
    GreDeleteDC(DisplayDC);
LABEL_47:
  LEAVE_GRE_DWM_CRIT((__int64)a1, v24);
  return v3;
}
