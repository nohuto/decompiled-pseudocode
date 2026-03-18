/*
 * XREFs of ACPIBusIrpSetPower @ 0x1C0021CF0
 * Callers:
 *     ACPICMButtonSetPower @ 0x1C00366B0 (ACPICMButtonSetPower.c)
 * Callees:
 *     ACPIDockIrpSetDevicePower @ 0x1C0021D20 (ACPIDockIrpSetDevicePower.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C0035FA0 (ACPIBusIrpSetSystemPower.c)
 */

__int64 __fastcall ACPIBusIrpSetPower(struct _DEVICE_OBJECT *a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = a2[23];
  *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v2 + 16) )
    ACPIDockIrpSetDevicePower();
  else
    ACPIBusIrpSetSystemPower(a1, a2);
  return 259LL;
}
