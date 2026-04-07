/*
 * XREFs of ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180044C50
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021020 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180036768 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180041274 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18004440C (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047320 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z @ 0x1800476D8 (-EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F1C0 (IsOpenThemeDataPresent.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDesktopManager::LoadTheme(CDesktopManager *this)
{
  __int64 v2; // rcx
  HTHEME v3; // rax
  HTHEME v4; // rax
  HTHEME v5; // rax
  HTHEME v6; // rax
  HTHEME v7; // rax
  HRESULT CurrentThemeName; // eax
  signed int v9; // ebx
  HMODULE Library; // rax
  const wchar_t *v11; // rax
  char IsHighContrastMode; // al
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  HRESULT ThemeInt; // eax
  CContactManager *v16; // rcx
  signed int LastError; // eax
  signed int v19; // eax
  signed int v20; // eax
  signed int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  int v24; // r9d
  unsigned int piVal; // [rsp+20h] [rbp-238h]
  WCHAR pszThemeFileName[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v2, &UdwmLoadTheme_Start);
  if ( (dword_1800BE74C & 1) == 0 )
  {
    dword_1800BE664 = -2147024864;
    dword_1800BE74C |= 1u;
  }
  SetLastError(0);
  v3 = OpenThemeData(0LL, L"DWMWindow");
  *((_QWORD *)this + 183) = v3;
  if ( !v3 )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    piVal = 510;
    if ( v9 >= 0 )
      v9 = -2003304445;
    goto LABEL_63;
  }
  SetLastError(0);
  v4 = OpenThemeData(0LL, L"DWMTouch");
  *((_QWORD *)this + 185) = v4;
  if ( !v4 )
  {
    v19 = GetLastError();
    v9 = v19;
    if ( v19 > 0 )
      v9 = (unsigned __int16)v19 | 0x80070000;
    piVal = 511;
    if ( v9 >= 0 )
      v9 = -2003304445;
    goto LABEL_63;
  }
  SetLastError(0);
  v5 = OpenThemeData(0LL, L"DWMPen");
  *((_QWORD *)this + 186) = v5;
  if ( !v5 )
  {
    v20 = GetLastError();
    v9 = v20;
    if ( v20 > 0 )
      v9 = (unsigned __int16)v20 | 0x80070000;
    piVal = 512;
    if ( v9 >= 0 )
      v9 = -2003304445;
    goto LABEL_63;
  }
  SetLastError(0);
  v6 = OpenThemeData(0LL, L"Animations");
  *((_QWORD *)this + 187) = v6;
  if ( !v6 )
  {
    v21 = GetLastError();
    v9 = v21;
    if ( v21 > 0 )
      v9 = (unsigned __int16)v21 | 0x80070000;
    piVal = 514;
    if ( v9 >= 0 )
      v9 = -2003304445;
    goto LABEL_63;
  }
  SetLastError(0);
  v7 = OpenThemeData(0LL, L"TimingFunction");
  *((_QWORD *)this + 188) = v7;
  if ( !v7 )
  {
    v22 = GetLastError();
    v9 = v22;
    if ( v22 > 0 )
      v9 = (unsigned __int16)v22 | 0x80070000;
    piVal = 515;
    if ( v9 >= 0 )
      v9 = -2003304445;
    goto LABEL_63;
  }
  CurrentThemeName = GetCurrentThemeName(pszThemeFileName, 260, 0LL, 0, 0LL, 0);
  v9 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 518;
LABEL_67:
    v24 = CurrentThemeName;
    goto LABEL_68;
  }
  SetLastError(0);
  Library = LoadLibraryExW(pszThemeFileName, 0LL, 2u);
  *((_QWORD *)this + 184) = Library;
  if ( !Library )
  {
    v23 = GetLastError();
    v9 = v23;
    if ( v23 > 0 )
      v9 = (unsigned __int16)v23 | 0x80070000;
    piVal = 519;
    if ( v9 >= 0 )
      v9 = -2003304445;
    goto LABEL_63;
  }
  v11 = CharLowerW(pszThemeFileName);
  *((_BYTE *)this + 24) = wcsstr(v11, L"aero.msstyles") != 0LL;
  IsHighContrastMode = CDesktopManager::IsHighContrastMode();
  *((_BYTE *)this + 25) = IsHighContrastMode;
  if ( IsHighContrastMode )
  {
    *((_DWORD *)this + 353) = GetSysColor(2);
    *((_DWORD *)this + 354) = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 354) = 0;
    *((_DWORD *)this + 353) = 0;
  }
  CurrentThemeName = CTopLevelWindow::EnsureImages(*((struct MIL_CHANNEL__ *const *)this + 4));
  v9 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 539;
    goto LABEL_67;
  }
  Theme = (void *)CDesktopManager::GetTheme(0);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 59,
                                 0x12u,
                                 0LL,
                                 (struct CBitmapSource ***)&CWindowIconic::s_rgpBitmapPendingImages);
  v9 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x320u);
  if ( v9 < 0 )
  {
    piVal = 540;
LABEL_63:
    v24 = v9;
LABEL_68:
    MilInstrumentationCheckHR(0x14u, &dword_1800BE664, 1LL, v24, piVal);
    goto LABEL_24;
  }
  ThemeInt = GetThemeInt(*((HTHEME *)this + 183), 0, 0, 2431, (int *)this + 336);
  v9 = ThemeInt;
  if ( ThemeInt >= 0 )
  {
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 183), 47, 1, 2431, (int *)this + 337);
    v9 = CurrentThemeName;
    if ( CurrentThemeName < 0 )
    {
      piVal = 544;
    }
    else
    {
      CurrentThemeName = GetThemeInt(*((HTHEME *)this + 183), 47, 3, 2431, (int *)this + 338);
      v9 = CurrentThemeName;
      if ( CurrentThemeName >= 0 )
      {
        if ( GetSystemMetrics(95) > 0 )
          CContactManager::ForceAtlasInitialize(v16, 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_24;
      }
      piVal = 545;
    }
    goto LABEL_67;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1800BE664, 1LL, ThemeInt, 0x21Fu);
LABEL_24:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v16, &UdwmLoadTheme_End);
  if ( v9 < 0 )
  {
    if ( *((_BYTE *)this + 23) )
    {
      v9 = -2003302654;
      MilInstrumentationCheckHR(0x14u, &dword_1800BE664, 1LL, -2003302654, 0x230u);
    }
  }
  return (unsigned int)v9;
}
