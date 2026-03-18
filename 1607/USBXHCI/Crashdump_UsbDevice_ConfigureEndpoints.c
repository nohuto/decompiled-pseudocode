/*
 * XREFs of Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C00387DC
 * Callers:
 *     Crashdump_UsbDevice_Configure @ 0x1C003853C (Crashdump_UsbDevice_Configure.c)
 * Callees:
 *     memset @ 0x1C0010200 (memset.c)
 *     Crashdump_Command_SendCommand @ 0x1C00375D0 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ConfigureEndpoints(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r9
  __int64 *v4; // rdi
  unsigned int v5; // edx
  unsigned int i; // r10d
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // ecx
  int v15; // ecx
  int v16; // edi
  int v17; // r8d
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+38h] [rbp-10h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpoints: begin\n");
  v2 = *a1;
  memset(*(void **)(*a1 + 472), 0, *(unsigned int *)(*a1 + 480));
  v3 = *(_QWORD *)(v2 + 472);
  v4 = a1 + 20;
  *(_DWORD *)(v3 + 4) |= 1u;
  v5 = 0;
  for ( i = 2; i < 0x20; ++i )
  {
    if ( ((1 << i) & 0xFFFFFFFC) != 0 )
    {
      v7 = *v4;
      if ( *v4 )
      {
        v8 = i - 1 + 2LL;
        if ( (*(_DWORD *)(*(_QWORD *)a1[1] + 104LL) & 4) != 0 )
          v9 = v8 << 6;
        else
          v9 = 32 * v8;
        v10 = v3 + v9;
        *(_DWORD *)(v10 + 4) ^= (*(_DWORD *)(v7 + 52) ^ *(_DWORD *)(v10 + 4)) & 0x38;
        *(_WORD *)(v10 + 6) = *(_WORD *)(v7 + 54);
        *(_DWORD *)(v10 + 4) ^= (*(_DWORD *)(v7 + 52) ^ *(_DWORD *)(v10 + 4)) & 6;
        *(_BYTE *)(v10 + 5) = BYTE1(*(_DWORD *)(v7 + 52));
        *(_WORD *)(v10 + 16) = *(_WORD *)(v7 + 64);
        if ( *(_BYTE *)(v7 + 160) )
          v11 = *(_QWORD *)(v7 + 168);
        else
          v11 = *(_QWORD *)(v7 + 24LL * *(unsigned int *)(v7 + 192) + 112);
        *(_QWORD *)(v10 + 8) = v11;
        if ( (*(_DWORD *)(v7 + 48) & 0x7C00) != 0 )
        {
          *(_DWORD *)v10 = *(_DWORD *)v10 & 0xFFFF03FF | 0x8400;
          v12 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        else
        {
          *(_DWORD *)v10 &= 0xFFFF03FF;
          v12 = v11 | 1;
        }
        *(_QWORD *)(v10 + 8) = v12;
        v5 = i;
        *(_DWORD *)(v3 + 4) |= 1 << i;
      }
    }
    ++v4;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1[1] + 104LL) & 4) != 0 )
    v13 = v3 + 64;
  else
    v13 = v3 + 32;
  v14 = (v5 << 27) | *(_DWORD *)v13 & 0x7FFFFFF;
  *(_DWORD *)v13 = v14;
  *(_DWORD *)v13 = v14 ^ (v14 ^ *((_DWORD *)a1 + 20)) & 0x4000000;
  *(_BYTE *)(v13 + 7) = *((_BYTE *)a1 + 87);
  v15 = *((unsigned __int8 *)a1 + 56);
  v20 = 0LL;
  v19 = *(_QWORD *)(v2 + 464);
  HIDWORD(v20) = (v15 << 24) | 0x3000;
  v16 = Crashdump_Command_SendCommand(a1[2], (__int64)&v19, 0LL);
  if ( v16 >= 0 )
  {
    v17 = *(_DWORD *)(a1[9] + 12) >> 27;
    if ( v17 != 3 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After reset device command, slot state is not configured, it is %u\n",
        *((unsigned __int8 *)a1 + 56),
        v17);
      v16 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Configure Endpoint command failed\n", *((unsigned __int8 *)a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpoints: end 0x%X\n", v16);
  return (unsigned int)v16;
}
