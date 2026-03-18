/*
 * XREFs of VF_MARK_FOR_DEFERRED_REMOVE @ 0x140706164
 * Callers:
 *     VfIoDeleteDevice @ 0x14070D810 (VfIoDeleteDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall VF_MARK_FOR_DEFERRED_REMOVE(__int64 a1)
{
  KIRQL v2; // al
  ULONG_PTR i; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&Lock);
  for ( i = ViAdapterList; &ViAdapterList != (ULONG_PTR *)i; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 )
      *(_BYTE *)(i + 32) = 1;
  }
  KeReleaseSpinLock(&Lock, v2);
}
