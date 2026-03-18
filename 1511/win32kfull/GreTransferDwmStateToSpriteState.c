/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C00D3560
 * Callers:
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 * Callees:
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C007B0F8 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C007B1C8 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B218 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C007E710 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C007E830 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     GreDeleteSprite @ 0x1C007FE74 (GreDeleteSprite.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00D5B64 (UserIsWindowOnDesktopAndComposed.c)
 *     DwmAsyncDestroySprite @ 0x1C00FBF88 (DwmAsyncDestroySprite.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C0101CA4 (UserIsWindowWithNoRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C02608D0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C026B1A4 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C026B82C (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026C388 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C02729B4 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
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
  void *v19; // rax
  unsigned int v21; // [rsp+48h] [rbp-59h]
  unsigned int v22; // [rsp+58h] [rbp-49h]
  int v23; // [rsp+6Ch] [rbp-35h] BYREF
  struct SURFACE *v24; // [rsp+70h] [rbp-31h]
  struct tagSIZE v25; // [rsp+78h] [rbp-29h] BYREF
  HDC v26; // [rsp+80h] [rbp-21h]
  struct tagSIZE v27; // [rsp+88h] [rbp-19h] BYREF
  HDC v28; // [rsp+90h] [rbp-11h]
  struct tagPOINT v29; // [rsp+98h] [rbp-9h] BYREF
  struct tagPOINT v30; // [rsp+A0h] [rbp-1h] BYREF
  struct tagPOINT v31; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+Fh]
  _QWORD v33[3]; // [rsp+B8h] [rbp+17h] BYREF

  memset(&v33[1], 0, 12);
  v32 = a2;
  v3 = 1;
  v33[0] = a1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v23);
  if ( !g_pDwmState )
    goto LABEL_47;
  v4 = 0LL;
  v24 = 0LL;
  DisplayDC = 0LL;
  v6 = *(HDC *)(gpDispInfo + 24LL);
  v7 = (HDC)ghdcMem;
  v8 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
  v28 = v6;
  v26 = (HDC)ghdcMem;
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
      GreDeleteSprite(a1, 0LL, *(HSPRITE *)v9, 1);
      continue;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*((_QWORD *)v9 + 5), v32) )
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
        v24 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v10, v11);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v10, a1, 0LL);
LABEL_15:
        if ( *((_QWORD *)v9 + 9) == v33[1] && *((_DWORD *)v9 + 20) == LODWORD(v33[2]) )
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
                DisplayDC = v28;
            }
            if ( v4 || (v4 = (HDC)GreCreateDisplayDC(a1, 1LL)) != 0LL || (v4 = v26) != 0LL )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v24 + 28) |= 0x4000000u;
                v15 = GreSelectBitmap(v4, *(_QWORD *)(v13 + 8));
                if ( v15 )
                {
                  v16 = *((_DWORD *)v9 + 14);
                  v17 = (HWND)*((_QWORD *)v9 + 5);
                  v18 = *((_DWORD *)v9 + 18) | 0x20000000;
                  v29.y = 0;
                  v29.x = 0;
                  v30.x = v16;
                  v30.y = *((_DWORD *)v9 + 15);
                  v27 = *(struct tagSIZE *)(v13 + 32);
                  GdiUpdateSprite(
                    a1,
                    v17,
                    0LL,
                    DisplayDC,
                    &v30,
                    &v27,
                    v4,
                    &v29,
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
          v22 = *((_DWORD *)v9 + 18) | 0x20000000;
          v31 = (struct tagPOINT)*((_QWORD *)v9 + 7);
          v21 = *((_DWORD *)v9 + 20);
          v25 = 0LL;
          GdiUpdateSprite(
            a1,
            *((HWND *)v9 + 5),
            0LL,
            0LL,
            &v31,
            &v25,
            0LL,
            0LL,
            v21,
            (struct _BLENDFUNCTION *)v9 + 19,
            v22,
            0LL);
        }
        if ( v13 )
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v10, v24);
        goto LABEL_36;
      }
      if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(*((_QWORD *)v9 + 5)) )
        goto LABEL_15;
    }
    else
    {
      v3 = 0;
    }
LABEL_36:
    v8 = (struct DwmState *)*((_QWORD *)v9 + 3);
    v19 = (void *)UserReferenceDwmApiPort(v12);
    DwmAsyncDestroySprite(v19);
    vspDestroyDwmSpriteObjInternal(a1, 0, (struct DWMSPRITE *)v9);
  }
  while ( v8 != (struct DwmState *)((char *)g_pDwmState + 80) );
  v7 = v26;
  v6 = v28;
LABEL_39:
  if ( ((_DWORD)a1[14] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)v33);
  if ( v4 && v4 != v7 )
    GreDeleteDC(v4);
  if ( DisplayDC && DisplayDC != v6 )
    GreDeleteDC(DisplayDC);
LABEL_47:
  LEAVE_GRE_DWM_CRIT((__int64)a1, v23);
  return v3;
}
