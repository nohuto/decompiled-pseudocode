/*
 * XREFs of _CmGetDeviceSoftwareKey @ 0x1404AF568
 * Callers:
 *     _CmGetDeviceSoftwareKeyPath @ 0x1404AF46C (_CmGetDeviceSoftwareKeyPath.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404DE0A0 (_CmOpenInstallerClassRegKey.c)
 *     _CmSetDeviceRegProp @ 0x1404EE690 (_CmSetDeviceRegProp.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405177F8 (_CmCreateOrdinalInstanceKey.c)
 *     _PnpCtxRegDeleteKey @ 0x140692804 (_PnpCtxRegDeleteKey.c)
 */

__int64 __fastcall CmGetDeviceSoftwareKey(__int64 a1, __int64 a2, wchar_t *a3, __int64 a4, char a5)
{
  int DeviceRegProp; // ebx
  int v10; // eax
  int v11; // [rsp+40h] [rbp-71h] BYREF
  int v12; // [rsp+44h] [rbp-6Dh] BYREF
  HANDLE v13; // [rsp+48h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v16[24]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v17[76]; // [rsp+80h] [rbp-31h] BYREF
  __int16 v18; // [rsp+CCh] [rbp+1Bh]

  v12 = 88;
  v13 = 0LL;
  Handle = 0LL;
  v11 = 0;
  DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0LL, 10, (__int64)&v11, (__int64)a3, (__int64)&v12);
  if ( DeviceRegProp == -1073741275 )
  {
    if ( a5 != 1
      || (v12 = 78,
          v11 = 0,
          v10 = CmGetDeviceRegProp(a1, a2, 0LL, 9, (__int64)&v11, (__int64)v17, (__int64)&v12),
          DeviceRegProp = v10,
          v10 == -1073741275) )
    {
      DeviceRegProp = -1073741772;
    }
    else if ( v10 >= 0 )
    {
      v18 = 0;
      DeviceRegProp = CmOpenInstallerClassRegKey(a1, (unsigned int)v17, 32, 0, 131103, 0, (__int64)&v13, 0LL);
      if ( DeviceRegProp >= 0 )
      {
        DeviceRegProp = CmCreateOrdinalInstanceKey(a1, v13, v16);
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = RtlStringCchPrintfExW(a3, 0x2CuLL, 0LL, 0LL, 0x800u, L"%s\\%s", v17, v16);
          if ( DeviceRegProp >= 0 )
          {
            DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a3);
            if ( DeviceRegProp >= 0 )
            {
              DeviceRegProp = CmSetDeviceRegProp(
                                a1,
                                a2,
                                0,
                                10,
                                1,
                                (__int64)DestinationString.Buffer,
                                DestinationString.MaximumLength,
                                0);
              if ( DeviceRegProp < 0 )
                PnpCtxRegDeleteKey(a1, v13, v16);
            }
          }
        }
        if ( Handle )
          ZwClose(Handle);
      }
    }
  }
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)DeviceRegProp;
}
