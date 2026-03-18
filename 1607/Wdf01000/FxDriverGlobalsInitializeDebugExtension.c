/*
 * XREFs of FxDriverGlobalsInitializeDebugExtension @ 0x1C007BE34
 * Callers:
 *     FxRegistrySettingsInitialize @ 0x1C0018950 (FxRegistrySettingsInitialize.c)
 * Callees:
 *     memset @ 0x1C003C780 (memset.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C007BF90 (FxVerifierGetObjectDebugInfo.c)
 *     FxVerifierQueryTrackPower @ 0x1C007C0D4 (FxVerifierQueryTrackPower.c)
 */

void __fastcall FxDriverGlobalsInitializeDebugExtension(_FX_DRIVER_GLOBALS *FxDriverGlobals, void *Key)
{
  FxDriverGlobalsDebugExtension *PoolWithTag; // rax
  FxDriverGlobalsDebugExtension *v5; // rbx

  PoolWithTag = (FxDriverGlobalsDebugExtension *)ExAllocatePoolWithTag(
                                                   ExDefaultNonPagedPoolType,
                                                   0x1C8uLL,
                                                   FxDriverGlobals->Tag);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(FxDriverGlobalsDebugExtension));
    v5->AllocatedTagTrackersLock.m_Lock = 0LL;
    v5->AllocatedTagTrackersLock.m_DbgFlagIsInitialized = 1;
    v5->AllocatedTagTrackersListHead.Blink = &v5->AllocatedTagTrackersListHead;
    v5->AllocatedTagTrackersListHead.Flink = &v5->AllocatedTagTrackersListHead;
    v5->TrackPower = FxTrackPowerNone;
    FxDriverGlobals->DebugExtension = v5;
    if ( Key )
    {
      v5->ObjectDebugInfo = FxVerifierGetObjectDebugInfo(Key, FxDriverGlobals);
      FxVerifierQueryTrackPower(Key, &v5->TrackPower);
    }
    v5->AllocatedMdlsLock = 0LL;
  }
}
