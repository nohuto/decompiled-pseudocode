/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x140116978
 * Callers:
 *     VerifierPoFxNotifySurprisePowerOn @ 0x1406C0B60 (VerifierPoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopFxLockDevice @ 0x1400DA88C (PopFxLockDevice.c)
 *     PopPepSurprisePowerOn @ 0x1401169C8 (PopPepSurprisePowerOn.c)
 */

void __fastcall PoFxNotifySurprisePowerOn(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v1 = PopFxLockDevice(a1, 1);
  v2 = v1;
  if ( v1 )
  {
    PopPepSurprisePowerOn(*(_QWORD *)(v1 + 56));
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 208), 0LL, 0x20u);
  }
}
