/*
 * XREFs of UsbhInstallMsOsExtendedProperties @ 0x1C00403E0
 * Callers:
 *     UsbhPdoPnp_QueryResourceRequirements @ 0x1C000BA10 (UsbhPdoPnp_QueryResourceRequirements.c)
 * Callees:
 *     UsbhAcquireFdoPnpLock @ 0x1C00091F4 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     USBD_InstallExtPropDescSections @ 0x1C003F52C (USBD_InstallExtPropDescSections.c)
 *     USBD_ValidateExtendedPropertyDescriptor @ 0x1C003FC68 (USBD_ValidateExtendedPropertyDescriptor.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003FD6C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C00401C8 (UsbhGetMsOsFeatureDescriptor.c)
 */

LONG __fastcall UsbhInstallMsOsExtendedProperties(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // esi
  unsigned int v16; // [rsp+40h] [rbp-20h] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-18h] BYREF
  __int16 v18; // [rsp+50h] [rbp-10h]

  v16 = 0;
  v6 = PdoExt((__int64)a2, (__int64)a2, a3, a4);
  if ( (v6[356] & 0x400) != 0 )
  {
    v7 = v6[353];
    if ( (v7 & 0x800) == 0 )
    {
      v6[353] = v7 | 0x800;
      UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 11, 829387629, 1);
      if ( !UsbhExtPropDescSemaphorePresent(a2) )
      {
        NumberOfBytes = 0LL;
        LOBYTE(v8) = 1;
        v18 = 0;
        if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, v8, v9, 5LL, (__int64)&NumberOfBytes, 10, &v16) >= 0
          && v16 == 10
          && (unsigned int)NumberOfBytes >= 0xA
          && HIDWORD(NumberOfBytes) == 327936 )
        {
          if ( v18 )
          {
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                            ExDefaultNonPagedPoolType,
                                            (unsigned int)NumberOfBytes,
                                            0x42554855u);
            v11 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
              LOBYTE(v12) = 1;
              if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, v12, v13, 5LL, (__int64)v11, NumberOfBytes, &v16) >= 0 )
              {
                v14 = v16;
                if ( v16 == (_DWORD)NumberOfBytes
                  && RtlCompareMemory(&NumberOfBytes, v11, 0xAuLL) == 10
                  && (int)USBD_ValidateExtendedPropertyDescriptor(v11, v14) >= 0 )
                {
                  USBD_InstallExtPropDescSections(a2, (__int64)v11, *v11);
                }
              }
              ExFreePoolWithTag(v11, 0);
            }
          }
        }
      }
    }
  }
  return UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
}
