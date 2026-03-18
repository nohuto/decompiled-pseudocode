/*
 * XREFs of AcpiDiagTraceControlCallback @ 0x1C0033400
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceDeviceCoolingRundown @ 0x1C0033608 (AcpiDiagTraceDeviceCoolingRundown.c)
 *     AcpiDiagTraceFanRundown @ 0x1C0033AB0 (AcpiDiagTraceFanRundown.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C0033C4C (AcpiDiagTraceThermalZoneRundown.c)
 */

void __fastcall AcpiDiagTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  KIRQL v8; // di
  __int64 *i; // rbx
  KIRQL v10; // al
  __int64 *v11; // rbx
  KIRQL v12; // di

  if ( ControlCode == 2 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    v7 = AcpiThermalClientList;
    v8 = v4;
    while ( (__int64 *)v7 != &AcpiThermalClientList )
    {
      if ( *(_QWORD *)(v7 + 16) != v7 + 16 )
      {
        LOBYTE(v6) = *(_BYTE *)(v7 + 42);
        LOBYTE(v5) = *(_BYTE *)(v7 + 43);
        AcpiDiagTraceDeviceCoolingRundown(*(_QWORD *)(v7 + 32), v5, v6);
      }
      v7 = *(_QWORD *)v7;
    }
    for ( i = (__int64 *)AcpiThermalZoneList; i != &AcpiThermalZoneList; i = (__int64 *)*i )
      AcpiDiagTraceThermalZoneRundown(i - 25);
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v8);
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
    v11 = (__int64 *)AcpiFanList;
    v12 = v10;
    while ( v11 != &AcpiFanList )
    {
      AcpiDiagTraceFanRundown(v11 - 24);
      v11 = (__int64 *)*v11;
    }
    KeReleaseSpinLock(&AcpiFanLock, v12);
  }
}
