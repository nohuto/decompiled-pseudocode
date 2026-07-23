/*
 * XREFs of ViIsActiveChannelWcb @ 0x140222ADC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 *     ViAdapterCallback @ 0x1407084B8 (ViAdapterCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall ViIsActiveChannelWcb(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  __int64 *v5; // rbx
  KIRQL v6; // dl
  __int64 i; // rax
  __int64 v8; // rax

  v2 = (KSPIN_LOCK *)(a1 + 144);
  v4 = 0;
  v5 = (__int64 *)(a1 + 128);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  for ( i = *v5; ; i = *(_QWORD *)(v8 + 72) )
  {
    v8 = i - 72;
    if ( v5 == (__int64 *)(v8 + 72) )
      break;
    if ( a2 == v8 )
    {
      v4 = 1;
      break;
    }
  }
  KeReleaseSpinLock(v2, v6);
  return v4;
}
