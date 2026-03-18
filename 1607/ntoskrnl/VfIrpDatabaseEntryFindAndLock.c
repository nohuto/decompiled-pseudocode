/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x140716A10
 * Callers:
 *     IovCancelIrp @ 0x140700D64 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x14070A890 (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x14070B044 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x14070B0B0 (IovpCompleteRequest1.c)
 *     VfIoFreeIrp @ 0x14070BC68 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14070BE00 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x14070C078 (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x14070C0AC (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x14070D020 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140716AB4 (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x140223CA0 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140223CD0 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140702BB8 (VfUtilAddressRangeFitNoLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x140716C98 (ViIrpDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpDatabaseEntryFindAndLock(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 Pointer; // rax
  KIRQL v4; // bl
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( VfIrpDatabaseInitialized
    && VfUtilAddressRangeFitNoLock(
         (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12))),
         a1,
         a1 + 208) )
  {
    ViIrpDatabaseAcquireLockShared(&v6);
    Pointer = ViIrpDatabaseFindPointer(a1);
    v1 = Pointer;
    if ( Pointer )
    {
      _InterlockedIncrement((volatile signed __int32 *)(Pointer + 20));
      v4 = v6;
      ViIrpDatabaseReleaseLockShared(v6);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 8));
      *(_BYTE *)(v1 + 16) = v4;
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 20));
      if ( !*(_DWORD *)(v1 + 24) )
      {
        VfIrpDatabaseEntryReleaseLock(v1);
        return 0LL;
      }
    }
    else
    {
      ViIrpDatabaseReleaseLockShared(v6);
    }
  }
  return v1;
}
