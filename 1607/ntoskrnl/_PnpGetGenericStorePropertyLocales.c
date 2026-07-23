/*
 * XREFs of _PnpGetGenericStorePropertyLocales @ 0x1406DC644
 * Callers:
 *     PiDqPnPGetObjectPropertyLocales @ 0x140632278 (PiDqPnPGetObjectPropertyLocales.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1406DB764 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegEnumValue @ 0x1404B90C0 (_PnpCtxRegEnumValue.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall PnpGetGenericStorePropertyLocales(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        unsigned int cchDest,
        unsigned int *a6)
{
  wchar_t *v6; // r12
  NTSTATUS v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  ULONG v11; // r14d
  int v12; // eax
  __int64 v13; // rdi
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-E8h]
  __int64 v16; // [rsp+90h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-78h] BYREF
  __int64 *v18; // [rsp+A0h] [rbp-70h]
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-60h] BYREF
  wchar_t pszSrc[88]; // [rsp+110h] [rbp+0h] BYREF

  v6 = a4;
  v16 = a2;
  v18 = a1;
  *a6 = 0;
  if ( cchDest )
    *a4 = 0;
  v7 = RtlStringCchPrintfExW(
         pszDest,
         0x30uLL,
         0LL,
         0LL,
         0x800u,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX");
  if ( v7 >= 0 )
  {
    v8 = PnpOpenPropertiesKey(v18, v16, pszDest, 1, 0, (__int64)pszFormat, &Handle);
    v7 = v8;
    if ( v8 == -1073741772 )
    {
      return 0;
    }
    else if ( v8 >= 0 )
    {
      v10 = cchDest;
      v11 = 0;
      while ( 1 )
      {
        do
        {
          LODWORD(v16) = 85;
          v12 = PnpCtxRegEnumValue(v9, Handle, v11++, pszSrc, (__int64)&v16, 0LL, 0LL, 0);
        }
        while ( v12 == -1073741789 );
        if ( v12 )
          break;
        v9 = pszSrc[0];
        if ( pszSrc[0] )
        {
          v13 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v13 < v10 )
          {
            RtlStringCchCopyExW(v6, v10, pszSrc, 0LL, 0LL, 0x900u);
            v10 -= v13;
            v6 += v13;
          }
          *a6 += v13;
        }
      }
      ZwClose(Handle);
      ++*a6;
      if ( v6 && cchDest >= *a6 )
        *v6 = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v7;
}
