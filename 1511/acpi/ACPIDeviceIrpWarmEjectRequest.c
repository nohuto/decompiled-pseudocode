/*
 * XREFs of ACPIDeviceIrpWarmEjectRequest @ 0x1C0038B40
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x1C00235F0 (ACPIFilterIrpSetPower.c)
 *     ACPIDockIrpSetSystemPower @ 0x1C003513C (ACPIDockIrpSetSystemPower.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C0036C64 (ACPIBusIrpSetSystemPower.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AF5C (ACPIDeviceInitializePowerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDeviceIrpWarmEjectRequest(__int64 a1, __int64 a2, _SLIST_ENTRY *a3, char a4)
{
  __int64 v4; // rax
  int v5; // r10d
  int v6; // ebx

  v4 = *(_QWORD *)(a2 + 184);
  v5 = (*(_DWORD *)(v4 + 8) >> 8) & 0xF;
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v4 + 3) |= 1u;
  v6 = *(_DWORD *)(a2 + 48);
  if ( v6 >= 0 )
    return ACPIDeviceInitializePowerRequest(a1, (POWER_STATE)v5, a3, a2, 0, 3, a4 != 0 ? 0x80 : 0);
  ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(a1, a2, (unsigned int)v6);
  return (unsigned int)v6;
}
