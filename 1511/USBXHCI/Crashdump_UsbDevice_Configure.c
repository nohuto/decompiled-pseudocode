/*
 * XREFs of Crashdump_UsbDevice_Configure @ 0x1C0037F94
 * Callers:
 *     Crashdump_UsbDevice_ReConfigureOnControllerReset @ 0x1C0038A9C (Crashdump_UsbDevice_ReConfigureOnControllerReset.c)
 *     Crashdump_UsbDevice_ReConfigureOnPortReset @ 0x1C0038BD4 (Crashdump_UsbDevice_ReConfigureOnPortReset.c)
 * Callees:
 *     Crashdump_Endpoint_SendControlTransfer @ 0x1C00378FC (Crashdump_Endpoint_SendControlTransfer.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C0038234 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C003854C (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0038E78 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_Configure(__int64 a1, int a2)
{
  int v4; // r15d
  __int64 v5; // r9
  int DeviceDescriptor; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+90h] [rbp+30h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_Configure: begin\n");
  v4 = Crashdump_UsbDevice_SendAddressDeviceCommand(a1);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 72);
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Slot %u: RH %u, RS %u, Speed %u, IsHub %u, NumEntries %u, Addr %u, State %u\n",
      *(unsigned __int8 *)(a1 + 56),
      *(unsigned __int8 *)(v5 + 6),
      *(_DWORD *)v5 & 0xFFFFF,
      (*(_DWORD *)v5 >> 20) & 0xF,
      (*(_DWORD *)v5 >> 26) & 1,
      *(_DWORD *)v5 >> 27,
      (unsigned __int8)*(_DWORD *)(v5 + 12),
      *(_DWORD *)(v5 + 12) >> 27);
    DeviceDescriptor = Crashdump_UsbDevice_GetDeviceDescriptor(a1, &v16);
    v4 = DeviceDescriptor;
    if ( DeviceDescriptor >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 152);
      WORD1(v16) = *(unsigned __int8 *)(a1 + 401);
      LOWORD(v16) = 2304;
      HIDWORD(v16) = 0;
      v8 = Crashdump_Endpoint_SendControlTransfer(v7, &v16, 0, 0LL);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v9 = *(_BYTE *)(a1 + 403);
        if ( v9
          && (v10 = *(_QWORD *)(a1 + 152),
              WORD1(v16) = v9,
              HIDWORD(v16) = *(unsigned __int8 *)(a1 + 402),
              LOWORD(v16) = 2817,
              v11 = Crashdump_Endpoint_SendControlTransfer(v10, &v16, 0, 0LL),
              v4 = v11,
              v11 < 0) )
        {
          DbgPrintEx(0x93u, 1u, "XHCIDUMP: USB_REQUEST_SET_INTERFACE: failed error = 0x%X\n", (unsigned int)v11);
        }
        else if ( *(_BYTE *)(a1 + 400) )
        {
          if ( a2 == 30 )
          {
            v12 = *(_QWORD *)(a1 + 152);
            WORD1(v16) = *(_WORD *)(a1 + 404) - 1;
            LOWORD(v16) = 3104;
            HIDWORD(v16) = 0;
            v13 = Crashdump_Endpoint_SendControlTransfer(v12, &v16, 0, 0LL);
            v4 = v13;
            if ( v13 < 0 )
              DbgPrintEx(
                0x93u,
                1u,
                "XHCIDUMP: USB_REQUEST_SET_HUB_DEPTH: failed depth = %u error = 0x%X\n",
                *(_DWORD *)(a1 + 404) - 1,
                v13);
          }
        }
        else
        {
          v4 = Crashdump_UsbDevice_ConfigureEndpoints(a1);
        }
      }
      else
      {
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: USB_REQUEST_SET_CONFIGURATION: failed error = 0x%X\n", (unsigned int)v8);
      }
    }
    else
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: Crashdump_UsbDevice_GetDeviceDescriptor: failed error = 0x%X\n",
        (unsigned int)DeviceDescriptor);
    }
  }
  v14 = *(_QWORD *)(a1 + 72);
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Slot %u: RH %u, RS %u, Speed %u, IsHub %u, NumEntries %u, Addr %u, State %u\n",
    *(unsigned __int8 *)(a1 + 56),
    *(unsigned __int8 *)(v14 + 6),
    *(_DWORD *)v14 & 0xFFFFF,
    (*(_DWORD *)v14 >> 20) & 0xF,
    (*(_DWORD *)v14 >> 26) & 1,
    *(_DWORD *)v14 >> 27,
    (unsigned __int8)*(_DWORD *)(v14 + 12),
    *(_DWORD *)(v14 + 12) >> 27);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_Configure: end 0x%X\n", v4);
  return (unsigned int)v4;
}
