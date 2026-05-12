/*
 * XREFs of RaUnitDeleteDeviceIrp @ 0x1C0030C10
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C0031338 (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0009B34 (RaUnitWaitForRemoveLock.c)
 *     RaidAdapterRemoveUnit @ 0x1C000C3DC (RaidAdapterRemoveUnit.c)
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
 *     RaidDeleteUnit @ 0x1C000FBA4 (RaidDeleteUnit.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C0022100 (RaidAdapterRemoveZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C00342AC (RaidUnitUnRegisterInterfaces.c)
 */

__int64 __fastcall RaUnitDeleteDeviceIrp(__int64 a1, IRP *a2)
{
  int v2; // eax
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  bool v8; // bl
  struct _DEVICE_OBJECT *v9; // rcx

  v2 = *(_DWORD *)(a1 + 40) - 5;
  *(_DWORD *)(a1 + 40) = 6;
  if ( (v2 & 0xFFFFFFFD) != 0 )
    RaidUnitUnRegisterInterfaces();
  RaUnitReleaseRemoveLock(a1);
  v5 = RaUnitWaitForRemoveLock(a1);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = v5;
  if ( v6 )
  {
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(v6 + 296);
    if ( (*(_BYTE *)(a1 + 144) & 0x20) != 0 )
      RaidAdapterRemoveZombieUnit(v6, a1);
    else
      RaidAdapterRemoveUnit(v6, a1);
  }
  v8 = (*(_BYTE *)(a1 + 144) & 0x40) != 0;
  RaidDeleteUnit(a1);
  if ( v8 && v6 )
  {
    v9 = *(struct _DEVICE_OBJECT **)(v6 + 32);
    *(_BYTE *)(v6 + 106) = 1;
    IoInvalidateDeviceRelations(v9, BusRelations);
  }
  return RaidCompleteRequestEx(a2, 0, v7);
}
