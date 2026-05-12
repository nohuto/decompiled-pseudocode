/*
 * XREFs of RaUnitScsiMiniportIoctl @ 0x1C000F810
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C000EEC4 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000EFC8 (RaidUnitPoFxActivateComponent.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C000F70C (RaidGetSrbIoctlFromIrp.c)
 */

__int64 __fastcall RaUnitScsiMiniportIoctl(__int64 a1, IRP *a2)
{
  signed int SrbIoctlFromIrp; // eax
  unsigned int v5; // ebx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, v7, &v9, &v8, 1);
  if ( SrbIoctlFromIrp < 0 )
    return RaidCompleteRequestEx(a2, 0, SrbIoctlFromIrp);
  RaidUnitPoFxActivateComponent(a1, 0, 1LL, &v8);
  v5 = RaidAdapterScsiMiniportIoctlWithAddress(
         *(_QWORD *)(a1 + 24),
         a2,
         *(_BYTE *)(a1 + 88),
         *(_BYTE *)(a1 + 89),
         *(_BYTE *)(a1 + 90),
         1);
  RaidUnitPoFxIdleComponent(a1, 0, 0, &v8);
  return v5;
}
