/*
 * XREFs of _CmGetDeviceSoftwareKey @ 0x140549A10
 * Callers:
 *     _CmGetDeviceSoftwareKeyPath @ 0x140549914 (_CmGetDeviceSoftwareKeyPath.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     _CmOpenInstallerClassRegKey @ 0x140440574 (_CmOpenInstallerClassRegKey.c)
 *     _CmSetDeviceRegProp @ 0x1404D8AB8 (_CmSetDeviceRegProp.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14058A6E4 (_CmCreateOrdinalInstanceKey.c)
 *     _PnpCtxRegDeleteKey @ 0x1407123A4 (_PnpCtxRegDeleteKey.c)
 */

__int64 __fastcall CmGetDeviceSoftwareKey(__int64 *a1, __int64 a2, wchar_t *a3, __int64 a4, char a5)
{
  int DeviceRegProp; // ebx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+40h] [rbp-71h] BYREF
  int v14; // [rsp+44h] [rbp-6Dh] BYREF
  HANDLE v15; // [rsp+48h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v18[24]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v19[76]; // [rsp+80h] [rbp-31h] BYREF
  __int16 v20; // [rsp+CCh] [rbp+1Bh]

  v14 = 88;
  v15 = 0LL;
  Handle = 0LL;
  v13 = 0;
  DeviceRegProp = CmGetDeviceRegProp((__int64)a1, a2, 0LL, 10, (__int64)&v13, (__int64)a3, (__int64)&v14);
  if ( DeviceRegProp == -1073741275 )
  {
    if ( a5 != 1
      || (v14 = 78,
          v13 = 0,
          v10 = CmGetDeviceRegProp((__int64)a1, a2, 0LL, 9, (__int64)&v13, (__int64)v19, (__int64)&v14),
          DeviceRegProp = v10,
          v10 == -1073741275) )
    {
      DeviceRegProp = -1073741772;
    }
    else if ( v10 >= 0 )
    {
      v20 = 0;
      DeviceRegProp = CmOpenInstallerClassRegKey(a1, (__int64)v19, v11, v12, 131103, 0, (__int64)&v15, 0LL);
      if ( DeviceRegProp >= 0 )
      {
        DeviceRegProp = CmCreateOrdinalInstanceKey(a1, v15, v18);
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = RtlStringCchPrintfExW(a3, 0x2CuLL, 0LL, 0LL, 0x800u, L"%s\\%s", v19, v18);
          if ( DeviceRegProp >= 0 )
          {
            DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a3);
            if ( DeviceRegProp >= 0 )
            {
              DeviceRegProp = CmSetDeviceRegProp(
                                (__int64)a1,
                                a2,
                                0LL,
                                0xAu,
                                1u,
                                (__int64)DestinationString.Buffer,
                                DestinationString.MaximumLength,
                                0);
              if ( DeviceRegProp < 0 )
                PnpCtxRegDeleteKey(a1, v15, v18);
            }
          }
        }
        if ( Handle )
          ZwClose(Handle);
      }
    }
  }
  if ( v15 )
    ZwClose(v15);
  return (unsigned int)DeviceRegProp;
}
