/*
 * XREFs of _CmGetDeviceChildren @ 0x1406DD05C
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceSiblings @ 0x1406DD964 (_CmGetDeviceSiblings.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x14050CD28 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _PnpMultiSzAppend @ 0x1406E0018 (_PnpMultiSzAppend.c)
 */

int __fastcall CmGetDeviceChildren(__int64 a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  wchar_t *v5; // rdi
  unsigned int v7; // ebx
  int result; // eax
  unsigned int v9; // r14d
  size_t *pcchRemaining; // [rsp+20h] [rbp-E0h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-E0h]
  unsigned int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszSrc[200]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t pszDest[200]; // [rsp+1F0h] [rbp+F0h] BYREF

  v5 = a3;
  if ( a3 )
  {
    if ( *a4 )
      *a3 = 0;
    else
      v5 = 0LL;
  }
  else
  {
    *a4 = 0;
  }
  v7 = *a4;
  *a4 = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    result = NtPlugPlayGetDeviceRelatedDevice(
               a1,
               (__int64)&DestinationString,
               2u,
               (__int64)pszSrc,
               (__int64)pcchRemaining,
               (__int64)&v12);
    if ( result >= 0 )
    {
      if ( v12 )
      {
        v9 = v12 + 1;
        if ( v7 )
        {
          v13 = 2 * v7;
          if ( !(unsigned __int8)PnpMultiSzAppend(v5) )
          {
            v5 = 0LL;
            v7 = 0;
          }
        }
        result = RtlStringCchCopyExW(pszDest, 0xC8uLL, pszSrc, 0LL, 0LL, 0x800u);
        if ( result >= 0 )
        {
          result = RtlInitUnicodeStringEx(&DestinationString, pszDest);
          if ( result >= 0 )
          {
            while ( 1 )
            {
              result = NtPlugPlayGetDeviceRelatedDevice(
                         a1,
                         (__int64)&DestinationString,
                         3u,
                         (__int64)pszSrc,
                         (__int64)pcchRemaininga,
                         (__int64)&v12);
              if ( result == -1073741810 || !v12 )
                break;
              if ( result < 0 )
                return result;
              if ( v12 > 0xC8 )
                return -1073741811;
              if ( 2 * (unsigned __int64)(v12 - 1) >= 0x190 )
                _report_rangecheckfailure();
              v9 += v12;
              pszSrc[v12 - 1] = 0;
              if ( v7 )
              {
                v13 = 2 * v7;
                if ( !(unsigned __int8)PnpMultiSzAppend(v5) )
                {
                  v5 = 0LL;
                  v7 = 0;
                }
              }
              result = RtlStringCchCopyExW(pszDest, 0xC8uLL, pszSrc, 0LL, 0LL, 0x800u);
              if ( result < 0 )
                return result;
              result = RtlInitUnicodeStringEx(&DestinationString, pszDest);
              if ( result < 0 )
                goto LABEL_29;
            }
            result = 0;
LABEL_29:
            if ( result >= 0 )
            {
              *a4 = v9;
              if ( v7 < v9 )
                return -1073741789;
            }
          }
        }
      }
      else
      {
        return -1073741275;
      }
    }
  }
  return result;
}
