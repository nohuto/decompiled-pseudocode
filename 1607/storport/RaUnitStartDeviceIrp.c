/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1C0058E58
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidIsUnitQueueLocked @ 0x1C0009FEC (RaidIsUnitQueueLocked.c)
 *     RaidUnlockUnitQueue @ 0x1C0009FF4 (RaidUnlockUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x1C0010410 (RaidUnitRestartQueue.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0010418 (RaidUnitConvertToNormalUnit.c)
 *     RaidGetD3ColdInterface @ 0x1C00104A4 (RaidGetD3ColdInterface.c)
 *     RaidUnitRegisterInterfaces @ 0x1C001094C (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C001100C (RaidUnitGetInitialTimestamp.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C0011F10 (RaidUnitGetPowerCycleCount.c)
 *     RaidGetD3ColdCapability @ 0x1C001899C (RaidGetD3ColdCapability.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaUnitInitializeWMI @ 0x1C0058E04 (RaUnitInitializeWMI.c)
 *     RaidUnitGetDeviceParameters @ 0x1C005A2F4 (RaidUnitGetDeviceParameters.c)
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
    if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 1464)) >= 0 && *(_QWORD *)(a1 + 24) )
    {
      v7 = (*(_DWORD *)(a1 + 1536) & 8) == 0 && RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1464));
      *(_BYTE *)(a1 + 153) ^= (*(_BYTE *)(a1 + 153) ^ (2 * v7)) & 2;
    }
    else
    {
      *(_BYTE *)(a1 + 153) &= ~2u;
    }
    if ( RaidIsUnitControlSupported(a1, 2) )
      RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
    *(_BYTE *)(a1 + 153) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
