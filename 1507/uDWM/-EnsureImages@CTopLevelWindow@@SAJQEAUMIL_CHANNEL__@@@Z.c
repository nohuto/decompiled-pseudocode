/*
 * XREFs of ?EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z @ 0x180040CF4
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003FF0C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18000882C (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180010994 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180040AE8 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180041274 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180041CB0 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800421B0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180047958 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureImages(struct MIL_CHANNEL__ *const a1)
{
  unsigned int v1; // ebx
  void *Theme; // rdi
  void *v4; // r14
  void *v5; // r15
  HINSTANCE v6; // rbp
  int NCAreaHelper; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int iPropId; // [rsp+20h] [rbp-58h]
  struct CBitmapSource *v17; // [rsp+40h] [rbp-38h] BYREF
  MARGINS pMargins; // [rsp+48h] [rbp-30h] BYREF

  v1 = 0;
  if ( dword_1800BC688 )
    return v1;
  Theme = (void *)CDesktopManager::GetTheme(0);
  v4 = (void *)CDesktopManager::GetTheme(1);
  v5 = (void *)CDesktopManager::GetTheme(2);
  v6 = (HINSTANCE)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 184);
  NCAreaHelper = CTopLevelWindow::EnsureWindowFrames();
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 485;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, NCAreaHelper, iPropId);
    return v1;
  }
  NCAreaHelper = CBitmapSource::Create(v6, Theme, v8, a1, &CTopLevelWindow::s_pbsNonClientAtlas);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 493;
    goto LABEL_28;
  }
  NCAreaHelper = CBitmapSource::Create(v6, v4, v9, a1, &CTopLevelWindow::s_pbsTouchAtlas);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 501;
    goto LABEL_28;
  }
  NCAreaHelper = CBitmapSource::Create(v6, v5, v10, a1, &CTopLevelWindow::s_pbsPenAtlas);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 509;
    goto LABEL_28;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800A0F70,
                   &dword_1800A1A80,
                   *(struct CTopLevelWindow::WindowFrame **)CTopLevelWindow::s_rgpwfWindowFrames,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 558;
    goto LABEL_28;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800A0FD0,
                   &dword_1800A10C0,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 24));
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 602;
    goto LABEL_28;
  }
  CTopLevelWindow::ReadSystemColors();
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800A0F10,
                   &dword_1800A1A80,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 40));
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 643;
    goto LABEL_28;
  }
  NCAreaHelper = CTopLevelWindow::CreateGlyphsFromAtlas(Theme);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 646;
    goto LABEL_28;
  }
  NCAreaHelper = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(Theme, 46, 1u, &pMargins, &v17);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 652;
    goto LABEL_28;
  }
  NCAreaHelper = GetThemeMargins(Theme, 0LL, 46, 0, 3602, 0LL, &pMargins);
  v11 = 0LL;
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 657;
    goto LABEL_28;
  }
  v12 = (volatile signed __int32 *)v17;
  v13 = 6LL;
  *((MARGINS *)v17 + 3) = pMargins;
  do
  {
    v14 = *(_QWORD *)(v11 + CTopLevelWindow::s_rgpwfWindowFrames);
    if ( v14 )
    {
      *(_QWORD *)(v14 + 1144) = v12;
      _InterlockedIncrement(v12 + 2);
      *(_DWORD *)(*(_QWORD *)(v11 + CTopLevelWindow::s_rgpwfWindowFrames) + 1172LL) = 0;
      v12 = (volatile signed __int32 *)v17;
    }
    v11 += 8LL;
    --v13;
  }
  while ( v13 );
  CBaseObject::Release((CBaseObject *)v12);
  return v1;
}
