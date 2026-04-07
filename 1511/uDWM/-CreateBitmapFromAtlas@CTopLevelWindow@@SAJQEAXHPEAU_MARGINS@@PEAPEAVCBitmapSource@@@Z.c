/*
 * XREFs of ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047950
 * Callers:
 *     ?Initialize@CDirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180047050 (-Initialize@CDirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180047A4C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180088E90 (-Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180089E30 (-Initialize@CTouchDragVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008A870 (-Initialize@CTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008B080 (-Initialize@CPenBarrelKeyVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008B704 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008C1B0 (-Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180041578 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800484E4 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapFromAtlas(
        void *const a1,
        int iPartId,
        struct _MARGINS *pMargins,
        struct CBitmapSource **a4)
{
  HRESULT ThemeMargins; // eax
  unsigned int v9; // ebx
  HRESULT ThemeRect; // eax
  const struct CBitmapSource *AtlasImageFromTheme; // rax
  int v12; // eax
  struct tagRECT pRect; // [rsp+40h] [rbp-48h] BYREF

  if ( (dword_1800BE758 & 1) == 0 )
  {
    dword_1800BE728 = -2147023728;
    dword_1800BE758 |= 1u;
  }
  if ( pMargins
    && (ThemeMargins = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, pMargins), v9 = ThemeMargins, ThemeMargins < 0) )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800BE728, 1LL, ThemeMargins, 0x138u);
  }
  else
  {
    ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
    v9 = ThemeRect;
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800BE728, 1LL, ThemeRect, 0x13Cu);
    }
    else
    {
      InflateRect(&pRect, -1, -1);
      AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
      v12 = CBitmapSource::Create(AtlasImageFromTheme, &pRect, pMargins, a4);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1800BE728, 1LL, v12, 0x144u);
    }
  }
  return v9;
}
