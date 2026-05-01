/*
 * XREFs of ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x18002D6EC
 * Callers:
 *     ?_LoadOrientationPreference@CImmersiveWindowFactory@@AEAAJXZ @ 0x18002BC54 (-_LoadOrientationPreference@CImmersiveWindowFactory@@AEAAJXZ.c)
 * Callees:
 *     ?CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z @ 0x18002D588 (-CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z.c)
 *     CoTaskMemFree_0 @ 0x18002F5C2 (CoTaskMemFree_0.c)
 */

__int64 __fastcall CallerIdentity::GetStateRegKey(CallerIdentity *this, HKEY a2, const unsigned __int16 *a3, HKEY *a4)
{
  int v6; // edi
  signed int LastError; // eax
  IMalloc *v8; // rcx
  signed int v9; // eax
  LSTATUS v10; // eax
  LSTATUS v11; // eax
  LSTATUS Key; // eax
  HKEY v13; // rcx
  HKEY v14; // rcx
  HKEY v16; // [rsp+50h] [rbp-10h] BYREF
  HKEY hKey; // [rsp+98h] [rbp+38h] BYREF
  unsigned __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  LPCWSTR lpSubKey; // [rsp+A8h] [rbp+48h] BYREF

  hKey = a2;
  *a4 = 0LL;
  LODWORD(v18) = 0;
  if ( (unsigned int)GetSystemAppDataKey(this, 0LL, 0LL, &v18) )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( v6 >= 0 )
      v6 = -2147467259;
    if ( v6 == -2147024774 && (_DWORD)v18 )
    {
      lpSubKey = 0LL;
      CoTaskMemFree_0(0LL);
      v6 = CoAllocStringLen(v8, (unsigned int)v18, (unsigned __int16 **)&lpSubKey);
      if ( v6 >= 0 )
      {
        hKey = 0LL;
        if ( (unsigned int)GetSystemAppDataKey(this, &hKey, lpSubKey, &v18) )
        {
          if ( L"SplashScreen" )
          {
            v16 = 0LL;
            v11 = RegOpenKeyExW(hKey, lpSubKey, 0, 0x2001Fu, &v16);
            v6 = (unsigned __int16)v11 | 0x80070000;
            if ( v11 <= 0 )
              v6 = v11;
            if ( v6 >= 0 )
            {
              Key = RegCreateKeyExW(v16, L"SplashScreen", 0, 0LL, 0, 0x20019u, 0LL, a4, 0LL);
              v6 = (unsigned __int16)Key | 0x80070000;
              if ( Key <= 0 )
                v6 = Key;
            }
            v13 = v16;
            v16 = 0LL;
            if ( v13 )
              RegCloseKey(v13);
          }
          else
          {
            v10 = RegOpenKeyExW(hKey, lpSubKey, 0, 0x20019u, a4);
            v6 = (unsigned __int16)v10 | 0x80070000;
            if ( v10 <= 0 )
              v6 = v10;
          }
        }
        else
        {
          v9 = GetLastError();
          v6 = (unsigned __int16)v9 | 0x80070000;
          if ( v9 <= 0 )
            v6 = v9;
          if ( v6 >= 0 )
            v6 = -2147467259;
        }
        v14 = hKey;
        hKey = 0LL;
        if ( v14 )
          RegCloseKey(v14);
      }
      CoTaskMemFree_0((LPVOID)lpSubKey);
    }
  }
  return (unsigned int)v6;
}
