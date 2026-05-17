/*
 * XREFs of ResCGetHighestCacheIndex @ 0x180104E9C
 * Callers:
 *     ResCKeGetCacheIndices @ 0x1800FF240 (ResCKeGetCacheIndices.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x180098480 (_wcsnicmp.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180102DF8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _ResFindClose @ 0x18010426C (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x180104314 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x180104724 (_ResFindNextFileW.c)
 *     _ResGetFileAttributesW @ 0x180104A74 (_ResGetFileAttributesW.c)
 *     ResCGetName @ 0x180105118 (ResCGetName.c)
 */

__int64 __fastcall ResCGetHighestCacheIndex(__int64 a1)
{
  __int64 v3; // rdx
  int v4; // ebx
  unsigned __int64 FirstFile; // rdi
  int v6; // ecx
  char *v7; // rdx
  int v8; // r8d
  int v9; // eax
  _BYTE v10[44]; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t String1[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  char v12; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[264]; // [rsp+280h] [rbp+180h] BYREF
  wchar_t Buffer[264]; // [rsp+490h] [rbp+390h] BYREF

  if ( !a1 || !(unsigned int)ResCGetName(a1, 1281LL, SourceString) )
    return 0xFFFFFFFFLL;
  v4 = -1;
  FirstFile = ResFindFirstFileExW(SourceString, v3, (__int64)v10);
  while ( FirstFile != -1LL )
  {
    if ( (v10[0] & 0x10) != 0
      && !wcsnicmp(String1, L"rc", 2uLL)
      && (unsigned int)ResCGetName(String1, 260LL, SourceString)
      && (int)StringCchPrintfW(Buffer, 0x103uLL, L"%s\\%s", a1, SourceString) >= 0
      && (unsigned int)ResGetFileAttributesW((int)Buffer) != -1 )
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
    if ( !(unsigned int)ResFindNextFileW((_QWORD *)FirstFile, (__int64)v10) )
    {
      ResFindClose(FirstFile);
      FirstFile = -1LL;
    }
  }
  return (unsigned int)v4;
}
