/*
 * XREFs of ?EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z @ 0x1800476D8
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180044C50 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180036768 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18003EE34 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180041188 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180041320 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180047A4C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180048824 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180048A30 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureImages(struct MIL_CHANNEL__ *const a1)
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
  if ( dword_1800BE698 )
    return v1;
  Theme = (void *)CDesktopManager::GetTheme(0);
  v4 = (void *)CDesktopManager::GetTheme(1);
  v5 = (void *)CDesktopManager::GetTheme(2);
  v6 = (HINSTANCE)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 184);
  NCAreaHelper = CTopLevelWindow::EnsureWindowFrames();
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 523;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, NCAreaHelper, iPropId);
    return v1;
  }
  NCAreaHelper = CBitmapSource::Create(v6, Theme, v8, a1, &CTopLevelWindow::s_pbsNonClientAtlas);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 531;
    goto LABEL_28;
  }
  NCAreaHelper = CBitmapSource::Create(v6, v4, v9, a1, &CTopLevelWindow::s_pbsTouchAtlas);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 539;
    goto LABEL_28;
  }
  NCAreaHelper = CBitmapSource::Create(v6, v5, v10, a1, &CTopLevelWindow::s_pbsPenAtlas);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 547;
    goto LABEL_28;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800A4D20,
                   &dword_1800A4C50,
                   *(struct CTopLevelWindow::WindowFrame **)CTopLevelWindow::s_rgpwfWindowFrames,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 596;
    goto LABEL_28;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800A4CC0,
                   &dword_1800A4D18,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 24));
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 640;
    goto LABEL_28;
  }
  CTopLevelWindow::ReadSystemColors();
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800A4C60,
                   &dword_1800A4C50,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 40));
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 681;
    goto LABEL_28;
  }
  NCAreaHelper = CTopLevelWindow::CreateGlyphsFromAtlas(Theme);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 684;
    goto LABEL_28;
  }
  NCAreaHelper = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(Theme, 46, 1u, &pMargins, (struct tagRECT **)&v17);
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 690;
    goto LABEL_28;
  }
  NCAreaHelper = GetThemeMargins(Theme, 0LL, 46, 0, 3602, 0LL, &pMargins);
  v11 = 0LL;
  v1 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 695;
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
      *(_QWORD *)(v14 + 1848) = v12;
      _InterlockedIncrement(v12 + 2);
      *(_DWORD *)(*(_QWORD *)(v11 + CTopLevelWindow::s_rgpwfWindowFrames) + 1876LL) = 0;
      v12 = (volatile signed __int32 *)v17;
    }
    v11 += 8LL;
    --v13;
  }
  while ( v13 );
  CBaseObject::Release((CBaseObject *)v12);
  return v1;
}
