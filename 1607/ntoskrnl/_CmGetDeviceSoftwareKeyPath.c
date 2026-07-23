/*
 * XREFs of _CmGetDeviceSoftwareKeyPath @ 0x1404B7480
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x1404E07C8 (_CmGetDeviceRegKeyPath.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404B757C (_CmGetDeviceSoftwareKey.c)
 */

int __fastcall CmGetDeviceSoftwareKeyPath(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  int result; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _WORD v17[48]; // [rsp+50h] [rbp-88h] BYREF

  result = CmGetDeviceSoftwareKey(a1, a2, v17);
  if ( result >= 0 )
  {
    if ( (a3 & 0x200) != 0 )
    {
      if ( a4 )
      {
        if ( a4 == -1 )
          return -1073741811;
        v15 = -1LL;
        do
          ++v15;
        while ( v17[v15] );
        v16 = v15 + 88;
        if ( v16 <= 0xFFFFFFFF )
        {
          if ( a8 )
            *a8 = v16;
          if ( (unsigned int)v16 <= (unsigned int)cchDest )
            return RtlStringCchPrintfExW(
                     pszDest,
                     (unsigned int)cchDest,
                     0LL,
                     0LL,
                     0x800u,
                     L"%s\\%04u\\%s\\%s",
                     L"System\\CurrentControlSet\\Hardware Profiles",
                     a4,
                     L"System\\CurrentControlSet\\Control\\Class",
                     v17);
          return -1073741789;
        }
      }
      else
      {
        v13 = -1LL;
        do
          ++v13;
        while ( v17[v13] );
        v14 = v13 + 91;
        if ( v14 <= 0xFFFFFFFF )
        {
          if ( a8 )
            *a8 = v14;
          if ( (unsigned int)v14 <= (unsigned int)cchDest )
            return RtlStringCchPrintfExW(
                     pszDest,
                     (unsigned int)cchDest,
                     0LL,
                     0LL,
                     0x800u,
                     L"%s\\%s\\%s",
                     L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                     L"System\\CurrentControlSet\\Control\\Class",
                     v17);
          return -1073741789;
        }
      }
    }
    else
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v17[v11] );
      v12 = v11 + 40;
      if ( v12 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v12;
        if ( (unsigned int)v12 <= (unsigned int)cchDest )
          return RtlStringCchPrintfExW(
                   pszDest,
                   (unsigned int)cchDest,
                   0LL,
                   0LL,
                   0x800u,
                   L"%s\\%s",
                   L"System\\CurrentControlSet\\Control\\Class",
                   v17);
        return -1073741789;
      }
    }
    return -1073741675;
  }
  return result;
}
