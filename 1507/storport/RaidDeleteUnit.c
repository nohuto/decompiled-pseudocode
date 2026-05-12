/*
 * XREFs of RaidDeleteUnit @ 0x1C000FBA4
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C000A158 (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x1C0030880 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0030C10 (RaUnitDeleteDeviceIrp.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x1C000FA14 (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C000FBFC (RaidUnitSavePowerCycleCount.c)
 *     RaidSecondaryDumpDeregister @ 0x1C00398D8 (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rax

  RaidUnitSavePowerCycleCount();
  if ( (*(_BYTE *)(a1 + 146) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && a1 == *(_QWORD *)(v2 + 5144) )
    *(_QWORD *)(v2 + 5144) = 0LL;
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1536) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1528));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
