/*
 * XREFs of Crashdump_ResetDevice @ 0x1C00344C0
 * Callers:
 *     <none>
 * Callees:
 *     Crashdump_Register_ResetPort @ 0x1C0035154 (Crashdump_Register_ResetPort.c)
 *     Crashdump_UsbDevice_GetPortType @ 0x1C003786C (Crashdump_UsbDevice_GetPortType.c)
 *     Crashdump_UsbDevice_ReConfigureOnPortReset @ 0x1C0037BF4 (Crashdump_UsbDevice_ReConfigureOnPortReset.c)
 *     Crashdump_UsbDevice_ResetPort @ 0x1C0037CD8 (Crashdump_UsbDevice_ResetPort.c)
 */

__int64 __fastcall Crashdump_ResetDevice(__int64 a1)
{
  int PortType; // edi
  unsigned int v3; // ecx
  unsigned int v4; // ebp
  __int64 v5; // r14
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_ResetDevice: begin\n");
  v9 = 0;
  if ( *(_BYTE *)(a1 + 618) )
  {
    *(_BYTE *)(a1 + 618) = 0;
    PortType = 0;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 528) - 1;
    *(_BYTE *)(a1 + 617) = 0;
    v4 = *(_DWORD *)(a1 + 4LL * v3 + 536);
    if ( v3 )
    {
      v5 = *(_QWORD *)(a1 + 560) + 408LL * (v3 - 1);
      PortType = Crashdump_UsbDevice_GetPortType(v5, v4, &v9);
      if ( PortType < 0 )
        goto LABEL_9;
      v6 = v9;
      v7 = Crashdump_UsbDevice_ResetPort(v5, v4, v9);
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 520);
      v7 = Crashdump_Register_ResetPort(a1, v4, v6);
    }
    PortType = v7;
    if ( v7 >= 0 )
      PortType = Crashdump_UsbDevice_ReConfigureOnPortReset(*(_QWORD *)(a1 + 568), v6);
  }
LABEL_9:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_ResetDevice: end 0x%X\n", PortType);
  return (unsigned int)PortType;
}
