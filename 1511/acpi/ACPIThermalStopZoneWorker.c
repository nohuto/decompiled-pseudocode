/*
 * XREFs of ACPIThermalStopZoneWorker @ 0x1C0040BB0
 * Callers:
 *     ACPIThermalWorker @ 0x1C006CD70 (ACPIThermalWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C001A42C (ACPIThermalCompletePendingIrps.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C003FA10 (ACPIUnregisterForDeviceNotifications.c)
 *     AcpiThermalDestroyContraints @ 0x1C0040D7C (AcpiThermalDestroyContraints.c)
 */

LONG __fastcall ACPIThermalStopZoneWorker(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rcx
  IRP *v4; // rcx
  void *v5; // rcx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  void *v8; // rcx
  KIRQL v9; // al
  __int64 v10; // r9
  _QWORD *v11; // r8

  v1 = *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(v1 + 274) )
    IoCancelIrp(*(PIRP *)(v1 + 208));
  ACPIThermalCompletePendingIrps(a1);
  v3 = *(void **)(v1 + 240);
  if ( v3 )
  {
    IoUnregisterPlugPlayNotificationEx(v3);
    IoFreeIrp(*(PIRP *)(v1 + 208));
    ObfDereferenceObject(*(PVOID *)(v1 + 216));
    *(_QWORD *)(v1 + 240) = 0LL;
  }
  v4 = *(IRP **)(v1 + 192);
  *(_QWORD *)(v1 + 216) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  if ( v4 )
  {
    IoFreeIrp(v4);
    *(_QWORD *)(v1 + 192) = 0LL;
  }
  v5 = *(void **)(v1 + 200);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *(_QWORD *)(v1 + 200) = 0LL;
  }
  v6 = *(volatile signed __int32 **)(v1 + 112);
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    *(_QWORD *)(v1 + 112) = 0LL;
  }
  v7 = *(volatile signed __int32 **)(v1 + 120);
  if ( v7 )
  {
    AMLIDereferenceHandleEx(v7);
    *(_QWORD *)(v1 + 120) = 0LL;
  }
  v8 = *(void **)(v1 + 312);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v1 + 304) = 0LL;
    *(_QWORD *)(v1 + 312) = 0LL;
  }
  AcpiThermalDestroyContraints(a1);
  if ( (*(_DWORD *)(a1 + 184) & 0x1000) != 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    v10 = *(_QWORD *)(a1 + 200);
    v11 = *(_QWORD **)(a1 + 208);
    if ( *(_QWORD *)(v10 + 8) != a1 + 200 || *v11 != a1 + 200 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v9);
  }
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 712));
  if ( *(_QWORD *)(a1 + 216) )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 712), 2u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 216), 0x54706341u);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  ACPIThermalLoopEx(a1, 7455, 0);
  return KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
}
