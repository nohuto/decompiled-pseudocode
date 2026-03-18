/*
 * XREFs of ACPIIsPowerRequestBlocked @ 0x1C001C5C0
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001BE00 (ACPIDevicePowerDpc.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C0038CCC (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIIsPowerRequestBlocked(__int64 a1)
{
  int v1; // r8d
  char v2; // dl

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x10000000) != 0 )
    return 1;
  v2 = 0;
  if ( (v1 & 0x1000000) != 0
    && ((v1 & 0x4000000) != 0
     || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 904LL) & 0x40) != 0
     && (*(_QWORD *)(a1 + 64) != a1 + 64 || (v1 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
  {
    return 1;
  }
  return v2;
}
