/*
 * XREFs of ACPICMButtonSetPower @ 0x1C00366B0
 * Callers:
 *     ACPICMLidSetPowerCompletion @ 0x1C0036880 (ACPICMLidSetPowerCompletion.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBusIrpSetPower @ 0x1C0021CF0 (ACPIBusIrpSetPower.c)
 *     OSNotifyDeviceWake @ 0x1C003E0AC (OSNotifyDeviceWake.c)
 */

__int64 __fastcall ACPICMButtonSetPower(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r9
  int v6; // r8d

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v5 = a2[23];
  *(_BYTE *)(v5 + 3) |= 1u;
  if ( *(_DWORD *)(v5 + 16) != 1
    && (*(_DWORD *)(DeviceExtension + 192) & 4) != 0
    && (*(_QWORD *)DeviceExtension & 0x10000LL) != 0 )
  {
    v6 = (*(_DWORD *)(v5 + 8) >> 8) & 0xF;
    if ( v6 == 1 )
    {
      OSNotifyDeviceWake(*(_QWORD *)(DeviceExtension + 704));
    }
    else if ( *(_DWORD *)(DeviceExtension + 480) >= v6 && (*(_QWORD *)DeviceExtension & 0x1000000000000000LL) == 0 )
    {
      PoRequestPowerIrp(DeviceObject, 0, (POWER_STATE)v6, (PREQUEST_POWER_COMPLETE)PciConfigPinToLine, 0LL, 0LL);
    }
  }
  ACPIBusIrpSetPower(DeviceObject, a2);
  return 259LL;
}
