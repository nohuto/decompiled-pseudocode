/*
 * XREFs of UsbhGetMsOsExtendedConfigDesc @ 0x1C003FF7C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C003FA00 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C00401C8 (UsbhGetMsOsFeatureDescriptor.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

void *__fastcall UsbhGetMsOsExtendedConfigDesc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // r8d
  _DWORD *v6; // r14
  void *v7; // rdi
  int MsOsFeatureDescriptor; // eax
  int v9; // ebx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  PVOID PoolWithTag; // rax
  int v13; // r8d
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+40h] [rbp-20h] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  v4 = a2;
  v6 = PdoExt(a2, a2, a3, a4);
  v7 = 0LL;
  if ( (v6[356] & 0x400) == 0 )
    return 0LL;
  NumberOfBytes = 0LL;
  v18 = 0LL;
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v4, 0, v5, 4, (__int64)&NumberOfBytes, 16, (__int64)&v16);
  v9 = MsOsFeatureDescriptor;
  if ( MsOsFeatureDescriptor < 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v11 = 10;
    goto LABEL_5;
  }
  if ( v16 == 16
    && HIDWORD(NumberOfBytes) == 262400
    && (_BYTE)v18
    && (unsigned int)NumberOfBytes == 24LL * (unsigned __int8)v18 + 16 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)NumberOfBytes, 0x42554855u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
      MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v4, 0, v13, 4, (__int64)v7, NumberOfBytes, (__int64)&v16);
      v9 = MsOsFeatureDescriptor;
      if ( MsOsFeatureDescriptor >= 0 )
      {
        v14 = v16;
        if ( v16 != (_DWORD)NumberOfBytes || RtlCompareMemory(&NumberOfBytes, v7, 0x10uLL) != 16 )
        {
LABEL_23:
          if ( v7 )
            ExFreePoolWithTag(v7, 0);
          return 0LL;
        }
        MsOsFeatureDescriptor = USBD_ValidateExtendedConfigurationDescriptor(
                                  (unsigned int *)v7,
                                  v14,
                                  *((_QWORD *)v6 + 298),
                                  *(unsigned __int16 *)(*((_QWORD *)v6 + 298) + 2LL));
        v9 = MsOsFeatureDescriptor;
        if ( MsOsFeatureDescriptor >= 0 )
          return v7;
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v11 = 13;
          goto LABEL_5;
        }
      }
      else
      {
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v11 = 12;
LABEL_5:
          WPP_RECORDER_SF_d(
            v10->DeviceExtension,
            0,
            1,
            v11,
            (__int64)&WPP_9cd496eb227800e9a5173bc1a3ea729f_Traceguids,
            MsOsFeatureDescriptor);
        }
      }
LABEL_21:
      if ( v9 >= 0 )
        return v7;
      goto LABEL_23;
    }
  }
  else
  {
    v9 = -1073741668;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xBu,
        (__int64)&WPP_9cd496eb227800e9a5173bc1a3ea729f_Traceguids);
      goto LABEL_21;
    }
  }
  return 0LL;
}
