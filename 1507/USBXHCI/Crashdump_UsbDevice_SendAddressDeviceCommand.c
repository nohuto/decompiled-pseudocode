/*
 * XREFs of Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0037E98
 * Callers:
 *     Crashdump_UsbDevice_Configure @ 0x1C0036FB4 (Crashdump_UsbDevice_Configure.c)
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
 *     Crashdump_Command_SendCommand @ 0x1C0036070 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_SendAddressDeviceCommand(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // ecx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  int v11; // esi
  __int64 v12; // r9
  int v13; // r8d
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp-10h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendAddressDeviceCommand: begin\n");
  v2 = *a1;
  memset(*(void **)(*a1 + 464), 0, *(unsigned int *)(*a1 + 472));
  v3 = *(_QWORD *)(v2 + 464);
  *(_DWORD *)(v3 + 4) |= 3u;
  if ( (*(_DWORD *)(*(_QWORD *)a1[1] + 104LL) & 4) != 0 )
  {
    v4 = v3 + 64;
    v5 = v3 + 128;
  }
  else
  {
    v4 = v3 + 32;
    v5 = v3 + 64;
  }
  *(_DWORD *)v4 ^= (*((_DWORD *)a1 + 20) ^ *(_DWORD *)v4) & 0xFFFFF;
  v6 = *(_DWORD *)v4 ^ (*((_DWORD *)a1 + 20) ^ *(_DWORD *)v4) & 0xF00000;
  *(_DWORD *)v4 = v6;
  v7 = *((_BYTE *)a1 + 86);
  *(_DWORD *)v4 = v6 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v4 + 6) = v7;
  v8 = a1[19];
  *(_DWORD *)(v5 + 4) ^= (*(_DWORD *)(v8 + 52) ^ *(_DWORD *)(v5 + 4)) & 0x38;
  *(_WORD *)(v5 + 6) = *(_WORD *)(v8 + 54);
  *(_DWORD *)(v5 + 4) ^= (*(_DWORD *)(v8 + 52) ^ *(_DWORD *)(v5 + 4)) & 6;
  if ( *(_BYTE *)(v8 + 160) )
    v9 = *(_QWORD *)(v8 + 168);
  else
    v9 = *(_QWORD *)(v8 + 24LL * *(unsigned int *)(v8 + 192) + 112);
  *(_QWORD *)(v5 + 8) = v9 | 1;
  v10 = *((unsigned __int8 *)a1 + 56);
  v16 = 0LL;
  v15 = *(_QWORD *)(v2 + 456);
  HIDWORD(v16) = (v10 << 24) | 0x2C00;
  v11 = Crashdump_Command_SendCommand(a1[2], (__int64)&v15, 0LL);
  if ( v11 >= 0 )
  {
    v12 = a1[9];
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Slot %u: RH %u, RS %u, Speed %u, IsHub %u, NumEntries %u, Addr %u, State %u\n",
      *((unsigned __int8 *)a1 + 56),
      *(unsigned __int8 *)(v12 + 6),
      *(_DWORD *)v12 & 0xFFFFF,
      (*(_DWORD *)v12 >> 20) & 0xF,
      (*(_DWORD *)v12 >> 26) & 1,
      *(_DWORD *)v12 >> 27,
      (unsigned __int8)*(_DWORD *)(v12 + 12),
      *(_DWORD *)(v12 + 12) >> 27);
    v13 = *(_DWORD *)(a1[9] + 12) >> 27;
    if ( v13 != 2 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After address device command, slot state is not addressed, it is %u\n",
        *((unsigned __int8 *)a1 + 56),
        v13);
      v11 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Address device command failed\n", *((unsigned __int8 *)a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendAddressDeviceCommand: end 0x%X\n", v11);
  return (unsigned int)v11;
}
