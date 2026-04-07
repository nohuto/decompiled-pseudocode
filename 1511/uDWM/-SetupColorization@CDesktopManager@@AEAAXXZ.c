/*
 * XREFs of ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180044AA8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021020 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003FBC0 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180044644 (-ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CDesktopManager::SetupColorization(CDesktopManager *this)
{
  char *v1; // r14
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-49h] BYREF
  int v7; // [rsp+24h] [rbp-45h] BYREF
  int v8; // [rsp+28h] [rbp-41h] BYREF
  int v9; // [rsp+2Ch] [rbp-3Dh] BYREF
  _QWORD v10[14]; // [rsp+30h] [rbp-39h] BYREF

  v1 = (char *)this + 1380;
  *((_DWORD *)this + 346) = 0;
  *((_DWORD *)this + 348) = 0;
  *((_DWORD *)this + 351) = 0;
  *((_DWORD *)this + 345) = -12542210;
  *((_DWORD *)this + 347) = 27;
  *((_DWORD *)this + 349) = 73;
  *((_DWORD *)this + 350) = 1;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPolicy(2u) )
    goto LABEL_14;
  v10[1] = v1;
  v10[0] = L"ColorizationColor";
  v10[2] = L"ColorizationColorBalance";
  v10[3] = (char *)this + 1388;
  v10[4] = L"ColorizationAfterglow";
  v10[5] = (char *)this + 1384;
  v10[6] = L"ColorizationAfterglowBalance";
  v10[7] = (char *)this + 1392;
  v10[8] = L"ColorizationBlurBalance";
  v10[9] = (char *)this + 1396;
  v10[10] = L"EnableWindowColorization";
  v10[11] = (char *)this + 1400;
  v10[12] = L"ColorizationGlassAttribute";
  v10[13] = (char *)this + 1404;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 7)
                                                                + 32LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
         0LL,
         v10,
         7LL) < 0 )
  {
LABEL_14:
    if ( (unsigned __int8)CDesktopManager::CheckAnyPolicy(4u) )
    {
      v8 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 7))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
        L"DefaultColorizationColorAlpha",
        &v8);
      v7 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 7))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
        L"DefaultColorizationColorRed",
        &v7);
      v9 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 7))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
        L"DefaultColorizationColorGreen",
        &v9);
      v6 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 7))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
        L"DefaultColorizationColorBlue",
        &v6);
      *((_DWORD *)v1 + 1) = 0;
      *((_DWORD *)v1 + 3) = 0;
      *((_DWORD *)v1 + 6) = 0;
      v3 = 100 * v8;
      v4 = v7 | 0xFFFFFF00;
      *(_DWORD *)v1 = -12542210;
      v5 = v6 | ((v9 | (v4 << 8)) << 8);
      *((_DWORD *)v1 + 2) = 27;
      *((_DWORD *)v1 + 4) = 73;
      *((_DWORD *)v1 + 5) = 1;
      *(_DWORD *)v1 = v5;
      *((_DWORD *)this + 347) = v3 / 0xFF;
      *((_DWORD *)this + 349) = 100 - v3 / 0xFF;
    }
  }
  if ( *((_DWORD *)this + 347) > 0x64u )
    *((_DWORD *)this + 347) = 27;
  if ( *((_DWORD *)this + 348) > 0x64u )
    *((_DWORD *)this + 348) = 0;
  if ( *((_DWORD *)this + 349) > 0x64u )
    *((_DWORD *)this + 349) = 73;
  CDesktopManager::ApplyColorizationParameters(this, (const struct CGlassColorizationParameters *)v1);
}
