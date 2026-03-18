/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x1C0018474
 * Callers:
 *     FxInitialize @ 0x1C0017CE8 (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1C003C440 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // al
  unsigned int BugCheckDriverInfoIndex; // ecx
  KIRQL v4; // si
  _FX_DUMP_DRIVER_INFO_ENTRY *v5; // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int v7; // ebp
  _FX_DUMP_DRIVER_INFO_ENTRY *PoolWithTag; // rax
  _FX_DUMP_DRIVER_INFO_ENTRY *v9; // rdi
  _FX_DUMP_DRIVER_INFO_ENTRY *BugCheckDriverInfo; // rcx

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( FxLibraryGlobals.BugCheckDriverInfo )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
    BugCheckDriverInfoIndex = FxLibraryGlobals.BugCheckDriverInfoIndex;
    v4 = v2;
    if ( FxLibraryGlobals.BugCheckDriverInfoIndex >= FxLibraryGlobals.BugCheckDriverInfoCount )
    {
      if ( FxLibraryGlobals.BugCheckDriverInfoCount > 0x23F )
        goto $Done_9;
      v7 = FxLibraryGlobals.BugCheckDriverInfoCount + 10;
      PoolWithTag = (_FX_DUMP_DRIVER_INFO_ENTRY *)ExAllocatePoolWithTag(
                                                    ExDefaultNonPagedPoolType,
                                                    56LL * (FxLibraryGlobals.BugCheckDriverInfoCount + 10),
                                                    0x72447846u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto $Done_9;
      memmove(PoolWithTag, FxLibraryGlobals.BugCheckDriverInfo, 56LL * FxLibraryGlobals.BugCheckDriverInfoCount);
      BugCheckDriverInfo = FxLibraryGlobals.BugCheckDriverInfo;
      FxLibraryGlobals.BugCheckDriverInfo = v9;
      FxLibraryGlobals.BugCheckDriverInfoCount = v7;
      ExFreePoolWithTag(BugCheckDriverInfo, 0);
      BugCheckDriverInfoIndex = FxLibraryGlobals.BugCheckDriverInfoIndex;
    }
    v5 = &FxLibraryGlobals.BugCheckDriverInfo[BugCheckDriverInfoIndex];
    v5->FxDriverGlobals = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *(_QWORD *)&v5->Version.Major = *(_QWORD *)&WdfBindInfo->Version.Major;
    v5->Version.Build = WdfBindInfo->Version.Build;
    *(_OWORD *)v5->DriverName = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)&v5->DriverName[16] = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v5->DriverName[31] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = FxLibraryGlobals.BugCheckDriverInfoIndex++;
$Done_9:
    KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v4);
  }
}
