/*
 * XREFs of ACPIInternalGetDeviceFromNSOBJ @ 0x1C003C92C
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x1C001C5E4 (ACPIDeviceRecordDependencies.c)
 *     AcquireDeviceFirmwareLock @ 0x1C0036FEC (AcquireDeviceFirmwareLock.c)
 *     TranslateBindMutexResources @ 0x1C0037768 (TranslateBindMutexResources.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0038C2C (ACPIIsPowerNodeMissingDependencies.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C00403E0 (InternalRawAccessOpRegionHandler.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007A9F8 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalGetDeviceFromNSOBJ(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  KIRQL v7; // bp
  __int64 v8; // rdx
  void *v9; // rcx

  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  if ( v8 )
  {
    if ( a4 )
      *a4 = *(_DWORD *)(v8 + 312);
    if ( a2 )
    {
      v9 = *(void **)(v8 + 712);
      *a2 = v9;
      if ( v9 )
        ObfReferenceObject(v9);
    }
  }
  else
  {
    if ( a4 )
      *a4 = 0;
    if ( a2 )
      *a2 = 0LL;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
}
