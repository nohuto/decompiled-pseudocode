/*
 * XREFs of ?CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z @ 0x18004FF0C
 * Callers:
 *     ?OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z @ 0x18001CA50 (-OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180051B58 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180053190 (-Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180053208 (-Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::CreateEnergyNotificationServer(
        AppEnergyUsageManager *this,
        struct IEnergyNotificationServer **a2)
{
  HMODULE v3; // rbx
  HRESULT v4; // eax
  unsigned int v5; // edi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  HMODULE LibraryW; // rax
  const char *v9; // r9
  FARPROC ProcAddress; // rdi
  signed int LastError; // eax
  unsigned int v12; // eax
  unsigned int LastErrorPreRelease; // eax
  struct IEnergyNotificationServer *v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v18; // [rsp+30h] [rbp+8h]
  struct IEnergyNotificationServer *v19; // [rsp+40h] [rbp+18h] BYREF

  v19 = 0LL;
  v3 = 0LL;
  v18 = 0;
  v4 = CoInitializeEx(0LL, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 663LL;
LABEL_9:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v7,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v6,
      v16);
    goto LABEL_15;
  }
  v18 = 1;
  LibraryW = LoadLibraryW(L"SrumAPI.dll");
  if ( !LibraryW )
  {
    LastErrorPreRelease = wil::details::in1diag3::Return_GetLastErrorPreRelease(
                            retaddr,
                            (void *)0x29C,
                            (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
                            v9);
LABEL_14:
    v5 = LastErrorPreRelease;
    goto LABEL_15;
  }
  v3 = LibraryW;
  ProcAddress = GetProcAddress(LibraryW, "SruCreateEnergyNotificationServer");
  if ( ProcAddress )
  {
    Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v19);
    v12 = ((__int64 (__fastcall *)(struct IEnergyNotificationServer **))ProcAddress)(&v19);
    if ( !v12 )
    {
      v14 = v19;
      v19 = 0LL;
      v5 = 0;
      *a2 = v14;
      goto LABEL_15;
    }
    LastErrorPreRelease = wil::details::in1diag3::Return_Win32PreRelease(
                            retaddr,
                            (void *)0x2A1,
                            (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
                            (const char *)v12,
                            v16);
    goto LABEL_14;
  }
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = v5;
    v7 = 671LL;
    goto LABEL_9;
  }
LABEL_15:
  if ( v18 )
    CoUninitialize();
  if ( v3 )
    FreeLibrary(v3);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v19);
  return v5;
}
