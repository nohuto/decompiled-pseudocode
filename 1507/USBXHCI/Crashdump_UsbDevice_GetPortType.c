/*
 * XREFs of Crashdump_UsbDevice_GetPortType @ 0x1C003786C
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C0033FF0 (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_ResetDevice @ 0x1C00344C0 (Crashdump_ResetDevice.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C00382D4 (Crashdump_UsbDevice_SuspendPort.c)
 * Callees:
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C00376EC (Crashdump_UsbDevice_GetPortStatus.c)
 */

__int64 __fastcall Crashdump_UsbDevice_GetPortType(_QWORD *a1, int a2, _DWORD *a3)
{
  int PortStatus; // ebx
  _WORD *v8; // [rsp+48h] [rbp+20h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetPortType: begin: port %u\n", a2);
  PortStatus = Crashdump_UsbDevice_GetPortStatus(a1, a2, &v8);
  if ( PortStatus >= 0 )
    *a3 = (*v8 & 0x400) != 0 ? 20 : 30;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetPortType: end 0x%X\n", PortStatus);
  return (unsigned int)PortStatus;
}
