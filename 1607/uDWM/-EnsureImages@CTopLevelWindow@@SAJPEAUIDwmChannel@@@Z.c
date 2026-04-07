/*
 * XREFs of ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800488C4
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180046314 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18004191C (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180042A08 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180042BB0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180048C38 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180049A20 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180049C10 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureImages(struct IDwmChannel *a1)
{
  unsigned int v1; // ebx
  void *Theme; // rdi
  void *v4; // r14
  void *v5; // r15
  HINSTANCE v6; // rbp
  int NCAreaHelper; // eax
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int iPropId; // [rsp+20h] [rbp-58h]
  struct CBitmapSource *v17; // [rsp+40h] [rbp-38h] BYREF
  MARGINS pMargins; // [rsp+48h] [rbp-30h] BYREF

  v1 = 0;
  if ( dword_1800B7E88 )
    return v1;
  Theme = (void *)CDesktopManager::GetTheme(0);
  v4 = (void *)CDesktopManager::GetTheme(1);
  v5 = (void *)CDesktopManager::GetTheme(2);
  v6 = (HINSTANCE)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 182);
  NCAreaHelper = CTopLevelWindow::EnsureWindowFrames();
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 436;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NCAreaHelper, iPropId);
    return v1;
  }
  NCAreaHelper = CBitmapSource::Create(v6, Theme, v8, a1, &CTopLevelWindow::s_pbsNonClientAtlas);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 444;
    goto LABEL_21;
  }
  NCAreaHelper = CBitmapSource::Create(v6, v4, v9, a1, &CTopLevelWindow::s_pbsTouchAtlas);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 452;
    goto LABEL_21;
  }
  NCAreaHelper = CBitmapSource::Create(v6, v5, v10, a1, &CTopLevelWindow::s_pbsPenAtlas);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 460;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800A3550,
                   &dword_1800A3480,
                   *(struct CTopLevelWindow::WindowFrame **)CTopLevelWindow::s_rgpwfWindowFrames,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 507;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800A34F0,
                   &dword_1800A3548,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 24));
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 551;
    goto LABEL_21;
  }
  CTopLevelWindow::ReadSystemColors();
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800A3490,
                   &dword_1800A3480,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 40));
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 592;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::CreateGlyphsFromAtlas(Theme);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 595;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(Theme, 45, 1u, &pMargins, (struct tagRECT **)&v17);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 601;
    goto LABEL_21;
  }
  NCAreaHelper = GetThemeMargins(Theme, 0LL, 45, 0, 3602, 0LL, &pMargins);
  v11 = 0LL;
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 606;
    goto LABEL_21;
  }
  v12 = (volatile signed __int32 *)v17;
  v13 = 6LL;
  *((MARGINS *)v17 + 3) = pMargins;
  do
  {
    v14 = *(_QWORD *)(v11 + CTopLevelWindow::s_rgpwfWindowFrames);
    if ( v14 )
    {
      *(_QWORD *)(v14 + 1856) = v12;
      _InterlockedIncrement(v12 + 2);
      *(_DWORD *)(*(_QWORD *)(v11 + CTopLevelWindow::s_rgpwfWindowFrames) + 1884LL) = 0;
      v12 = (volatile signed __int32 *)v17;
    }
    v11 += 8LL;
    --v13;
  }
  while ( v13 );
  CBaseObject::Release((CBaseObject *)v12);
  return v1;
}
