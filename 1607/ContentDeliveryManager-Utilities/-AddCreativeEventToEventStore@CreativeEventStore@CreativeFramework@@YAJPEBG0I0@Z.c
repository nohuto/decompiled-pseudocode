/*
 * XREFs of ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18001E538
 * Callers:
 *     _lambda_3824f3ba179c9c834d671447a577c27a_::operator() @ 0x18001FDE8 (_lambda_3824f3ba179c9c834d671447a577c27a_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002C2C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18001B708 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180024744 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
        CreativeFramework::CreativeEventStore *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  unsigned int v5; // r12d
  WCHAR *v6; // rbx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rdx
  bool v10; // di
  LSTATUS v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  WCHAR *v14; // rsi
  unsigned __int64 v15; // r15
  int v16; // eax
  bool v17; // r12
  LPVOID v18; // rdi
  LSTATUS ValueW; // eax
  void *v20; // rcx
  int v21; // eax
  _WORD *v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // eax
  HKEY hKey; // [rsp+50h] [rbp-30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-28h] BYREF
  struct _FILETIME v30; // [rsp+60h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-18h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]
  __int64 v33; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v36; // [rsp+D0h] [rbp+50h]

  v36 = (unsigned int)a3;
  pv = 0LL;
  v32 = 0LL;
  v5 = (unsigned int)a3;
  v33 = 0LL;
  v6 = 0LL;
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         &pv,
         L"%ws\\%ws",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEvents",
         this);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v6 = (WCHAR *)pv;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
      (const char *)(unsigned int)v7);
    if ( pv )
      CoTaskMemFree(pv);
  }
  if ( v8 < 0 )
  {
    v9 = 72LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
      (const char *)(unsigned int)v8);
    goto LABEL_75;
  }
  hKey = 0LL;
  v10 = 0;
  v11 = RegOpenKeyExW(HKEY_CURRENT_USER, v6, 0, 0x20019u, &hKey);
  v8 = (unsigned __int16)v11 | 0x80070000;
  if ( v11 <= 0 )
    v8 = v11;
  if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147024894 )
  {
    v10 = v8 >= 0;
    if ( hKey )
      RegCloseKey(hKey);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xC5,
      (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
      (const char *)(unsigned int)v8,
      (__int64)"RegKey: %ws",
      (const char *)v6);
    if ( hKey )
      RegCloseKey(hKey);
  }
  if ( v8 < 0 )
  {
    v9 = 75LL;
    goto LABEL_32;
  }
  if ( !v10 )
  {
    hKey = 0LL;
    v12 = RegCreateKeyExW(HKEY_CURRENT_USER, v6, 0, 0LL, 0, 0x20019u, 0LL, &hKey, 0LL);
    if ( v12 )
    {
      v8 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0xFB,
             (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
             (const char *)v12,
             (__int64)"RegKey: %ws",
             (const char *)v6);
      if ( hKey )
        RegCloseKey(hKey);
    }
    else
    {
      if ( hKey )
        RegCloseKey(hKey);
      v8 = 0;
    }
    if ( v8 < 0 )
    {
      v9 = 78LL;
      goto LABEL_32;
    }
    LODWORD(hKey) = 0;
    v13 = RegSetKeyValueW(HKEY_CURRENT_USER, v6, 0LL, 4u, &hKey, 4u);
    if ( v13 )
      v8 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x5B,
             (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
             (const char *)v13,
             (__int64)"RegKey: %ws %ws",
             (const char *)v6,
             &sourceString);
    else
      v8 = 0;
    if ( v8 < 0 )
    {
      v9 = 83LL;
      goto LABEL_32;
    }
  }
  v14 = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v15 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  pv = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          &pv,
          L"%llu",
          v15);
  v8 = v16;
  if ( v16 >= 0 )
  {
    LODWORD(hKey) = 0;
    v17 = 0;
    v18 = pv;
    ValueW = RegGetValueW(HKEY_CURRENT_USER, v6, (LPCWSTR)pv, 2u, 0LL, 0LL, (LPDWORD)&hKey);
    v8 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v8 = ValueW;
    if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147024894 )
    {
      v17 = v8 >= 0;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0xD7,
        (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
        (const char *)(unsigned int)v8,
        (__int64)"RegKey: %ws %ws",
        (const char *)v6,
        v18);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
        (const char *)(unsigned int)v8);
      if ( !v18 )
      {
LABEL_53:
        v5 = v36;
        goto LABEL_54;
      }
      v20 = v18;
LABEL_45:
      CoTaskMemFree(v20);
      goto LABEL_53;
    }
    if ( v17 )
    {
      do
        GetSystemTimeAsFileTime(&v30);
      while ( v15 == v30.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v30) << 32) );
      v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              &pv,
              L"%llu");
      v8 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
          (const char *)(unsigned int)v21);
        v20 = pv;
        if ( !pv )
          goto LABEL_53;
        goto LABEL_45;
      }
      v18 = pv;
    }
    v14 = (WCHAR *)v18;
    v8 = 0;
    goto LABEL_53;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
    (const char *)(unsigned int)v16);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_54:
  if ( v8 >= 0 )
  {
    pv = 0LL;
    v32 = 0LL;
    v22 = 0LL;
    v33 = 0LL;
    v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            &pv,
            L"%d,%ws,%ws",
            v5,
            a4,
            a2);
    v8 = v23;
    if ( v23 >= 0 )
    {
      v22 = pv;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
        (const char *)(unsigned int)v23);
      if ( pv )
        CoTaskMemFree(pv);
    }
    if ( v8 >= 0 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( v22[v25] );
      v26 = RegSetKeyValueW(HKEY_CURRENT_USER, v6, v14, 1u, v22, 2 * v25 + 2);
      if ( v26 )
        v8 = wil::details::in1diag3::Return_Win32Msg(
               retaddr,
               (void *)0xB7,
               (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
               (const char *)v26,
               (__int64)"RegKey: %ws %ws",
               (const char *)v6,
               v14);
      else
        v8 = 0;
      if ( v8 >= 0 )
      {
        v8 = 0;
LABEL_71:
        if ( v22 )
          CoTaskMemFree(v22);
        goto LABEL_73;
      }
      v24 = 98LL;
    }
    else
    {
      v24 = 93LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
      (const char *)(unsigned int)v8);
    goto LABEL_71;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
    (const char *)(unsigned int)v8);
LABEL_73:
  if ( v14 )
    CoTaskMemFree(v14);
LABEL_75:
  if ( v6 )
    CoTaskMemFree(v6);
  return (unsigned int)v8;
}
