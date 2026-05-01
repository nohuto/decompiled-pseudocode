/*
 * XREFs of ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18001C220
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800102D4 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180008F78 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x18001BD40 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::AddTestAumid(struct EventRegistrationToken *this, HSTRING string)
{
  int v2; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  HSTRING *v9; // rbx
  HRESULT v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = dword_18004CBC8;
  if ( !dword_18004CBC8 )
  {
    v14 = 0;
    SHRegGetBOOL(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
      L"PrereleaseExperience",
      &v14);
    v2 = 2 - (v14 != 0);
    dword_18004CBC8 = v2;
  }
  if ( v2 == 1 )
  {
    if ( this[25].value )
    {
      v5 = -2147023654;
      v6 = 313LL;
      v7 = 2147943642LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)v7);
      return v5;
    }
    v9 = (HSTRING *)&this[24];
    if ( !string || string != *v9 )
    {
      WindowsDeleteString(*v9);
      *v9 = 0LL;
      v10 = WindowsDuplicateString(string, (HSTRING *)&this[24]);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13A,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
    }
    v12 = CSingleViewShellExperience::RegisterAumid((CSingleViewShellExperience *)this, *v9, this + 25);
    v5 = v12;
    if ( v12 < 0 )
    {
      v7 = (unsigned int)v12;
      v6 = 315LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
