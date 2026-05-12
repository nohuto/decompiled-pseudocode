/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1C004D4DC
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaidIsUnitQueueLocked @ 0x1C0005C4C (RaidIsUnitQueueLocked.c)
 *     RaidUnlockUnitQueue @ 0x1C0005C54 (RaidUnlockUnitQueue.c)
 *     RaidGetD3ColdCapability @ 0x1C0007A00 (RaidGetD3ColdCapability.c)
 *     RaidUnitRestartQueue @ 0x1C0009DF0 (RaidUnitRestartQueue.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0009EA0 (RaidUnitConvertToNormalUnit.c)
 *     RaidGetD3ColdInterface @ 0x1C0009EBC (RaidGetD3ColdInterface.c)
 *     RaidUnitRegisterInterfaces @ 0x1C000A35C (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C000AA1C (RaidUnitGetInitialTimestamp.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C000D798 (RaidUnitGetPowerCycleCount.c)
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaUnitInitializeWMI @ 0x1C004D488 (RaUnitInitializeWMI.c)
 *     RaidUnitGetDeviceParameters @ 0x1C004F668 (RaidUnitGetDeviceParameters.c)
 */

__int64 __fastcall RaUnitStartDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  bool v7; // al

  if ( *(_DWORD *)(a1 + 40) != 1 )
  {
    RaUnitInitializeWMI(a1);
    RaidUnitRegisterInterfaces(a1);
    if ( (unsigned int)RaidIsUnitQueueLocked(a1) )
    {
      RaidUnlockUnitQueue(v4);
      RaidUnitRestartQueue(v5);
    }
    *(_DWORD *)(a1 + 40) = 1;
    RaidUnitConvertToNormalUnit(a1);
    if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 1448)) >= 0 && *(_QWORD *)(a1 + 24) )
    {
      v7 = (*(_DWORD *)(a1 + 1520) & 8) == 0 && RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1448));
      *(_BYTE *)(a1 + 145) ^= (*(_BYTE *)(a1 + 145) ^ (2 * v7)) & 2;
    }
    else
    {
      *(_BYTE *)(a1 + 145) &= ~2u;
    }
    if ( RaidIsUnitControlSupported(a1, 2) )
      RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
    *(_BYTE *)(a1 + 145) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
