/*
 * XREFs of RaidDeleteUnit @ 0x1C0011E4C
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C000C390 (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x1C00319A0 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0031D30 (RaUnitDeleteDeviceIrp.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x1C0011CBC (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C0011EC8 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0023B80 (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C003C30C (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rcx

  RaidUnitSavePowerCycleCount();
  if ( (*(_BYTE *)(a1 + 146) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && a1 == *(_QWORD *)(v2 + 5144) )
    *(_QWORD *)(v2 + 5144) = 0LL;
  if ( *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 2528)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2560), 0, 1) == 1 )
  {
    RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1552) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1544));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
