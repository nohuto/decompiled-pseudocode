/*
 * XREFs of ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18000D174
 * Callers:
 *     _lambda_4b060b54f37235af20e8475ff87a5fa2_::operator() @ 0x18000EF94 (_lambda_4b060b54f37235af20e8475ff87a5fa2_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000256C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800025A0 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180008320 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?GetPlacementEventStoreRegKey@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x18000D0E8 (-GetPlacementEventStoreRegKey@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180013BBC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
        CreativeFramework::CreativeEventStore *this,
        const unsigned __int16 *a2,
        unsigned __int16 **a3,
        __int64 a4)
{
  unsigned int v5; // r15d
  int PlacementEventStoreRegKey; // eax
  WCHAR *v7; // rbx
  int v8; // r14d
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  bool v11; // di
  LSTATUS v12; // eax
  unsigned int Key; // eax
  unsigned int v14; // eax
  WCHAR *v15; // rsi
  struct _FILETIME v16; // r12
  int v17; // eax
  bool v18; // r15
  LPVOID v19; // rdi
  LSTATUS ValueW; // eax
  void *v21; // rcx
  int v22; // eax
  _WORD *v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // eax
  LPCWSTR lpSubKey; // [rsp+50h] [rbp-30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-28h] BYREF
  struct _FILETIME v31; // [rsp+60h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-18h] BYREF
  __int64 v33; // [rsp+70h] [rbp-10h]
  __int64 v34; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v37; // [rsp+D0h] [rbp+50h]

  v37 = (unsigned int)a3;
  lpSubKey = 0LL;
  v5 = (unsigned int)a3;
  PlacementEventStoreRegKey = CreativeFramework::CreativeEventStore::GetPlacementEventStoreRegKey(
                                this,
                                (unsigned __int16 *)&lpSubKey,
                                a3);
  v7 = (WCHAR *)lpSubKey;
  v8 = PlacementEventStoreRegKey;
  if ( PlacementEventStoreRegKey < 0 )
  {
    v9 = (unsigned int)PlacementEventStoreRegKey;
    v10 = 72LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v10,
      (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
      (const char *)v9);
    goto LABEL_72;
  }
  lpSubKey = 0LL;
  v11 = 0;
  v12 = RegOpenKeyExW(HKEY_CURRENT_USER, v7, 0, 0x20019u, (PHKEY)&lpSubKey);
  v8 = (unsigned __int16)v12 | 0x80070000;
  if ( v12 <= 0 )
    v8 = v12;
  if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147024894 )
  {
    v11 = v8 >= 0;
    if ( lpSubKey )
      RegCloseKey((HKEY)lpSubKey);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x7E,
      (__int64)"shell\\contentdeliverymanager\\utils\\inc\\contentdeliverymanagersettings.h",
      (const char *)(unsigned int)v8,
      (__int64)"RegKey: %ws",
      (const char *)v7);
    if ( lpSubKey )
      RegCloseKey((HKEY)lpSubKey);
  }
  if ( v8 < 0 )
  {
    v10 = 75LL;
LABEL_28:
    v9 = (unsigned int)v8;
    goto LABEL_29;
  }
  if ( !v11 )
  {
    lpSubKey = 0LL;
    Key = RegCreateKeyExW(HKEY_CURRENT_USER, v7, 0, 0LL, 0, 0x20019u, 0LL, (PHKEY)&lpSubKey, 0LL);
    if ( Key )
    {
      v8 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0xA1,
             (__int64)"shell\\contentdeliverymanager\\utils\\inc\\contentdeliverymanagersettings.h",
             (const char *)Key,
             (__int64)"RegKey: %ws",
             (const char *)v7);
      if ( lpSubKey )
        RegCloseKey((HKEY)lpSubKey);
    }
    else
    {
      if ( lpSubKey )
        RegCloseKey((HKEY)lpSubKey);
      v8 = 0;
    }
    if ( v8 < 0 )
    {
      v10 = 78LL;
      goto LABEL_28;
    }
    LODWORD(lpSubKey) = 0;
    v14 = RegSetKeyValueW(HKEY_CURRENT_USER, v7, 0LL, 4u, &lpSubKey, 4u);
    if ( v14 )
      v8 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x48,
             (__int64)"shell\\contentdeliverymanager\\utils\\inc\\contentdeliverymanagersettings.h",
             (const char *)v14,
             (__int64)"RegKey: %ws %ws",
             (const char *)v7,
             &unk_18002D640);
    else
      v8 = 0;
    if ( v8 < 0 )
    {
      v10 = 83LL;
      goto LABEL_28;
    }
  }
  v15 = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v16 = SystemTimeAsFileTime;
  pv = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          &pv,
          L"%llu",
          SystemTimeAsFileTime);
  v8 = v17;
  if ( v17 >= 0 )
  {
    LODWORD(lpSubKey) = 0;
    v18 = 0;
    v19 = pv;
    ValueW = RegGetValueW(HKEY_CURRENT_USER, v7, (LPCWSTR)pv, 2u, 0LL, 0LL, (LPDWORD)&lpSubKey);
    v8 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v8 = ValueW;
    if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147024894 )
    {
      v18 = v8 >= 0;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x90,
        (__int64)"shell\\contentdeliverymanager\\utils\\inc\\contentdeliverymanagersettings.h",
        (const char *)(unsigned int)v8,
        (__int64)"RegKey: %ws %ws",
        (const char *)v7,
        v19);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        52LL,
        (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
        (const char *)(unsigned int)v8);
      if ( !v19 )
      {
LABEL_50:
        v5 = v37;
        goto LABEL_51;
      }
      v21 = v19;
LABEL_42:
      CoTaskMemFree(v21);
      goto LABEL_50;
    }
    if ( v18 )
    {
      do
        GetSystemTimeAsFileTime(&v31);
      while ( v16 == v31 );
      v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              &pv,
              L"%llu");
      v8 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          61LL,
          (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
          (const char *)(unsigned int)v22);
        v21 = pv;
        if ( !pv )
          goto LABEL_50;
        goto LABEL_42;
      }
      v19 = pv;
    }
    v15 = (WCHAR *)v19;
    v8 = 0;
    goto LABEL_50;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    49LL,
    (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
    (const char *)(unsigned int)v17);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_51:
  if ( v8 >= 0 )
  {
    pv = 0LL;
    v33 = 0LL;
    v23 = 0LL;
    v34 = 0LL;
    v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            &pv,
            L"%d,%ws,%ws",
            v5,
            a4,
            a2);
    v8 = v24;
    if ( v24 >= 0 )
    {
      v23 = pv;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        26LL,
        (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
        (const char *)(unsigned int)v24);
      if ( pv )
        CoTaskMemFree(pv);
    }
    if ( v8 >= 0 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( v23[v26] );
      v27 = RegSetKeyValueW(HKEY_CURRENT_USER, v7, v15, 1u, v23, 2 * v26 + 2);
      if ( v27 )
        v8 = wil::details::in1diag3::Return_Win32Msg(
               retaddr,
               (void *)0x75,
               (__int64)"shell\\contentdeliverymanager\\utils\\inc\\contentdeliverymanagersettings.h",
               (const char *)v27,
               (__int64)"RegKey: %ws %ws",
               (const char *)v7,
               v15);
      else
        v8 = 0;
      if ( v8 >= 0 )
      {
        v8 = 0;
LABEL_68:
        if ( v23 )
          CoTaskMemFree(v23);
        goto LABEL_70;
      }
      v25 = 98LL;
    }
    else
    {
      v25 = 93LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v25,
      (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
      (const char *)(unsigned int)v8);
    goto LABEL_68;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    87LL,
    (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
    (const char *)(unsigned int)v8);
LABEL_70:
  if ( v15 )
    CoTaskMemFree(v15);
LABEL_72:
  if ( v7 )
    CoTaskMemFree(v7);
  return (unsigned int)v8;
}
