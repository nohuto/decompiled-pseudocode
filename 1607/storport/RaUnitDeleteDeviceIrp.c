/*
 * XREFs of RaUnitDeleteDeviceIrp @ 0x1C0035068
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C003573C (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaUnitWaitForRemoveLock @ 0x1C00100A0 (RaUnitWaitForRemoveLock.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 *     RaidAdapterRemoveUnit @ 0x1C0012600 (RaidAdapterRemoveUnit.c)
 *     RaidDeleteUnit @ 0x1C0014FB0 (RaidDeleteUnit.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C0027A90 (RaidAdapterRemoveZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C0038D3C (RaidUnitUnRegisterInterfaces.c)
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
  RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
  v5 = RaUnitWaitForRemoveLock(a1);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = v5;
  if ( v6 )
  {
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(v6 + 296);
    if ( (*(_BYTE *)(a1 + 152) & 0x20) != 0 )
      RaidAdapterRemoveZombieUnit(v6, a1);
    else
      RaidAdapterRemoveUnit(v6, a1);
  }
  v8 = (*(_BYTE *)(a1 + 152) & 0x40) != 0;
  RaidDeleteUnit(a1);
  if ( v8 && v6 )
  {
    v9 = *(struct _DEVICE_OBJECT **)(v6 + 32);
    *(_BYTE *)(v6 + 106) = 1;
    IoInvalidateDeviceRelations(v9, BusRelations);
  }
  return RaidCompleteRequestEx(a2, 0, v7);
}
