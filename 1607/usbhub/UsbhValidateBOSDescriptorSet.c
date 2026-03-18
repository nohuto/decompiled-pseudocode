/*
 * XREFs of UsbhValidateBOSDescriptorSet @ 0x1C0053290
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043894 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     UsbhInternalValidateBOSDescriptor @ 0x1C00528EC (UsbhInternalValidateBOSDescriptor.c)
 *     UsbhInternalValidateCommonDescriptorHeader @ 0x1C0052B30 (UsbhInternalValidateCommonDescriptorHeader.c)
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0052CC4 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 */

char __fastcall UsbhValidateBOSDescriptorSet(__int64 a1, __int64 a2, unsigned int a3, char *a4)
{
  __int64 v4; // r14
  char *v5; // rbx
  char v9; // cl
  unsigned __int8 *i; // rbx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-48h]
  unsigned int v13; // [rsp+40h] [rbp-40h]
  char *v14; // [rsp+48h] [rbp-38h]
  char v15; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+30h] BYREF

  v4 = a3;
  v5 = &v15;
  v11 = a2;
  v13 = a3;
  if ( a4 )
    v5 = a4;
  v12 = a3 + a2;
  memset(v5, 0, 0x30uLL);
  v14 = v5;
  if ( (unsigned int)v4 < 5 )
    return 0;
  v9 = UsbhInternalValidateBOSDescriptor(a1, (unsigned __int8 *)a2, (__int64)&v11);
  if ( !v9 )
    return 0;
  if ( (_DWORD)v4 != *(unsigned __int16 *)(a2 + 2) )
  {
    Log(a1, 256, 1447186259, v4, *(unsigned __int16 *)(a2 + 2));
    v9 = 0;
  }
  for ( i = (unsigned __int8 *)(a2 + 5); (unsigned __int64)i < v12; i += v16 )
  {
    v9 = UsbhInternalValidateCommonDescriptorHeader(a1, i, &v11, &v16);
    if ( !v9 )
      return 0;
    if ( i[1] == 16 )
    {
      v9 = UsbhInternalValidateDeviceCapabilityDescriptor(a1, i, (__int64)&v11);
      if ( !v9 )
        return 0;
    }
  }
  return v9;
}
