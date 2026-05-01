/*
 * XREFs of RmpGetPoolSizesForDeviceTier @ 0x180023C10
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18002370C (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpGetPoolSizesForDeviceTier(__int64 a1)
{
  DWORD LastError; // ebx
  int v3; // edi
  const WCHAR **v4; // rsi
  const WCHAR *v5; // rdx
  __int64 v6; // rdi
  const WCHAR **v7; // rsi
  const WCHAR *v8; // rdx
  int v9; // eax
  DWORD cbData; // [rsp+30h] [rbp-39h] BYREF
  DWORD Type; // [rsp+34h] [rbp-35h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-31h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-29h] BYREF
  BYTE Data[4]; // [rsp+48h] [rbp-21h] BYREF
  struct _MEMORYSTATUSEX Buffer; // [rsp+50h] [rbp-19h] BYREF
  __int64 v17; // [rsp+90h] [rbp+27h] BYREF
  int v18; // [rsp+98h] [rbp+2Fh]

  hKey = 0LL;
  phkResult = 0LL;
  memset_0(&Buffer, 0, sizeof(Buffer));
  Buffer.dwLength = 64;
  if ( GlobalMemoryStatusEx(&Buffer) )
  {
    LastError = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager\\Pools", 0, 0x20019u, &hKey);
    if ( !LastError )
    {
      v3 = 2;
      v4 = (const WCHAR **)&off_18005C8C0;
      while ( 1 )
      {
        v5 = *v4;
        cbData = 4;
        LastError = RegQueryValueExW(hKey, v5, 0LL, &Type, Data, &cbData);
        if ( LastError )
          break;
        if ( Type != 4 || cbData != 4 )
        {
LABEL_20:
          LastError = 1009;
          break;
        }
        if ( Buffer.ullTotalPhys < (unsigned __int64)*(unsigned int *)Data << 20 )
        {
          --v4;
          if ( --v3 )
            continue;
        }
        LastError = RegOpenKeyExW(hKey, off_18005C8B0[v3], 0, 0x20019u, &phkResult);
        if ( !LastError )
        {
          v6 = 0LL;
          v7 = (const WCHAR **)off_18005C8D0;
          while ( 1 )
          {
            v8 = *v7;
            cbData = 4;
            LastError = RegQueryValueExW(phkResult, v8, 0LL, &Type, (LPBYTE)&v17 + 4 * v6, &cbData);
            if ( LastError )
              break;
            if ( Type != 4 || cbData != 4 )
              goto LABEL_20;
            v6 = (unsigned int)(v6 + 1);
            ++v7;
            if ( (unsigned int)v6 >= 3 )
            {
              v9 = v18;
              *(_QWORD *)a1 = v17;
              *(_DWORD *)(a1 + 8) = v9;
              goto LABEL_15;
            }
          }
        }
        break;
      }
    }
  }
  else
  {
    LastError = GetLastError();
  }
LABEL_15:
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  return LastError;
}
