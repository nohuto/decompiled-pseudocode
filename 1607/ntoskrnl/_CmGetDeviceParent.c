/*
 * XREFs of _CmGetDeviceParent @ 0x14050CB90
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14050C958 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C9A8 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceSiblings @ 0x1406DD964 (_CmGetDeviceSiblings.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     _CmIsRootDevice @ 0x14050CCF4 (_CmIsRootDevice.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x14050CD28 (_NtPlugPlayGetDeviceRelatedDevice.c)
 */

int __fastcall CmGetDeviceParent(__int64 a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  size_t v4; // rdi
  int result; // eax
  unsigned int v10; // ecx
  wchar_t *v11; // r8
  unsigned int v12; // [rsp+60h] [rbp-A0h] BYREF
  int v13; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszSrc[200]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *a4;
  v13 = 0;
  *a4 = 0;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return -1073741810;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    result = NtPlugPlayGetDeviceRelatedDevice(a1, (unsigned int)&DestinationString, 1, (unsigned int)pszSrc);
    if ( result == -1073741810 )
    {
      result = PnpGetObjectProperty(
                 a1,
                 (__int64)a2,
                 1u,
                 0LL,
                 0LL,
                 (__int64)&DEVPKEY_Device_LastKnownParent,
                 (__int64)&v13,
                 (__int64)pszSrc,
                 400,
                 (__int64)&v12,
                 0);
      v10 = v12;
      if ( result < 0 )
      {
        result = -1073741810;
      }
      else
      {
        v10 = v12 >> 1;
        v12 >>= 1;
      }
      if ( result == -1073741810 )
      {
        *a4 = 13;
        if ( (unsigned int)v4 >= 0xD )
        {
          v11 = (wchar_t *)L"HTREE\\ROOT\\0";
          return RtlStringCchCopyExW(a3, v4, v11, 0LL, 0LL, 0x900u);
        }
        return -1073741789;
      }
    }
    else
    {
      v10 = v12;
    }
    if ( result < 0 )
      return result;
    *a4 = v10;
    if ( (unsigned int)v4 >= v10 )
    {
      v11 = pszSrc;
      return RtlStringCchCopyExW(a3, v4, v11, 0LL, 0LL, 0x900u);
    }
    return -1073741789;
  }
  return result;
}
