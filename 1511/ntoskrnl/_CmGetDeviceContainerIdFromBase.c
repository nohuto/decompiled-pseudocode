/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x1404EEB20
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1404E218C (PiDcHandleCustomDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404ECDAC (PiDcUpdateDeviceContainerMembership.c)
 *     _CmDeleteDeviceWorker @ 0x140693A0C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcscmp @ 0x140145B88 (wcscmp.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmValidateDeviceContainerName @ 0x1404DD5D4 (_CmValidateDeviceContainerName.c)
 *     _CmIsDeviceInContainer @ 0x1404EECA8 (_CmIsDeviceInContainer.c)
 *     _PnpCtxRegEnumKey @ 0x1405186D4 (_PnpCtxRegEnumKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(_QWORD *a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  unsigned int v4; // edi
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  int v12; // eax
  int v13; // eax
  char v14; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v15[7]; // [rsp+41h] [rbp-60h] BYREF
  __int64 v16; // [rsp+48h] [rbp-59h] BYREF
  int v17[4]; // [rsp+50h] [rbp-51h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-41h] BYREF

  v4 = 0;
  v16 = 0LL;
  v15[0] = 0;
  v14 = 0;
  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &v16);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = CmIsDeviceInContainer(
                                 (_DWORD)a1,
                                 v16,
                                 (_DWORD)a3,
                                 (_DWORD)a3,
                                 a2,
                                 (__int64)v15,
                                 (__int64)&v14);
        if ( CachedContextBaseKey >= 0 && !v14 )
        {
          while ( 1 )
          {
            v17[0] = 39;
            v12 = PnpCtxRegEnumKey(v10, v16, v4, pszSrc, v17);
            CachedContextBaseKey = v12;
            if ( v12 == -2147483622 )
              break;
            if ( v12 != -1073741789 )
            {
              if ( v12 < 0 )
                return (unsigned int)CachedContextBaseKey;
              v13 = CmValidateDeviceContainerName(v10, pszSrc);
              CachedContextBaseKey = v13;
              if ( v13 != -1073741773 )
              {
                if ( v13 < 0 )
                  return (unsigned int)CachedContextBaseKey;
                CachedContextBaseKey = CmIsDeviceInContainer(
                                         (_DWORD)a1,
                                         v16,
                                         (unsigned int)pszSrc,
                                         (_DWORD)a3,
                                         a2,
                                         (__int64)v15,
                                         (__int64)&v14);
                if ( CachedContextBaseKey < 0 )
                  return (unsigned int)CachedContextBaseKey;
                if ( v15[0] )
                  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, pszSrc);
                if ( CachedContextBaseKey < 0 || v14 )
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
