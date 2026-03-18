/*
 * XREFs of Crashdump_UsbDevice_ChangePortFeature @ 0x1C00353BC
 * Callers:
 *     Crashdump_UsbDevice_ResetPort @ 0x1C00362E0 (Crashdump_UsbDevice_ResetPort.c)
 *     Crashdump_UsbDevice_SetPortPower @ 0x1C003688C (Crashdump_UsbDevice_SetPortPower.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C0036908 (Crashdump_UsbDevice_SuspendPort.c)
 * Callees:
 *     Crashdump_Endpoint_SendControlTransfer @ 0x1C0034E9C (Crashdump_Endpoint_SendControlTransfer.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ChangePortFeature(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  __int16 v5; // di
  __int16 v6; // si
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned __int8 v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v12; // [rsp+41h] [rbp+9h]
  __int16 v13; // [rsp+42h] [rbp+Ah]
  __int16 v14; // [rsp+44h] [rbp+Ch]
  __int16 v15; // [rsp+46h] [rbp+Eh]

  v5 = a3;
  v6 = a2;
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Crashdump_UsbDevice_ChangePortFeature: begin: port: %u, feature: %u, request: %u\n",
    a2,
    a3,
    a4);
  v8 = *(_QWORD *)(a1 + 152);
  v12 = a4;
  v15 = 0;
  v11 = 35;
  v13 = v5;
  v14 = v6;
  v9 = Crashdump_Endpoint_SendControlTransfer(v8, &v11, 0, 0LL);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ChangePortFeature: end 0x%X\n", v9);
  return v9;
}
