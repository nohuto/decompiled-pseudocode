/*
 * XREFs of Crashdump_UsbDevice_ReConfigureOnControllerReset @ 0x1C0039068
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C003557C (Crashdump_InitializeWithControllerReset.c)
 * Callees:
 *     Crashdump_UsbDevice_Configure @ 0x1C003853C (Crashdump_UsbDevice_Configure.c)
 *     Crashdump_UsbDevice_SendEnableSlotCommand @ 0x1C0039680 (Crashdump_UsbDevice_SendEnableSlotCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ReConfigureOnControllerReset(__int64 a1, int a2)
{
  int v4; // edi
  __int64 *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ReConfigureOnControllerReset: begin\n");
  v4 = Crashdump_UsbDevice_SendEnableSlotCommand(a1);
  if ( v4 >= 0 )
  {
    v5 = (__int64 *)(a1 + 152);
    v6 = 31LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 424LL) + 8LL * *(unsigned __int8 *)(a1 + 56)) = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 40);
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( ((*(_DWORD *)(*(_QWORD *)a1 + 584LL) - 1) & 0xFFFFFFFB) == 0 )
          PoSetHiberRange(0LL, 0x10000u, (PVOID)v7, 0xE8uLL, 0x43434858u);
        *(_DWORD *)(v7 + 192) = 0;
        v8 = *(_QWORD *)(v7 + 8);
        *(_QWORD *)(v7 + 200) = 1LL;
        v9 = (unsigned int)(*(_DWORD *)(v7 + 32) - 1) + 1LL;
        if ( (*(_DWORD *)(*(_QWORD *)v8 + 104LL) & 4) != 0 )
          v10 = v9 << 6;
        else
          v10 = 32 * v9;
        *(_QWORD *)(v7 + 40) = *(_QWORD *)(a1 + 40) + v10;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    v4 = Crashdump_UsbDevice_Configure(a1, a2);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ReConfigureOnControllerReset: end 0x%X\n", v4);
  return (unsigned int)v4;
}
