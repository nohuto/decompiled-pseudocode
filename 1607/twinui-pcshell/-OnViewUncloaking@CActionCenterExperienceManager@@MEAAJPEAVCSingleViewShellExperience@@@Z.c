/*
 * XREFs of ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180013760
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180013668 (-SetZBand@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18001862C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18001CF4C (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z @ 0x180026FB4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewUncloaking(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v4; // rdi
  int v5; // eax
  HSTRING v6; // rcx
  HRESULT v7; // eax
  const WCHAR *StringRawBuffer; // rax
  const char *v9; // r9
  LSTATUS ValueW; // eax
  signed int v11; // ecx
  BOOL v12; // edi
  LANGID ThreadUILanguage; // ax
  int v14; // esi
  bool v15; // al
  unsigned int v16; // esi
  bool v17; // cf
  DWORD v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  INT32 result; // [rsp+60h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp+10h] BYREF

  v4 = ExperienceManagerUtils::WindowFromViewWrapper(
         a2[4],
         (struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *)a2);
  v5 = CActionCenterExperienceManager::SetZBand((__int64)this - 96, *((_DWORD *)this + 62));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5D0,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = (HSTRING)*((_QWORD *)this + 43);
  result = 0;
  v7 = WindowsCompareStringOrdinal(v6, 0LL, &result);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    JUMPOUT(0x180013998LL);
  }
  if ( result )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 43), 0LL);
    if ( !SetWindowTextW(v4, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x5D4,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        v9);
  }
  if ( *((_DWORD *)this + 62) )
  {
    v20 = CSingleViewShellExperience::ShowBorder((char *)this + 16, 0LL, 0LL);
    if ( v20 >= 0 )
      goto LABEL_27;
    v21 = 1515LL;
    goto LABEL_26;
  }
  result = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"EnableTransparency",
             0x10u,
             0LL,
             &result,
             &pcbData);
  v11 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v11 = ValueW;
  v12 = v11 < 0 || result;
  ThreadUILanguage = GetThreadUILanguage();
  v14 = 0;
  if ( GetLocaleInfoW(ThreadUILanguage, 0x20000070u, (LPWSTR)&pcbData, 2) > 0 )
    LOBYTE(v14) = pcbData == 1;
  v15 = v14 != 0;
  v16 = !v12;
  if ( v12 )
    v16 = 3;
  v17 = v15;
  v18 = `IsPPIEdition'::`2'::s_dwProductType;
  v19 = v17 ? 4 : 1;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v18 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v18 == 119 )
    v19 |= 2u;
  v20 = CSingleViewShellExperience::ShowBorder((char *)this + 16, v19, v16);
  if ( v20 < 0 )
  {
    v21 = 1511LL;
LABEL_26:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
  }
LABEL_27:
  v22 = CExperienceManagerAnimationHelper::Begin((char *)this + 256, a2[4], 2097194LL);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5EE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
  return 0LL;
}
