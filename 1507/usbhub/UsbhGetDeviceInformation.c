/*
 * XREFs of UsbhGetDeviceInformation @ 0x1C000544C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043334 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     UsbhValidateConfigurationDescriptor @ 0x1C0005634 (UsbhValidateConfigurationDescriptor.c)
 *     UsbhGetUsbDeviceFlags @ 0x1C0005674 (UsbhGetUsbDeviceFlags.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001F5C0 (UsbhParseConfigurationDescriptorEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetDeviceInformation(__int64 a1, __int64 a2)
{
  int v3; // r15d
  __int64 v4; // rbx
  unsigned __int16 v5; // r13
  unsigned int v6; // eax
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD, __int64, __int64, int *); // r10
  int v12; // esi
  int UsbDeviceFlags; // r15d
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rsi
  char v18; // al
  int v19; // eax
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-40h]
  int v22; // [rsp+20h] [rbp-40h]
  int v23; // [rsp+20h] [rbp-40h]
  int v24; // [rsp+48h] [rbp-18h]
  int v25[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int Size; // [rsp+B0h] [rbp+50h]
  int v28; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  v4 = PdoExt(a2);
  v28 = 18;
  v5 = 255;
  v6 = 255;
  Size = 255;
  while ( 1 )
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, Size);
    v9 = *(_QWORD *)(v4 + 1152);
    v10 = FdoExt(a1);
    v11 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *))(v10 + 4272);
    if ( !v11 )
      break;
    v21 = (int)v8;
    v12 = v11(*(_QWORD *)(v10 + 4232), v9, v4 + 1392, &v28);
    if ( v12 < 0 || Size >= v8[1] || v3 )
      goto LABEL_6;
    Size = v8[1];
    v5 = v8[1];
    ExFreePoolWithTag(v8, 0);
    v6 = Size;
    v3 = 1;
  }
  v12 = -1073741822;
LABEL_6:
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    v23 = *(unsigned __int16 *)(v4 + 1420);
    *(_DWORD *)(v4 + 2788) = 1073807367;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_GET_DESCRIPTORS_FAILURE, v23, v12);
    LOBYTE(v24) = 0;
    UsbhException(a1, *(unsigned __int16 *)(v4 + 1420), 36, (int)v8, Size, v12, -1, usbfile_bus_c, 3767, v24);
  }
  else
  {
    UsbDeviceFlags = UsbhGetUsbDeviceFlags(a1, a2);
    if ( (UsbDeviceFlags & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REGISTRY_FAILURE,
        *(unsigned __int16 *)(v4 + 1420),
        UsbDeviceFlags);
      return (unsigned int)UsbDeviceFlags;
    }
    if ( (unsigned __int8)UsbhValidateConfigurationDescriptor(v8, Size, v25, dword_1C0066630 != 0) )
    {
      if ( UsbDeviceFlags >= 0 && v5 < v8[1] )
        v8[1] = v5;
      v14 = *(_BYTE *)(v4 + 1409) == 1;
      if ( *(_BYTE *)(v4 + 1409) > 1u )
      {
        *(_DWORD *)(v4 + 2772) |= 0x80u;
        v14 = *(_BYTE *)(v4 + 1409) == 1;
      }
      if ( v14
        && *((_BYTE *)v8 + 4) > 1u
        && ((v18 = *(_BYTE *)(v4 + 1396)) == 0 || v18 == -17 && *(_BYTE *)(v4 + 1397) == 2 && *(_BYTE *)(v4 + 1398) == 1) )
      {
        *(_DWORD *)(v4 + 1412) |= 0x20u;
      }
      else
      {
        v15 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v8, v21, -1, -1, -1);
        v16 = v15;
        if ( v15 )
        {
          if ( *(_BYTE *)(v15 + 5) == 9 )
          {
            *(_DWORD *)(v4 + 1412) |= 4u;
          }
          else if ( *(_WORD *)(v4 + 1394) > 0x200u && (*(_BYTE *)(v4 + 1426) & 1) == 0 )
          {
            v20 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v8, v22, 8, 6, 98);
            if ( v20 )
            {
              if ( *(_DWORD *)(v4 + 1160) == 2 )
              {
                *(_DWORD *)(v4 + 1412) |= 0x200000u;
                v16 = v20;
              }
            }
          }
          *(_QWORD *)(v4 + 2400) = *(_QWORD *)v16;
          *(_BYTE *)(v4 + 2408) = *(_BYTE *)(v16 + 8);
        }
      }
      if ( (*((_BYTE *)v8 + 7) & 0x20) != 0 )
        *(_DWORD *)(v4 + 1412) |= 0x100u;
      *(_QWORD *)(v4 + 2384) = v8;
      return (unsigned int)UsbDeviceFlags;
    }
    v19 = *(unsigned __int16 *)(v4 + 1420);
    v12 = -1073741811;
    *(_DWORD *)(v4 + 2788) = 1073807364;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CONFIG_DESC_VALIDATION_FAILURE, v19, -1073741811);
    LOBYTE(v24) = 0;
    UsbhException(
      a1,
      *(unsigned __int16 *)(v4 + 1420),
      36,
      (int)v8,
      Size,
      -1073741811,
      v25[0],
      usbfile_bus_c,
      3801,
      v24);
  }
  ExFreePoolWithTag(v8, 0);
  return (unsigned int)v12;
}
