/*
 * XREFs of ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18007C9F0
 * Callers:
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18007CC40 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180010994 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800421B0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?Create@CAnimatedGlassSheet@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@_N@Z @ 0x18007B4F0 (-Create@CAnimatedGlassSheet@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@_N@Z.c)
 *     ?Create@CRippleEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18007C418 (-Create@CRippleEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::EnsureAnimationObjects(struct CAnimatedGlassSheet **this)
{
  unsigned int v2; // ebx
  struct MIL_CHANNEL__ *v3; // rsi
  int v4; // eax
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  int v7; // eax
  struct CBitmapSource *v9[12]; // [rsp+30h] [rbp-78h] BYREF

  if ( (dword_1800BD418 & 1) == 0 )
  {
    dword_1800BD36C = -2147023728;
    dword_1800BD418 |= 1u;
  }
  v2 = 0;
  v3 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  if ( *this
    || (v4 = CAnimatedGlassSheet::Create(
               *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
               this),
        v2 = v4,
        v4 >= 0) )
  {
    if ( !this[1] )
    {
      Theme = (void *)CDesktopManager::GetTheme(0);
      BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                     Theme,
                                     60,
                                     0xCu,
                                     0LL,
                                     (struct tagRECT **)v9);
      v2 = BitmapsFromAtlasImageStrip;
      if ( BitmapsFromAtlasImageStrip >= 0 )
      {
        v7 = CRippleEffect::Create(v3, v9, this + 1);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1800BD36C, 1LL, v7, 0x46u);
      }
      else if ( (_WORD)BitmapsFromAtlasImageStrip == 1168 )
      {
        return 0;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800BD36C, 1LL, BitmapsFromAtlasImageStrip, 0x40u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800BD36C, 1LL, v4, 0x2Eu);
  }
  return v2;
}
