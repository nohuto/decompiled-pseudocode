/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x140513264
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140489514 (PiDcHandleCustomDeviceEvent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14050FABC (PiDcUpdateDeviceContainerMembership.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8A6C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcscmp @ 0x14014F524 (wcscmp.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmIsDeviceInContainer @ 0x140513338 (_CmIsDeviceInContainer.c)
 *     _CmValidateDeviceContainerName @ 0x14051383C (_CmValidateDeviceContainerName.c)
 *     _PnpCtxRegEnumKey @ 0x1406D7228 (_PnpCtxRegEnumKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(__int64 *a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  unsigned int v4; // edi
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  char v15; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v16[7]; // [rsp+41h] [rbp-60h] BYREF
  __int64 v17; // [rsp+48h] [rbp-59h] BYREF
  int v18[4]; // [rsp+50h] [rbp-51h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-41h] BYREF

  v4 = 0;
  v17 = 0LL;
  v16[0] = 0;
  v15 = 0;
  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &v17);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = CmIsDeviceInContainer(
                                 (_DWORD)a1,
                                 v17,
                                 (_DWORD)a3,
                                 (_DWORD)a3,
                                 a2,
                                 (__int64)v16,
                                 (__int64)&v15);
        if ( CachedContextBaseKey >= 0 && !v15 )
        {
          while ( 1 )
          {
            v18[0] = 39;
            v12 = PnpCtxRegEnumKey(v10, v17, v4, pszSrc, v18);
            CachedContextBaseKey = v12;
            if ( v12 == -2147483622 )
              break;
            if ( v12 != -1073741789 )
            {
              if ( v12 < 0 )
                return (unsigned int)CachedContextBaseKey;
              v14 = CmValidateDeviceContainerName(v10, pszSrc, v13);
              CachedContextBaseKey = v14;
              if ( v14 != -1073741773 )
              {
                if ( v14 < 0 )
                  return (unsigned int)CachedContextBaseKey;
                CachedContextBaseKey = CmIsDeviceInContainer(
                                         (_DWORD)a1,
                                         v17,
                                         (unsigned int)pszSrc,
                                         (_DWORD)a3,
                                         a2,
                                         (__int64)v16,
                                         (__int64)&v15);
                if ( CachedContextBaseKey < 0 )
                  return (unsigned int)CachedContextBaseKey;
                if ( v16[0] )
                  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, pszSrc);
                if ( CachedContextBaseKey < 0 || v15 )
                  return (unsigned int)CachedContextBaseKey;
              }
            }
            ++v4;
          }
          return 0;
        }
      }
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
