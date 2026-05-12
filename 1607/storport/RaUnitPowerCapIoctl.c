/*
 * XREFs of RaUnitPowerCapIoctl @ 0x1C003557C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 */

NTSTATUS __fastcall RaUnitPowerCapIoctl(__int64 a1, IRP *a2)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x18 )
  {
    v2 = -1073741820;
LABEL_3:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v2);
  }
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v2 = -1073741808;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    goto LABEL_3;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
    goto LABEL_3;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
}
