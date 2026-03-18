/*
 * XREFs of UsbhGetMSOS_Descriptor @ 0x1C0005420
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 * Callees:
 *     UsbhRegCreateUsbflagsKey @ 0x1C00054F4 (UsbhRegCreateUsbflagsKey.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhGetStringFromDevice @ 0x1C0028590 (UsbhGetStringFromDevice.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetMSOS_Descriptor(int a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  _QWORD *PoolWithTag; // rsi
  int v6; // eax
  int v7; // ebx
  int StringFromDevice; // eax
  int v10; // r15d
  const WCHAR *v11; // rdx
  char v12; // al
  const WCHAR *v13; // rdx
  int v14; // [rsp+48h] [rbp-18h]
  int ValueData[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v16; // [rsp+B0h] [rbp+50h] BYREF
  int v17; // [rsp+B8h] [rbp+58h] BYREF

  v3 = a2;
  v4 = PdoExt(a2);
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy == 2 )
    return 3221225659LL;
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 2;
    return 3221225659LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x12uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_WORD *)PoolWithTag + 8) = 0;
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy == 1 )
      *(_DWORD *)(v4 + 1424) = *(_DWORD *)(v4 + 1424) & 0xFFFFF9FF | 0x200;
    v6 = *(_DWORD *)(v4 + 1424);
    if ( (v6 & 0x200) != 0 )
    {
      if ( (v6 & 0x400) != 0 )
      {
        v7 = 0;
      }
      else
      {
        LOWORD(v17) = 18;
        StringFromDevice = UsbhGetStringFromDevice(
                             a1,
                             v3,
                             (unsigned int)ValueData,
                             (_DWORD)PoolWithTag,
                             (__int64)&v17,
                             0,
                             238);
        v10 = ValueData[0];
        v7 = StringFromDevice;
        if ( ValueData[0] == -1073717248 )
        {
          v11 = *(const WCHAR **)(v4 + 1136);
          ValueData[0] = 1;
          RtlWriteRegistryValue(2u, v11, L"MSOSDescriptorHang", 4u, ValueData, 4u);
        }
        *(_DWORD *)(v4 + 1424) &= ~0x200u;
        if ( v7 >= 0 && (_WORD)v17 == 18 && RtlCompareMemory((char *)PoolWithTag + 2, L"MSFT100", 0xEuLL) == 14 )
        {
          v12 = *((_BYTE *)PoolWithTag + 16);
          *(_BYTE *)(v4 + 1424) = v12;
          HIBYTE(v16) = v12;
          LOBYTE(v16) = 1;
          *(_DWORD *)(v4 + 1424) |= 0x400u;
        }
        else
        {
          *(_DWORD *)(v4 + 1424) &= ~0x400u;
          v7 = -1073741637;
          LOBYTE(v14) = 0;
          v16 = 0;
          UsbhException(
            a1,
            *(unsigned __int16 *)(v4 + 1420),
            102,
            (int)PoolWithTag,
            (unsigned __int16)v17,
            -1073741637,
            v10,
            usbfile_msos_c,
            193,
            v14);
        }
        v13 = *(const WCHAR **)(v4 + 1136);
        if ( v13 )
        {
          RtlWriteRegistryValue(2u, v13, L"osvc", 3u, &v16, 2u);
          if ( (*((_BYTE *)PoolWithTag + 17) & 2) != 0 )
          {
            *(_DWORD *)(v4 + 1424) &= ~0x8000u;
            v17 = 0;
          }
          else
          {
            *(_DWORD *)(v4 + 1424) |= 0x8000u;
            v17 = 1;
          }
          RtlWriteRegistryValue(2u, *(PCWSTR *)(v4 + 1136), L"SkipContainerIdQuery", 3u, &v17, 4u);
        }
      }
    }
    else
    {
      v7 = -1073741637;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
