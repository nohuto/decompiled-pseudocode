/*
 * XREFs of UsbhCreateDevice @ 0x1C0009548
 * Callers:
 *     UsbhReset1Complete @ 0x1C0009900 (UsbhReset1Complete.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C0003D38 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhGetDeviceHandle @ 0x1C0007C44 (UsbhGetDeviceHandle.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C0009738 (UsbhLinkPdoDeviceHandle.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     UsbhGetTtDeviceHandle @ 0x1C0043D1C (UsbhGetTtDeviceHandle.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1C00453FC (Usbh_HubRemoveUsbDevice.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C0057BD4 (UsbhEtwLogHubEventWithExtraData.c)
 */

__int64 __fastcall UsbhCreateDevice(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  unsigned __int16 v4; // si
  unsigned int v5; // r14d
  __int64 v8; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  PIRP v11; // rdx
  _DWORD *v12; // r9
  _DWORD *v13; // r8
  unsigned int i; // edx
  int v15; // eax
  int v16; // edi
  unsigned __int16 v18; // ax
  unsigned int TtDeviceHandle; // esi
  int v20; // [rsp+20h] [rbp-B9h]
  int v21; // [rsp+48h] [rbp-91h]
  unsigned __int16 v22; // [rsp+50h] [rbp-89h] BYREF
  PIRP DeviceHandle; // [rsp+58h] [rbp-81h] BYREF
  unsigned __int16 v24; // [rsp+60h] [rbp-79h]
  unsigned __int64 v25; // [rsp+68h] [rbp-71h] BYREF
  __int64 v26; // [rsp+70h] [rbp-69h]
  __int64 v27; // [rsp+78h] [rbp-61h]
  int v28[24]; // [rsp+80h] [rbp-59h] BYREF

  v4 = a3;
  v5 = a4;
  v27 = a2;
  v24 = a3;
  DeviceHandle = 0LL;
  v22 = 0;
  v26 = a3;
  Log(a1, 4, 1668441412, a3, a4);
  v8 = FdoExt(a1);
  v9 = PdoExt(a2);
  v10 = 0xFEFEFEFEFEFEFEFEuLL;
  v25 = 0xFEFEFEFEFEFEFEFEuLL;
  if ( (v4 & 0x400) != 0 )
  {
    v11 = 0LL;
    DeviceHandle = 0LL;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v8 + 2560) & 0x40) != 0 )
  {
    Log(a1, 4, 1668441137, v4, v5);
    DeviceHandle = UsbhGetDeviceHandle(a1, a1);
    v22 = v5;
    Log(a1, 4, 1668441138, (_DWORD)DeviceHandle, v5);
    v11 = DeviceHandle;
    if ( !DeviceHandle )
    {
      LOBYTE(v21) = 0;
      v16 = -1073741823;
      UsbhException(a1, (unsigned __int16)v5, 5, 0, 0, -1073741823, -1, usbfile_bus_c, 6214, v21);
      return (unsigned int)v16;
    }
LABEL_3:
    if ( *(_QWORD *)(v8 + 4256) )
    {
      v28[0] = 1;
      if ( *(_WORD *)(v8 + 4226) < 7u )
      {
        LOWORD(v20) = v5;
        v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, PIRP, _QWORD, int, int *, unsigned __int16))(v8 + 4256))(
                *(_QWORD *)(v8 + 4232),
                &v25,
                v11,
                v4,
                v20,
                v28,
                v22);
      }
      else
      {
        v12 = (_DWORD *)(v9 + 2664);
        *(_DWORD *)(v9 + 2668) = *(unsigned __int16 *)(v8 + 5208);
        v13 = (_DWORD *)(v9 + 2672);
        *(_QWORD *)(v9 + 2672) = 0LL;
        *(_QWORD *)(v9 + 2680) = 0LL;
        *(_DWORD *)(v9 + 2688) = 0;
        if ( *(_WORD *)(v8 + 5208) )
        {
          for ( i = 1; i < 5; ++i )
          {
            v18 = *(_WORD *)(v8 + 2LL * (i - 1) + 5210);
            if ( !v18 )
              break;
            *v13++ = v18;
          }
        }
        else
        {
          i = 0;
        }
        *v12 = i + 1;
        v12[i + 1] = (unsigned __int16)v5;
        v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, PIRP, _QWORD, __int64, int *, unsigned __int16, __int64, __int64))(v8 + 4488))(
                *(_QWORD *)(v8 + 4232),
                &v25,
                DeviceHandle,
                v4,
                v9 + 2664,
                v28,
                v22,
                v27,
                v9 + 2648);
      }
      v16 = v15;
      if ( DeviceHandle )
        Usbh_HubDerefDeviceHandle(a1, (__int64)DeviceHandle, a1, 0x48447472u);
      if ( (v16 & 0xC0000000) == 0xC0000000 )
      {
        if ( v28[1] == 5 )
          *(_DWORD *)(v9 + 2796) = v28[2] != 0 ? 1073807365 : 1073807360;
        Log(a1, 4, 1667524129, v26, v5);
        LOBYTE(v21) = 0;
        UsbhException(a1, (unsigned __int16)v5, 4, (int)v28, 84, v16, -1, usbfile_bus_c, 6334, v21);
        UsbhEtwLogHubEventWithExtraData(
          a1,
          &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_DEVICE_FAILURE,
          (unsigned __int16)v5,
          v28,
          84);
        v25 = 0xFEFEFEFEFEFEFEFEuLL;
      }
      else
      {
        v10 = v25;
      }
      if ( v16 >= 0 )
      {
        v16 = UsbhLinkPdoDeviceHandle(a1, v27, v10);
        if ( (v16 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 4, 1819175713, v25, v5);
          Usbh_HubRemoveUsbDevice(a1, v25);
        }
      }
    }
    else
    {
      v16 = -1073741822;
      if ( v11 )
        Usbh_HubDerefDeviceHandle(a1, (__int64)v11, a1, 0x48447472u);
    }
    return (unsigned int)v16;
  }
  Log(a1, 4, 1668441139, v26, v5);
  TtDeviceHandle = UsbhGetTtDeviceHandle(a1, &DeviceHandle, a1, &v22);
  Log(a1, 4, 1668441140, (_DWORD)DeviceHandle, v22);
  if ( (TtDeviceHandle & 0xC0000000) != 0xC0000000 )
  {
    v11 = DeviceHandle;
    v4 = v24;
    goto LABEL_3;
  }
  LOBYTE(v21) = 0;
  UsbhException(a1, (unsigned __int16)v5, 104, 0, 0, TtDeviceHandle, -1, usbfile_bus_c, 6233, v21);
  return TtDeviceHandle;
}
