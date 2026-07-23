/*
 * XREFs of PipGetRegistrySecurityWithFallback @ 0x1404D3FA4
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404D3B60 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1403F5F04 (RtlValidRelativeSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E72F8 (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall PipGetRegistrySecurityWithFallback(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  bool v8; // di
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  int v11; // esi
  int InstallerClassRegProp; // eax
  int v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+30h] BYREF

  v14 = 0;
  v15 = 0LL;
  LODWORD(NumberOfBytes) = 128;
  v8 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E657050u);
  if ( !PoolWithTag )
    return 0LL;
  DeviceRegProp = CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    a2,
                    a3,
                    24,
                    (__int64)&v14,
                    (__int64)PoolWithTag,
                    (__int64)&NumberOfBytes,
                    0);
  if ( DeviceRegProp == -1073741789 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E657050u);
    if ( !PoolWithTag )
      return 0LL;
    DeviceRegProp = CmGetDeviceRegProp(
                      PiPnpRtlCtx,
                      a2,
                      a3,
                      24,
                      (__int64)&v14,
                      (__int64)PoolWithTag,
                      (__int64)&NumberOfBytes,
                      0);
  }
  if ( DeviceRegProp >= 0
    && v14 == 3
    && RtlValidRelativeSecurityDescriptor(PoolWithTag, NumberOfBytes, 0)
    && (int)SeCaptureSecurityDescriptor((__int64)PoolWithTag, 0, PagedPool, 1, &v15) >= 0 )
  {
    v8 = 1;
  }
  else
  {
    v11 = a5;
    if ( a5 )
    {
      InstallerClassRegProp = CmGetInstallerClassRegProp(
                                PiPnpRtlCtx,
                                a4,
                                a5,
                                24,
                                (__int64)&v14,
                                (__int64)PoolWithTag,
                                (__int64)&NumberOfBytes);
      if ( InstallerClassRegProp == -1073741789 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E657050u);
        if ( !PoolWithTag )
          return 0LL;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  PiPnpRtlCtx,
                                  a4,
                                  v11,
                                  24,
                                  (__int64)&v14,
                                  (__int64)PoolWithTag,
                                  (__int64)&NumberOfBytes);
      }
      if ( InstallerClassRegProp >= 0 && v14 == 3 )
      {
        if ( RtlValidRelativeSecurityDescriptor(PoolWithTag, NumberOfBytes, 0) )
          v8 = (int)SeCaptureSecurityDescriptor((__int64)PoolWithTag, 0, PagedPool, 1, &v15) >= 0;
      }
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !v8 )
    return 0LL;
  return v15;
}
