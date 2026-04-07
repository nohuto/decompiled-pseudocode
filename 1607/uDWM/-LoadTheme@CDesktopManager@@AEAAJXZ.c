/*
 * XREFs of ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180046314
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001DDE0 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180042AF4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180045B84 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x1800484FC (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800488C4 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
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
  int v19; // r9d
  signed int v20; // eax
  signed int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  signed int v24; // eax
  unsigned int piVal; // [rsp+20h] [rbp-238h]
  WCHAR pszThemeFileName[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v2, &UdwmLoadTheme_Start);
  if ( (dword_1800B7F3C & 1) == 0 )
  {
    dword_1800B7E54 = -2147024864;
    dword_1800B7F3C |= 1u;
  }
  SetLastError(0);
  v3 = OpenThemeData(0LL, L"DWMWindow");
  *((_QWORD *)this + 181) = v3;
  if ( !v3 )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    piVal = 480;
    goto LABEL_33;
  }
  SetLastError(0);
  v4 = OpenThemeData(0LL, L"DWMTouch");
  *((_QWORD *)this + 183) = v4;
  if ( !v4 )
  {
    v20 = GetLastError();
    v9 = v20;
    if ( v20 > 0 )
      v9 = (unsigned __int16)v20 | 0x80070000;
    piVal = 481;
    goto LABEL_33;
  }
  SetLastError(0);
  v5 = OpenThemeData(0LL, L"DWMPen");
  *((_QWORD *)this + 184) = v5;
  if ( !v5 )
  {
    v21 = GetLastError();
    v9 = v21;
    if ( v21 > 0 )
      v9 = (unsigned __int16)v21 | 0x80070000;
    piVal = 482;
    goto LABEL_33;
  }
  SetLastError(0);
  v6 = OpenThemeData(0LL, L"Animations");
  *((_QWORD *)this + 185) = v6;
  if ( !v6 )
  {
    v22 = GetLastError();
    v9 = v22;
    if ( v22 > 0 )
      v9 = (unsigned __int16)v22 | 0x80070000;
    piVal = 484;
    goto LABEL_33;
  }
  SetLastError(0);
  v7 = OpenThemeData(0LL, L"TimingFunction");
  *((_QWORD *)this + 186) = v7;
  if ( !v7 )
  {
    v23 = GetLastError();
    v9 = v23;
    if ( v23 > 0 )
      v9 = (unsigned __int16)v23 | 0x80070000;
    piVal = 485;
    goto LABEL_33;
  }
  CurrentThemeName = GetCurrentThemeName(pszThemeFileName, 260, 0LL, 0, 0LL, 0);
  v9 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 488;
LABEL_39:
    v19 = CurrentThemeName;
    goto LABEL_41;
  }
  SetLastError(0);
  Library = LoadLibraryExW(pszThemeFileName, 0LL, 2u);
  *((_QWORD *)this + 182) = Library;
  if ( !Library )
  {
    v24 = GetLastError();
    v9 = v24;
    if ( v24 > 0 )
      v9 = (unsigned __int16)v24 | 0x80070000;
    piVal = 489;
LABEL_33:
    if ( v9 >= 0 )
      v9 = -2003304445;
    goto LABEL_37;
  }
  v11 = CharLowerW(pszThemeFileName);
  *((_BYTE *)this + 24) = wcsstr(v11, L"aero.msstyles") != 0LL;
  IsHighContrastMode = CDesktopManager::IsHighContrastMode();
  *((_BYTE *)this + 25) = IsHighContrastMode;
  if ( IsHighContrastMode )
  {
    *((_DWORD *)this + 349) = GetSysColor(2);
    *((_DWORD *)this + 350) = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 350) = 0;
    *((_DWORD *)this + 349) = 0;
  }
  CurrentThemeName = CTopLevelWindow::EnsureImages(*((struct IDwmChannel **)this + 4));
  v9 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 509;
    goto LABEL_39;
  }
  Theme = (void *)CDesktopManager::GetTheme(0);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 58,
                                 0x12u,
                                 0LL,
                                 (__int64)&CWindowIconic::s_rgpBitmapPendingImages);
  v9 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x320u);
  if ( v9 >= 0 )
  {
    ThemeInt = GetThemeInt(*((HTHEME *)this + 181), 0, 0, 2431, (int *)this + 332);
    v9 = ThemeInt;
    if ( ThemeInt < 0 )
    {
      piVal = 513;
      v19 = ThemeInt;
      goto LABEL_41;
    }
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 181), 46, 1, 2431, (int *)this + 333);
    v9 = CurrentThemeName;
    if ( CurrentThemeName < 0 )
    {
      piVal = 514;
    }
    else
    {
      CurrentThemeName = GetThemeInt(*((HTHEME *)this + 181), 46, 3, 2431, (int *)this + 334);
      v9 = CurrentThemeName;
      if ( CurrentThemeName >= 0 )
      {
        if ( GetSystemMetrics(95) > 0 )
          CContactManager::ForceAtlasInitialize(v16, 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_24;
      }
      piVal = 515;
    }
    goto LABEL_39;
  }
  piVal = 510;
LABEL_37:
  v19 = v9;
LABEL_41:
  MilInstrumentationCheckHR(0x14u, &dword_1800B7E54, 1u, v19, piVal);
LABEL_24:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v16, &UdwmLoadTheme_End);
  if ( v9 < 0 )
  {
    if ( *((_BYTE *)this + 23) )
    {
      v9 = -2003302654;
      MilInstrumentationCheckHR(0x14u, &dword_1800B7E54, 1u, -2003302654, 0x212u);
    }
  }
  return (unsigned int)v9;
}
