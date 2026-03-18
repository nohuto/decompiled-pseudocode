/*
 * XREFs of UsbhGetMsOsExtendedConfigDesc @ 0x1C003FD4C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C003F7D0 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C003FFAC (UsbhGetMsOsFeatureDescriptor.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

void *__fastcall UsbhGetMsOsExtendedConfigDesc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  _DWORD *v5; // r14
  void *v6; // rsi
  unsigned int *PoolWithTag; // rax
  int v8; // r8d
  unsigned int *v9; // rdi
  int MsOsFeatureDescriptor; // eax
  int v11; // ebx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  unsigned __int8 v14; // al
  SIZE_T v15; // rdx
  PVOID v16; // rax
  int v17; // r8d
  unsigned int v18; // ebx
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v20 = a1;
  v4 = a2;
  v5 = PdoExt(a2, a2, a3, a4);
  v6 = 0LL;
  if ( (v5[356] & 0x400) == 0 )
    return 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x10uLL, 0x42554855u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v4, 0, v8, 4, (__int64)PoolWithTag, 16, (__int64)&v20);
  v11 = MsOsFeatureDescriptor;
  if ( MsOsFeatureDescriptor >= 0 )
  {
    if ( (_DWORD)v20 != 16
      || *((_WORD *)v9 + 2) != 256
      || *((_WORD *)v9 + 3) != 4
      || (v14 = *((_BYTE *)v9 + 8)) == 0
      || (v15 = *v9, v15 != 24LL * v14 + 16) )
    {
      v11 = -1073741668;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xBu,
          (__int64)&WPP_18972fe5641c8e6e735556c3f3a9547f_Traceguids);
      goto LABEL_25;
    }
    v16 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v15, 0x42554855u);
    v6 = v16;
    if ( !v16 )
    {
      v11 = -1073741670;
      goto LABEL_25;
    }
    memset(v16, 0, *v9);
    MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v4, 0, v17, 4, (__int64)v6, *v9, (__int64)&v20);
    v11 = MsOsFeatureDescriptor;
    if ( MsOsFeatureDescriptor >= 0 )
    {
      v18 = v20;
      if ( (_DWORD)v20 != *v9 || RtlCompareMemory(v9, v6, 0x10uLL) != 16 )
      {
        v11 = -1073741668;
        goto LABEL_25;
      }
      MsOsFeatureDescriptor = USBD_ValidateExtendedConfigurationDescriptor(
                                (unsigned int *)v6,
                                v18,
                                *((_QWORD *)v5 + 298),
                                *(unsigned __int16 *)(*((_QWORD *)v5 + 298) + 2LL));
      v11 = MsOsFeatureDescriptor;
      if ( MsOsFeatureDescriptor >= 0 )
        goto LABEL_25;
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_25;
      v13 = 13;
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_25;
      v13 = 12;
    }
    goto LABEL_6;
  }
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = 10;
LABEL_6:
    WPP_RECORDER_SF_d(
      v12->DeviceExtension,
      0,
      1,
      v13,
      (__int64)&WPP_18972fe5641c8e6e735556c3f3a9547f_Traceguids,
      MsOsFeatureDescriptor);
  }
LABEL_25:
  ExFreePoolWithTag(v9, 0);
  if ( v11 >= 0 )
    return v6;
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return 0LL;
}
