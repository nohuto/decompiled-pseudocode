/*
 * XREFs of UsbhGetLanguageIdString @ 0x1C0005910
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhValidateStringDescriptor @ 0x1C0027E94 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0027ED0 (UsbhGetStringFromDevice.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003D0A8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhGetLanguageIdString(int a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rdi
  PDEVICE_OBJECT v7; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v10; // rbx
  int StringFromDevice; // esi
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // r8d
  unsigned int v15; // edx
  _WORD *v16; // rsi
  __int64 v17; // rcx
  _WORD *v18; // rdi
  PDEVICE_OBJECT v19; // rcx
  int v20; // esi
  int v21; // r9d
  int v22; // [rsp+48h] [rbp-40h]
  int v23[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v24; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a2;
  v6 = PdoExt(a2);
  if ( !*(_BYTE *)(v6 + 1407) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v21 = 23;
LABEL_20:
    WPP_RECORDER_SF_(v7->DeviceExtension, 0, 1, v21, (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids);
    return 3221225659LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xFFuLL);
  v24 = 255;
  StringFromDevice = UsbhGetStringFromDevice(a1, v5, (unsigned int)v23, (_DWORD)v10, (__int64)&v24, 0, 0);
  v12 = StringFromDevice & 0xC0000000;
  if ( (_DWORD)v12 == -1073741824 || (v13 = v24, !(unsigned __int8)UsbhValidateStringDescriptor(v12, v10, v24, v23)) )
  {
    LOBYTE(v22) = 0;
    UsbhException(
      a1,
      *(unsigned __int16 *)(v6 + 1420),
      63,
      (int)v10,
      v24,
      StringFromDevice,
      v23[0],
      usbfile_idstring_c,
      1762,
      v22);
    ExFreePoolWithTag(v10, 0);
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v21 = 24;
    goto LABEL_20;
  }
  v15 = (*(unsigned __int8 *)v10 >> 1) - 1;
  if ( *(unsigned __int8 *)v10 >> 1 == 1 )
  {
    ExFreePoolWithTag(v10, 0);
    return 3221225659LL;
  }
  v16 = v10 + 1;
  v17 = v15;
  v18 = v10;
  while ( v17 )
  {
    *v18++ = *v16++;
    --v17;
  }
  v10[v15] = 0;
  *(_DWORD *)(a3 + 4) = v13;
  *(_QWORD *)(a3 + 8) = v10;
  v19 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      25,
      (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids,
      v15);
    v19 = WPP_GLOBAL_Control;
  }
  v20 = 0;
  while ( *v10 )
  {
    if ( LOWORD(v19->DeviceType) )
    {
      WPP_RECORDER_SF_dD(
        v19->DeviceExtension,
        v15,
        v14,
        26,
        (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids,
        v20,
        *v10);
      v19 = WPP_GLOBAL_Control;
      ++v20;
    }
    ++v10;
  }
  return 0LL;
}
