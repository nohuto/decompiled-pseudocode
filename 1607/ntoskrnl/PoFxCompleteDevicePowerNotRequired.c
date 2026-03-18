/*
 * XREFs of PoFxCompleteDevicePowerNotRequired @ 0x140131EB4
 * Callers:
 *     <none>
 * Callees:
 *     PopFxQueueWorkOrder @ 0x1400C3074 (PopFxQueueWorkOrder.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxBugCheck @ 0x1402022F4 (PopFxBugCheck.c)
 */

void __fastcall PoFxCompleteDevicePowerNotRequired(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // bp

  v2 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 40));
  if ( !v2 )
  {
    v3 = (KSPIN_LOCK *)(BugCheckParameter2 + 328);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 328));
    if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
      PopFxQueueWorkOrder(&PopFxSystemWorkQueue, (PLIST_ENTRY)(BugCheckParameter2 + 272), BugCheckParameter2, 0);
    KeReleaseSpinLock(v3, v4);
  }
  if ( v2 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 0LL);
}
