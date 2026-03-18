/*
 * XREFs of SignalASLEvent @ 0x1C0047264
 * Callers:
 *     ResetSignal @ 0x1C0047580 (ResetSignal.c)
 * Callees:
 *     DequeueAndReadyContext @ 0x1C001F5E4 (DequeueAndReadyContext.c)
 */

void __fastcall SignalASLEvent(__int64 a1)
{
  KIRQL v2; // si

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( !DequeueAndReadyContext(a1 + 8) )
    ++*(_DWORD *)a1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v2);
}
