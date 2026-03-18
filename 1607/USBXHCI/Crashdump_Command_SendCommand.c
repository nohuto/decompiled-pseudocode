/*
 * XREFs of Crashdump_Command_SendCommand @ 0x1C00375D0
 * Callers:
 *     Crashdump_Command_TestCommandRingOperation @ 0x1C0037900 (Crashdump_Command_TestCommandRingOperation.c)
 *     Crashdump_Endpoint_SetDequeuePointer @ 0x1C0038198 (Crashdump_Endpoint_SetDequeuePointer.c)
 *     Crashdump_Endpoint_StopEndpoint @ 0x1C0038264 (Crashdump_Endpoint_StopEndpoint.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C00387DC (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C0038A28 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0039444 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     Crashdump_UsbDevice_SendEnableSlotCommand @ 0x1C0039680 (Crashdump_UsbDevice_SendEnableSlotCommand.c)
 *     Crashdump_UsbDevice_SendResetDeviceCommand @ 0x1C003972C (Crashdump_UsbDevice_SendResetDeviceCommand.c)
 * Callees:
 *     Crashdump_EventRing_Poll @ 0x1C0036F78 (Crashdump_EventRing_Poll.c)
 */

__int64 __fastcall Crashdump_Command_SendCommand(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int8 v11; // cl
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_SendCommand: begin\n");
  *(_DWORD *)(a2 + 12) ^= (*(_DWORD *)(a2 + 12) ^ (*(_DWORD *)(a1 + 56) != 1)) & 1;
  *(_OWORD *)*(_QWORD *)(a1 + 48) = *(_OWORD *)a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL) ^= (*(_DWORD *)(a1 + 56) ^ *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL)) & 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 48) + 12LL) ^= 1u;
  _InterlockedOr(v13, 0);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) == 0;
  **(_DWORD **)(**(_QWORD **)(a1 + 8) + 48LL) = 0;
  _InterlockedOr(v13, 0);
  v7 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 584LL) || (v8 = v7 + 200, *(_BYTE *)(v7 + 624)) )
    v8 = v7 + 72;
  v9 = Crashdump_EventRing_Poll(
         v8,
         33,
         v6,
         a1,
         (__int64 (__fastcall *)(__int64, __int64, int *))Crashdump_Command_EventRingCallback);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = *(_BYTE *)(a1 + 71);
    LODWORD(v14) = *(unsigned __int8 *)(a1 + 75);
    if ( v11 == 1 )
    {
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Command Completion event: Completion code: %u, slotId: %u\n", 1, v14);
      if ( a3 )
        *a3 = *(_OWORD *)(a1 + 60);
    }
    else
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Command failed, completion code: %u, slotId: %u\n", v11, v14);
      v10 = -1073741823;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Did not receive Event TRB, status 0x%X\n", v9);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_SendCommand: end 0x%X\n", v10);
  return v10;
}
