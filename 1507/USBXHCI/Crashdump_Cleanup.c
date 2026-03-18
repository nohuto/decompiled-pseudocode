/*
 * XREFs of Crashdump_Cleanup @ 0x1C00336C0
 * Callers:
 *     <none>
 * Callees:
 *     Crashdump_Register_SaveStateForHybridSleep @ 0x1C00353B8 (Crashdump_Register_SaveStateForHybridSleep.c)
 *     Crashdump_Register_StopController @ 0x1C0035558 (Crashdump_Register_StopController.c)
 *     Crashdump_Command_Stop @ 0x1C00361E4 (Crashdump_Command_Stop.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C0036EC0 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C00374A0 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C00382D4 (Crashdump_UsbDevice_SuspendPort.c)
 */

__int64 __fastcall Crashdump_Cleanup(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  int v4; // eax
  bool v5; // zf
  unsigned int v6; // edi
  unsigned int *j; // rsi
  int v8; // eax
  unsigned int v9; // ebp
  int *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edi
  __int64 v14; // rcx
  int v15; // eax
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Cleanup: begin\n");
  for ( i = 0; i < *(_DWORD *)(a1 + 528); ++i )
  {
    v3 = 408LL * i;
    v4 = Crashdump_UsbDevice_Cleanup(v3 + *(_QWORD *)(a1 + 560));
    if ( v4 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_UsbDevice_Cleanup failed with error 0x%X\n", v4);
    if ( *(_BYTE *)(a1 + 617) && (int)Crashdump_UsbDevice_ConfigureEndpointsForSaveState(v3 + *(_QWORD *)(a1 + 560)) < 0 )
      *(_BYTE *)(a1 + 617) = 0;
  }
  v5 = *(_DWORD *)(a1 + 528) == 1;
  v6 = *(_DWORD *)(a1 + 528) - 1;
  for ( j = (unsigned int *)(a1 + 536 + 4LL * v6); ; --j )
  {
    v9 = *j;
    if ( v5 )
      break;
    v8 = Crashdump_UsbDevice_SuspendPort(*(_QWORD *)(a1 + 560) + 408LL * --v6, v9);
    if ( v8 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_UsbDevice_SuspendPort failed with error 0x%X\n", v8);
    v5 = v6 == 0;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: begin: port %u\n", v9);
  v10 = (int *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16 * (v9 - 1 + 64LL));
  *v10 = *v10 & 0xE00C200 | 0x60;
  _InterlockedOr(v17, 0);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: end 0x%X\n", 0);
  LOBYTE(v11) = 1;
  v12 = Crashdump_Command_Stop(a1 + 320, v11);
  if ( v12 < 0 )
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Command_Stop failed with error 0x%X\n", v12);
  v13 = Crashdump_Register_StopController(a1);
  if ( v13 >= 0 && *(_BYTE *)(a1 + 617) )
  {
    v14 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 96LL) + 32LL);
    *(_QWORD *)(v14 + 144) = *(_QWORD *)(a1 + 264);
    *(_DWORD *)(v14 + 120) = *(_DWORD *)(a1 + 272);
    *(_DWORD *)(v14 + 124) = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(v14 + 128) = *(_DWORD *)(a1 + 280);
    *(_DWORD *)(v14 + 132) = *(_DWORD *)(a1 + 284);
    *(_DWORD *)(v14 + 136) = *(_DWORD *)(a1 + 288);
    *(_QWORD *)(v14 + 152) = *(_QWORD *)(a1 + 296);
    *(_OWORD *)(v14 + 168) = *(_OWORD *)(a1 + 304);
    v15 = Crashdump_Register_SaveStateForHybridSleep(a1);
    v13 = v15;
    if ( v15 >= 0 )
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SaveStateForHybridSleep succeeded.\n");
    else
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_SaveStateForHybridSleep failed with error 0x%X\n", v15);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Cleanup: end\n");
  return (unsigned int)v13;
}
