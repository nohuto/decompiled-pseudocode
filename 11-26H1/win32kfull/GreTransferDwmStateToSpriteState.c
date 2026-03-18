/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x14028A2CC
 * Callers:
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x14001D930 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x140075588 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34K.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14009D0A4 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     DwmAsyncDestroySprite @ 0x14009D21C (DwmAsyncDestroySprite.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x14009EA24 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14009EA74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x14009EBD4 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0ENTER_GRE_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@AEAVPDEVOBJ@@@Z @ 0x14009FA00 (--0ENTER_GRE_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@AEAVPDEVOBJ@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1400A5240 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x1400A8A5C (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x14018532C (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x140251E2C (UserIsWindowOnDesktopAndComposed.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x14026C9C4 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(Gre::Base *a1, __int64 a2, HDC a3)
{
  unsigned int v4; // r13d
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  Gre::Base *v6; // rcx
  Gre::Base *v7; // rcx
  struct SURFACE *v8; // r12
  HDC DisplayDC; // r15
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  HLSURF v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned int v20; // r9d
  HDC v21; // rax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rbx
  void *v27; // rax
  __int64 v28; // r8
  struct SURFACE *v30; // [rsp+60h] [rbp-A0h]
  struct tagSIZE v31; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v32; // [rsp+70h] [rbp-90h] BYREF
  Gre::Base *v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  struct tagPOINT v35; // [rsp+88h] [rbp-78h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v36; // [rsp+90h] [rbp-70h]
  _BYTE v37[112]; // [rsp+A0h] [rbp-60h] BYREF
  char v38[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v39[112]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v40[112]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v41[128]; // [rsp+200h] [rbp+100h] BYREF
  struct tagSIZE v42; // [rsp+290h] [rbp+190h] BYREF
  __int64 v43; // [rsp+298h] [rbp+198h]
  HDC v44; // [rsp+2A0h] [rbp+1A0h]
  struct tagPOINT v45; // [rsp+2A8h] [rbp+1A8h] BYREF

  v44 = a3;
  v43 = a2;
  v33 = a1;
  v34 = 0LL;
  v4 = 1;
  if ( !a1 )
  {
    GrepCaptureLiveMemoryDump(400LL, 76LL, 0LL);
    return 0LL;
  }
  v5 = Gre::Base::Globals(a1);
  ENTER_GRE_DWM_CRIT::ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v41, v5, (struct PDEVOBJ *)&v33);
  if ( !IsDwmActive(v6) )
    goto LABEL_39;
  v8 = 0LL;
  DisplayDC = 0LL;
  v30 = 0LL;
  v36 = Gre::Base::Globals(v7);
  v10 = (__int64 *)(*((_QWORD *)v36 + 28) + 80LL);
  v11 = *v10;
  while ( (__int64 *)v11 != v10 )
  {
    v12 = v11 - 24;
    v13 = -v11;
    v14 = v12 & -(__int64)(v13 != 0);
    v15 = *(_QWORD *)(v14 + 0x90);
    if ( (*(_DWORD *)(v14 + 0x48) & 0x400000) != 0 )
    {
      v11 = *(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x18);
      GreDeleteSprite(a1, 0LL, *(void **)v14, 1);
      goto LABEL_33;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x28), v43) )
    {
      v11 = *(_QWORD *)(v14 + 24);
      goto LABEL_33;
    }
    if ( GdiCreateSprite((HDEV)a1, *(HWND *)(v14 + 40), (struct _RECTL *)(v14 + 56)) )
    {
      v18 = *(_QWORD *)(v15 + 184);
      v4 = 1;
      if ( v18 )
      {
        v30 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v15, v16);
        v8 = v30;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, (HDEV)a1, 0LL);
LABEL_13:
        v19 = *(_QWORD *)(v14 + 72) - v34;
        if ( !v19 )
          v19 = *(unsigned int *)(v14 + 80) - (unsigned __int64)(unsigned int)v34;
        if ( !v19 )
        {
          *(_DWORD *)(v14 + 72) = 4;
          *(_DWORD *)(v14 + 76) = 16711680;
        }
        if ( v18 )
        {
          v20 = *(_DWORD *)(v15 + 252);
          if ( (v20 & 1) != 0 )
          {
            GdiHintSpriteShape((HDEV)a1, *(HWND *)(v14 + 40), *(HBITMAP *)(v18 + 8), (v20 >> 6) & 1, 1);
            OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v39, 0LL);
            OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v37, 0LL);
            GdiUpdateSprite(
              a1,
              *(HWND *)(v14 + 40),
              0LL,
              (struct OPTAPIDCOBJ *)v39,
              0LL,
              0LL,
              (struct OPTAPIDCOBJ *)v37,
              0LL,
              *(_DWORD *)(v14 + 80),
              (struct _BLENDFUNCTION *)(v14 + 76),
              *(_DWORD *)(v14 + 72) | 0x20000000,
              0LL);
            OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
            OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v39);
          }
          else
          {
            v45 = 0LL;
            v35 = 0LL;
            v42 = 0LL;
            if ( !DisplayDC )
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
            v21 = v44;
            if ( v44 && DisplayDC )
            {
              *((_DWORD *)v8 + 28) |= 0x4000000u;
              v22 = GreSelectBitmap(v21, *(_QWORD *)(v18 + 8));
              if ( v22 )
              {
                v45 = *(struct tagPOINT *)(v14 + 56);
                v42 = *(struct tagSIZE *)(v18 + 32);
                OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v40, DisplayDC);
                OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v37, v44);
                GdiUpdateSprite(
                  a1,
                  *(HWND *)(v14 + 40),
                  0LL,
                  (struct OPTAPIDCOBJ *)v40,
                  (struct _POINTL *)&v45,
                  &v42,
                  (struct OPTAPIDCOBJ *)v37,
                  (struct _POINTL *)&v35,
                  *(_DWORD *)(v14 + 80),
                  (struct _BLENDFUNCTION *)(v14 + 76),
                  *(_DWORD *)(v14 + 72) | 0x20000000,
                  0LL);
                if ( OPTAPIDCOBJ::bValid((OPTAPIDCOBJ *)v37, v23, v24) )
                {
                  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v39, (struct OPTAPIDCOBJ *)v37);
                  LOBYTE(v25) = 4;
                  GrepSelectBitmap(v38, v39, v22, v25);
                  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v39);
                }
                OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
                OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v40);
              }
              v8 = v30;
            }
          }
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v15, v8);
        }
        else
        {
          v32 = *(struct tagPOINT *)(v14 + 56);
          v31 = 0LL;
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v37, 0LL);
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v40, 0LL);
          GdiUpdateSprite(
            a1,
            *(HWND *)(v14 + 40),
            0LL,
            (struct OPTAPIDCOBJ *)v37,
            (struct _POINTL *)&v32,
            &v31,
            (struct OPTAPIDCOBJ *)v40,
            0LL,
            *(_DWORD *)(v14 + 80),
            (struct _BLENDFUNCTION *)(v14 + 76),
            *(_DWORD *)(v14 + 72) | 0x20000000,
            0LL);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v40);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
        }
        goto LABEL_32;
      }
      if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v14 + 40)) )
        goto LABEL_13;
    }
    else
    {
      v4 = 0;
    }
LABEL_32:
    v11 = *(_QWORD *)(v14 + 24);
    v26 = *(void **)v14;
    v27 = (void *)UserReferenceDwmApiPort(v17);
    DwmAsyncDestroySprite(v27, (__int64)v26, v28);
    vspDestroyDwmSpriteObjInternal(a1, 0LL, (struct DWMSPRITE *)v14);
LABEL_33:
    v10 = (__int64 *)(*((_QWORD *)v36 + 28) + 80LL);
  }
  if ( (*((_DWORD *)a1 + 10) & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v33);
  if ( DisplayDC )
    GreDeleteDC(DisplayDC);
LABEL_39:
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v41);
  return v4;
}
