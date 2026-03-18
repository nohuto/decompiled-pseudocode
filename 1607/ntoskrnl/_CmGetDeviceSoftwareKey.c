/*
 * XREFs of _CmGetDeviceSoftwareKey @ 0x1404D3ADC
 * Callers:
 *     _CmGetDeviceSoftwareKeyPath @ 0x1404D39E0 (_CmGetDeviceSoftwareKeyPath.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x1400C3A00 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     _CmSetDeviceRegProp @ 0x140489A34 (_CmSetDeviceRegProp.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404F7A60 (_CmOpenInstallerClassRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404FCE4C (_CmGetDeviceRegProp.c)
 *     _PnpCtxRegDeleteKey @ 0x1406D7080 (_PnpCtxRegDeleteKey.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406D77C4 (_CmCreateOrdinalInstanceKey.c)
 */

__int64 __fastcall CmGetDeviceSoftwareKey(__int64 a1, __int64 a2, wchar_t *a3, __int64 a4, char a5)
{
  int DeviceRegProp; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  int v14; // [rsp+40h] [rbp-71h] BYREF
  int v15; // [rsp+44h] [rbp-6Dh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-69h] BYREF
  HANDLE v17; // [rsp+50h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v19[24]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v20[76]; // [rsp+80h] [rbp-31h] BYREF
  __int16 v21; // [rsp+CCh] [rbp+1Bh]

  v14 = 88;
  Handle = 0LL;
  v17 = 0LL;
  v15 = 0;
  DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0, 10, (__int64)&v15, (__int64)a3, (__int64)&v14, 0);
  if ( DeviceRegProp == -1073741275 )
  {
    if ( a5 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 80), 1u);
      v15 = 0;
      v14 = 88;
      DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0, 10, (__int64)&v15, (__int64)a3, (__int64)&v14, 0);
      if ( DeviceRegProp == -1073741275 )
      {
        v14 = 78;
        v15 = 0;
        v11 = CmGetDeviceRegProp(a1, a2, 0, 9, (__int64)&v15, (__int64)v20, (__int64)&v14, 0);
        DeviceRegProp = v11;
        if ( v11 == -1073741275 )
        {
          DeviceRegProp = -1073741772;
        }
        else if ( v11 >= 0 )
        {
          v21 = 0;
          DeviceRegProp = CmOpenInstallerClassRegKey(a1, (unsigned int)v20, v12, v13, 131103, 0, (__int64)&Handle, 0LL);
          if ( DeviceRegProp >= 0 )
          {
            DeviceRegProp = CmCreateOrdinalInstanceKey(a1, Handle, v19);
            if ( DeviceRegProp >= 0 )
            {
              DeviceRegProp = RtlStringCchPrintfExW(a3, 0x2CuLL, 0LL, 0LL, 0x800u, L"%s\\%s", v20, v19);
              if ( DeviceRegProp >= 0 )
              {
                DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a3);
                if ( DeviceRegProp >= 0 )
                {
                  DeviceRegProp = CmSetDeviceRegProp(
                                    a1,
                                    a2,
                                    0LL,
                                    0xAu,
                                    1u,
                                    (__int64)DestinationString.Buffer,
                                    DestinationString.MaximumLength,
                                    0);
                  if ( DeviceRegProp < 0 )
                    PnpCtxRegDeleteKey(a1, Handle, v19);
                }
              }
            }
          }
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 80));
      KeLeaveCriticalRegion();
      if ( v17 )
        ZwClose(v17);
    }
    else
    {
      DeviceRegProp = -1073741772;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}
