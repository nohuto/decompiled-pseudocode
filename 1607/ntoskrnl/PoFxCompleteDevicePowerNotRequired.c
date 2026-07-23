/*
 * XREFs of PoFxCompleteDevicePowerNotRequired @ 0x140132424
 * Callers:
 *     <none>
 * Callees:
 *     PopFxQueueWorkOrder @ 0x1400C0F04 (PopFxQueueWorkOrder.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
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
