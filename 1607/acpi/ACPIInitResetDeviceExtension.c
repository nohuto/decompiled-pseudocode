/*
 * XREFs of ACPIInitResetDeviceExtension @ 0x1C004FB94
 * Callers:
 *     ACPIInitDeleteChildDeviceList @ 0x1C0029A1C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0046610 (ACPIBusIrpRemoveDevice.c)
 *     ACPIDispatchIrpDepRemoveDevice @ 0x1C0046E20 (ACPIDispatchIrpDepRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C004E780 (ACPIFilterFastIoDetachCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C00449F0 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C004F96C (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x1C00500AC (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C0055F54 (PnpiCleanupForceActiveBothInterrupts.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C009995C (AcpiArblibFreeArbiterInstance.c)
 */

void __fastcall ACPIInitResetDeviceExtension(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r15
  KIRQL v3; // r13
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // r14
  void *v7; // rsi
  void *v8; // rdi
  struct _DEVICE_OBJECT *v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _BYTE v14[24]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  memset(v14, 0, sizeof(v14));
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v4 = *(_QWORD *)(a1 + 8);
  if ( (v4 & 0x40) != 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v5 = *(void **)(a1 + 728);
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    else
    {
      v1 = *(struct _DEVICE_OBJECT **)(a1 + 728);
    }
  }
  PnpiCleanupForceActiveBothInterrupts(a1);
  ACPIInternalInterruptPolarityCacheCleanup(a1);
  v6 = *(void **)(a1 + 640);
  if ( v6 )
    *(_QWORD *)(a1 + 640) = 0LL;
  v7 = *(void **)(a1 + 624);
  if ( v7 )
    *(_QWORD *)(a1 + 624) = 0LL;
  v8 = *(void **)(a1 + 632);
  if ( v8 )
    *(_QWORD *)(a1 + 632) = 0LL;
  v9 = *(struct _DEVICE_OBJECT **)(a1 + 720);
  v10 = 3LL;
  if ( !v9 )
    goto LABEL_19;
  v9->DeviceExtension = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  if ( (*(_QWORD *)(a1 + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(a1 + 184) )
  {
    v11 = 3LL;
    v12 = (_QWORD *)(a1 + 192);
    do
    {
      *(_QWORD *)&v14[(_QWORD)v12 - a1 - 192] = *v12;
      *v12++ = 0LL;
      --v11;
    }
    while ( v11 );
  }
  if ( ACPIInitDereferenceDeviceExtensionLocked((volatile signed __int32 *)a1) )
  {
    v7 = 0LL;
    v8 = 0LL;
    v6 = 0LL;
  }
  else
  {
LABEL_19:
    *(_QWORD *)(a1 + 728) = 0LL;
    *(_QWORD *)(a1 + 736) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 912), 0xFFFFFFFFFFFFFFBFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 912), 0xFFFFFFFFDFFFFFFFuLL);
    if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFC00uLL);
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 8uLL);
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 4uLL);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  v13 = v14;
  do
  {
    if ( *v13 )
      AcpiArblibFreeArbiterInstance(*v13);
    ++v13;
    --v10;
  }
  while ( v10 );
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v1 )
    IoDetachDevice(v1);
  if ( v9 )
    IoDeleteDevice(v9);
}
