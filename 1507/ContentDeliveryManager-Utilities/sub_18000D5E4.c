/*
 * XREFs of sub_18000D5E4 @ 0x18000D5E4
 * Callers:
 *     sub_18001F020 @ 0x18001F020 (sub_18001F020.c)
 * Callees:
 *     sub_180002568 @ 0x180002568 (sub_180002568.c)
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_180008728 @ 0x180008728 (sub_180008728.c)
 *     sub_18000D558 @ 0x18000D558 (sub_18000D558.c)
 *     sub_1800137FC @ 0x1800137FC (sub_1800137FC.c)
 */

__int64 __fastcall sub_18000D5E4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // r15d
  int v6; // eax
  WCHAR *v7; // rsi
  int v8; // r14d
  int v9; // r9d
  int v10; // edx
  bool v11; // bl
  LSTATUS v12; // eax
  unsigned int Key; // eax
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  WCHAR *v17; // rdi
  struct _FILETIME v18; // r12
  int v19; // eax
  bool v20; // r15
  LPVOID v21; // rbx
  LSTATUS ValueW; // eax
  void *v23; // rcx
  int v24; // eax
  _WORD *v25; // rbx
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // r8
  LPCWSTR lpSubKey; // [rsp+50h] [rbp-30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-28h] BYREF
  struct _FILETIME v34; // [rsp+60h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-18h] BYREF
  __int64 v36; // [rsp+70h] [rbp-10h]
  __int64 v37; // [rsp+78h] [rbp-8h]
  __int64 retaddr; // [rsp+B8h] [rbp+38h]

  lpSubKey = 0LL;
  v5 = a3;
  v6 = sub_18000D558(a1, &lpSubKey);
  v7 = (WCHAR *)lpSubKey;
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = v6;
    v10 = 72;
LABEL_29:
    sub_180002568(retaddr, v10, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h", v9);
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
    sub_1800025D0(
      retaddr,
      114,
      (__int64)"shell\\contentdeliverymanager\\utils\\inc\\contentdeliverymanagersettings.h",
      v8);
    if ( lpSubKey )
      RegCloseKey((HKEY)lpSubKey);
  }
  if ( v8 < 0 )
  {
    v10 = 75;
LABEL_28:
    v9 = v8;
    goto LABEL_29;
  }
  if ( !v11 )
  {
    lpSubKey = 0LL;
    Key = RegCreateKeyExW(HKEY_CURRENT_USER, v7, 0, 0LL, 0, 0x20019u, 0LL, (PHKEY)&lpSubKey, 0LL);
    if ( Key )
    {
      v8 = sub_180008728(retaddr, 148, v14, Key);
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
      v10 = 78;
      goto LABEL_28;
    }
    LODWORD(lpSubKey) = 0;
    v15 = RegSetKeyValueW(HKEY_CURRENT_USER, v7, 0LL, 4u, &lpSubKey, 4u);
    if ( v15 )
      v8 = sub_180008728(retaddr, 62, v16, v15);
    else
      v8 = 0;
    if ( v8 < 0 )
    {
      v10 = 83;
      goto LABEL_28;
    }
  }
  v17 = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v18 = SystemTimeAsFileTime;
  pv = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v19 = sub_1800137FC(&pv, L"%llu", SystemTimeAsFileTime);
  v8 = v19;
  if ( v19 >= 0 )
  {
    LODWORD(lpSubKey) = 0;
    v20 = 0;
    v21 = pv;
    ValueW = RegGetValueW(HKEY_CURRENT_USER, v7, (LPCWSTR)pv, 2u, 0LL, 0LL, (LPDWORD)&lpSubKey);
    v8 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v8 = ValueW;
    if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147024894 )
    {
      v20 = v8 >= 0;
      v8 = 0;
    }
    else
    {
      sub_1800025D0(
        retaddr,
        132,
        (__int64)"shell\\contentdeliverymanager\\utils\\inc\\contentdeliverymanagersettings.h",
        v8);
    }
    if ( v8 < 0 )
    {
      sub_180002568(retaddr, 52, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h", v8);
      if ( !v21 )
      {
LABEL_50:
        v5 = a3;
        goto LABEL_51;
      }
      v23 = v21;
LABEL_42:
      CoTaskMemFree(v23);
      goto LABEL_50;
    }
    if ( v20 )
    {
      do
        GetSystemTimeAsFileTime(&v34);
      while ( v18 == v34 );
      v24 = sub_1800137FC(&pv, L"%llu");
      v8 = v24;
      if ( v24 < 0 )
      {
        sub_180002568(retaddr, 61, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h", v24);
        v23 = pv;
        if ( !pv )
          goto LABEL_50;
        goto LABEL_42;
      }
      v21 = pv;
    }
    v17 = (WCHAR *)v21;
    v8 = 0;
    goto LABEL_50;
  }
  sub_180002568(retaddr, 49, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h", v19);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_51:
  if ( v8 >= 0 )
  {
    pv = 0LL;
    v36 = 0LL;
    v25 = 0LL;
    v37 = 0LL;
    v26 = sub_1800137FC(&pv, L"%d,%ws,%ws", v5, a4, a2);
    v8 = v26;
    if ( v26 >= 0 )
    {
      v25 = pv;
      v8 = 0;
    }
    else
    {
      sub_1800025D0(retaddr, 26, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h", v26);
      if ( pv )
        CoTaskMemFree(pv);
    }
    if ( v8 >= 0 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( v25[v28] );
      v29 = RegSetKeyValueW(HKEY_CURRENT_USER, v7, v17, 1u, v25, 2 * v28 + 2);
      if ( v29 )
        v8 = sub_180008728(retaddr, 105, v30, v29);
      else
        v8 = 0;
      if ( v8 >= 0 )
      {
        v8 = 0;
LABEL_68:
        if ( v25 )
          CoTaskMemFree(v25);
        goto LABEL_70;
      }
      v27 = 98;
    }
    else
    {
      v27 = 93;
    }
    sub_180002568(retaddr, v27, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h", v8);
    goto LABEL_68;
  }
  sub_180002568(retaddr, 87, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h", v8);
LABEL_70:
  if ( v17 )
    CoTaskMemFree(v17);
LABEL_72:
  if ( v7 )
    CoTaskMemFree(v7);
  return (unsigned int)v8;
}
