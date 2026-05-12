/*
 * XREFs of RaidUnitEndDeviceBusy @ 0x1C0034254
 * Callers:
 *     RaUnitStartIo @ 0x1C0004AC0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0033F70 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0011294 (RaidUnitPoFxIdleComponent.c)
 */

bool __fastcall RaidUnitEndDeviceBusy(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  char v3; // al
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_BYTE *)(v2 + 16);
  *(_QWORD *)(v2 + 16) = 0LL;
  v5 = v3 & 3;
  return RaidUnitPoFxIdleComponent(a1, 0, 0, &v5);
}
