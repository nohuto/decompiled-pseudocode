/*
 * XREFs of UsbhInstallMsOsExtendedProperties @ 0x1C0040714
 * Callers:
 *     UsbhPdoPnp_QueryResourceRequirements @ 0x1C001BA10 (UsbhPdoPnp_QueryResourceRequirements.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001E9FC (UsbhReleaseFdoPnpLock.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C001EA4C (UsbhAcquireFdoPnpLock.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     USBD_InstallExtPropDescSections @ 0x1C003F84C (USBD_InstallExtPropDescSections.c)
 *     USBD_ValidateExtendedPropertyDescriptor @ 0x1C003FF88 (USBD_ValidateExtendedPropertyDescriptor.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C004008C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C00404FC (UsbhGetMsOsFeatureDescriptor.c)
 */

LONG __fastcall UsbhInstallMsOsExtendedProperties(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  __int64 v10; // rdx
  unsigned int *PoolWithTag; // rax
  unsigned int *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r14d
  unsigned int v17; // [rsp+40h] [rbp-20h] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-18h] BYREF
  __int16 v19; // [rsp+50h] [rbp-10h]

  v17 = 0;
  v6 = PdoExt((__int64)a2, (__int64)a2, a3, a4);
  if ( (v6[356] & 0x400) != 0 )
  {
    v9 = v6[353];
    if ( (v9 & 0x800) == 0 )
    {
      v6[353] = v9 | 0x800;
      UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 11LL, 829387629LL, 1);
      if ( !UsbhExtPropDescSemaphorePresent(a2) )
      {
        NumberOfBytes = 0LL;
        v19 = 0;
        LOBYTE(v10) = 1;
        if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, v10, v7, 5LL, (__int64)&NumberOfBytes, 10, &v17) >= 0
          && v17 == 10
          && (unsigned int)NumberOfBytes >= 0xA
          && HIDWORD(NumberOfBytes) == 327936 )
        {
          if ( v19 )
          {
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                            ExDefaultNonPagedPoolType,
                                            (unsigned int)NumberOfBytes,
                                            0x42554855u);
            v12 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
              LOBYTE(v13) = 1;
              if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, v13, v14, 5LL, (__int64)v12, NumberOfBytes, &v17) >= 0 )
              {
                v15 = v17;
                if ( v17 == (_DWORD)NumberOfBytes
                  && RtlCompareMemory(&NumberOfBytes, v12, 0xAuLL) == 10
                  && (int)USBD_ValidateExtendedPropertyDescriptor(v12, v15) >= 0 )
                {
                  USBD_InstallExtPropDescSections(a2, (__int64)v12, *v12);
                }
              }
              ExFreePoolWithTag(v12, 0);
            }
          }
        }
      }
    }
  }
  return UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v7, v8);
}
