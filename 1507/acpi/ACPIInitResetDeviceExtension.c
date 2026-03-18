/*
 * XREFs of ACPIInitResetDeviceExtension @ 0x1C003C5AC
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0035D00 (ACPIBusIrpRemoveDevice.c)
 *     ACPIDispatchIrpDepRemoveDevice @ 0x1C0036270 (ACPIDispatchIrpDepRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C003B630 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C003C070 (ACPIInitDeleteChildDeviceList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C0034FF8 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C003C388 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x1C003C9C4 (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C0040770 (PnpiCleanupForceActiveBothInterrupts.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C0079070 (AcpiArblibFreeArbiterInstance.c)
 */

void __fastcall ACPIInitResetDeviceExtension(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r15
  KIRQL v3; // r13
  void *v4; // rcx
  void *v5; // r14
  void *v6; // rsi
  void *v7; // rdi
  struct _DEVICE_OBJECT *v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  _BYTE v13[24]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  memset(v13, 0, sizeof(v13));
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)a1 & 0x40) != 0 )
  {
    if ( (*(_QWORD *)a1 & 0x20) != 0 )
    {
      v4 = *(void **)(a1 + 720);
      if ( v4 )
        ObfDereferenceObject(v4);
    }
    else
    {
      v1 = *(struct _DEVICE_OBJECT **)(a1 + 720);
    }
  }
  PnpiCleanupForceActiveBothInterrupts(a1);
  ACPIInternalInterruptPolarityCacheCleanup(a1);
  v5 = *(void **)(a1 + 632);
  if ( v5 )
    *(_QWORD *)(a1 + 632) = 0LL;
  v6 = *(void **)(a1 + 616);
  if ( v6 )
    *(_QWORD *)(a1 + 616) = 0LL;
  v7 = *(void **)(a1 + 624);
  if ( v7 )
    *(_QWORD *)(a1 + 624) = 0LL;
  v8 = *(struct _DEVICE_OBJECT **)(a1 + 712);
  v9 = 3LL;
  if ( !v8 )
    goto LABEL_19;
  v8->DeviceExtension = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  if ( (*(_QWORD *)a1 & 0x2000000000LL) != 0 && *(_BYTE *)(a1 + 176) )
  {
    v10 = 3LL;
    v11 = (_QWORD *)(a1 + 184);
    do
    {
      *(_QWORD *)&v13[(_QWORD)v11 - a1 - 184] = *v11;
      *v11++ = 0LL;
      --v10;
    }
    while ( v10 );
  }
  if ( ACPIInitDereferenceDeviceExtensionLocked((volatile signed __int32 *)a1) )
  {
    v6 = 0LL;
    v7 = 0LL;
    v5 = 0LL;
  }
  else
  {
LABEL_19:
    *(_QWORD *)(a1 + 720) = 0LL;
    *(_QWORD *)(a1 + 728) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 904), 0xFFFFFFFFFFFFFFBFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 904), 0xFFFFFFFFDFFFFFFFuLL);
    if ( (*(_BYTE *)a1 & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFC00uLL);
      _InterlockedOr64((volatile signed __int64 *)a1, 8uLL);
      _InterlockedOr64((volatile signed __int64 *)a1, 4uLL);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  v12 = v13;
  do
  {
    if ( *v12 )
      AcpiArblibFreeArbiterInstance(*v12);
    ++v12;
    --v9;
  }
  while ( v9 );
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v1 )
    IoDetachDevice(v1);
  if ( v8 )
    IoDeleteDevice(v8);
}
