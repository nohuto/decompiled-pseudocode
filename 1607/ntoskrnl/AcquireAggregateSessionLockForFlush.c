/*
 * XREFs of AcquireAggregateSessionLockForFlush @ 0x1400AD7E4
 * Callers:
 *     FlushLookUpTableBucket @ 0x1400AD648 (FlushLookUpTableBucket.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

KIRQL __fastcall AcquireAggregateSessionLockForFlush(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx

  v1 = (volatile signed __int32 *)(a1 + 328);
  v3 = KeAbPreAcquire(a1 + 328, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64(v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, v1);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  return ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 336));
}
