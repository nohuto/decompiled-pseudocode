/*
 * XREFs of Crashdump_UsbDevice_SendResetDeviceCommand @ 0x1C0039160
 * Callers:
 *     Crashdump_UsbDevice_ReConfigureOnPortReset @ 0x1C0038BD4 (Crashdump_UsbDevice_ReConfigureOnPortReset.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x1C0037050 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_SendResetDeviceCommand(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  int v4; // edi
  int v5; // r8d
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendResetDeviceCommand: begin\n");
  v2 = *(unsigned __int8 *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  v7 = 0LL;
  v9 = (v2 << 24) | 0x4400;
  v4 = Crashdump_Command_SendCommand(v3, (__int64)&v7, 0LL);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) >> 27;
    if ( v5 != 1 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After reset device command, slot state is not default, it is %u\n",
        *(unsigned __int8 *)(a1 + 56),
        v5);
      v4 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Reset device command failed\n", *(unsigned __int8 *)(a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendResetDeviceCommand: end 0x%X\n", v4);
  return (unsigned int)v4;
}
