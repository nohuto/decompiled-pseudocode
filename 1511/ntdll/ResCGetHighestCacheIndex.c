/*
 * XREFs of ResCGetHighestCacheIndex @ 0x1800FA4F0
 * Callers:
 *     ResCKeGetCacheIndices @ 0x1800F70EC (ResCKeGetCacheIndices.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1800970B0 (_wcsnicmp.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800F8464 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _ResFindClose @ 0x1800F98D4 (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x1800F997C (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x1800F9D78 (_ResFindNextFileW.c)
 *     _ResGetFileAttributesW @ 0x1800FA0C8 (_ResGetFileAttributesW.c)
 *     ResCGetName @ 0x1800FA76C (ResCGetName.c)
 */

__int64 __fastcall ResCGetHighestCacheIndex(__int64 a1)
{
  __int64 v3; // rdx
  int v4; // ebx
  __int64 FirstFile; // rdi
  int v6; // ecx
  char *v7; // rdx
  int v8; // r8d
  int v9; // eax
  _BYTE v10[44]; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t String1[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  char v12; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR DosFileName[264]; // [rsp+280h] [rbp+180h] BYREF
  wchar_t Buffer[264]; // [rsp+490h] [rbp+390h] BYREF

  if ( !a1 || !(unsigned int)ResCGetName(a1, 1281LL, DosFileName) )
    return 0xFFFFFFFFLL;
  v4 = -1;
  FirstFile = ResFindFirstFileExW(DosFileName, v3, (__int64)v10);
  while ( FirstFile != -1 )
  {
    if ( (v10[0] & 0x10) != 0
      && !wcsnicmp(String1, L"rc", 2uLL)
      && (unsigned int)ResCGetName(String1, 260LL, DosFileName)
      && (int)StringCchPrintfW(Buffer, 0x103uLL, L"%s\\%s", a1, DosFileName) >= 0
      && (unsigned int)ResGetFileAttributesW(Buffer) != -1 )
    {
      v6 = 0;
      v7 = &v12;
      v8 = 2;
      while ( *(_WORD *)v7 )
      {
        if ( (unsigned __int16)(*(_WORD *)v7 - 48) > 9u )
        {
          v6 = -1;
          break;
        }
        v9 = *(unsigned __int16 *)v7;
        ++v8;
        v7 += 2;
        v6 = v9 + 2 * (5 * v6 - 24);
        if ( v8 >= 260 )
          break;
      }
      if ( v6 > v4 )
        v4 = v6;
    }
    if ( !(unsigned int)ResFindNextFileW(FirstFile, (__int64)v10) )
    {
      ResFindClose((_RTL_CRITICAL_SECTION *)FirstFile);
      FirstFile = -1LL;
    }
  }
  return (unsigned int)v4;
}
