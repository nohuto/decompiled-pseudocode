/*
 * XREFs of UsbhGetAlternateUsbDescriptors @ 0x1C0043894
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 * Callees:
 *     UsbhGetDeviceInformation @ 0x1C0007814 (UsbhGetDeviceInformation.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0007C14 (UsbhValidateDeviceDescriptor.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x1C005047C (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C0053290 (UsbhValidateBOSDescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x1C0054390 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C00544FC (UsbhGetDeviceDescriptor.c)
 */

char __fastcall UsbhGetAlternateUsbDescriptors(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _DWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v10; // r9
  void *v11; // rcx
  void *v12; // rcx
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v13) = 0;
  v7 = PdoExt(a2, a2, (__int64)a3, a4);
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
    return 0;
  if ( !UsbhValidateDeviceDescriptor(a1, (__int64)(v7 + 348), v8, 0LL, &v13) )
  {
    v7[699] = 1073807365;
    return 0;
  }
  if ( (_BYTE)v13 )
    v7[353] |= 0x40u;
  LOBYTE(v10) = *(_BYTE *)(a3[3] + 6LL);
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v7 + 144), v7 + 348, v10);
  v11 = (void *)*((_QWORD *)v7 + 298);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v7 + 298) = 0LL;
  }
  if ( (int)UsbhGetDeviceInformation(a1, a2) < 0 )
    return 0;
  if ( *((_WORD *)v7 + 697) > 0x200u && (v7[356] & 0x20000) == 0 )
  {
    memset(a3, 0, 0x30uLL);
    v12 = (void *)*((_QWORD *)v7 + 299);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)v7 + 299) = 0LL;
    }
    if ( (int)UsbhGetBosDescriptor(a1, a2, &v13) < 0 )
      return 1;
    if ( !(unsigned __int8)UsbhValidateBOSDescriptorSet(*((_QWORD *)v7 + 147), *((_QWORD *)v7 + 299), v13, a3) )
    {
      v7[699] = 1073807378;
      return 0;
    }
  }
  v7[700] |= 4u;
  return 1;
}
