/*
 * XREFs of RaUnitScsiMiniportIoctl @ 0x1C00106B4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0011294 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0011398 (RaidUnitPoFxActivateComponent.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C0011670 (RaidGetSrbIoctlFromIrp.c)
 */

__int64 __fastcall RaUnitScsiMiniportIoctl(__int64 a1, IRP *a2)
{
  signed int SrbIoctlFromIrp; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((_DWORD)a2, (unsigned int)&v7, (unsigned int)&v9, (unsigned int)&v8, 1);
  if ( SrbIoctlFromIrp < 0 )
    return RaidCompleteRequestEx(a2, 0, SrbIoctlFromIrp);
  RaidUnitPoFxActivateComponent(a1, 0LL, 1LL, &v8);
  v5 = RaidAdapterScsiMiniportIoctlWithAddress(
         *(_QWORD *)(a1 + 24),
         a2,
         *(unsigned __int8 *)(a1 + 88),
         *(unsigned __int8 *)(a1 + 89),
         *(unsigned __int8 *)(a1 + 90),
         1);
  RaidUnitPoFxIdleComponent(a1, 0LL, 0LL, &v8);
  return v5;
}
