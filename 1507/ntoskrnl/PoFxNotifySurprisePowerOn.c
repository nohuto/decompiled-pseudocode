/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x14014BE30
 * Callers:
 *     VerifierPoFxNotifySurprisePowerOn @ 0x1407423A0 (VerifierPoFxNotifySurprisePowerOn.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     PopFxLockDevice @ 0x14011BF2C (PopFxLockDevice.c)
 *     PopPepSurprisePowerOn @ 0x14014BE7C (PopPepSurprisePowerOn.c)
 */

int __fastcall PoFxNotifySurprisePowerOn(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v1 = PopFxLockDevice(a1, 1);
  v2 = v1;
  if ( v1 )
  {
    LODWORD(v1) = PopPepSurprisePowerOn(*(_QWORD *)(v1 + 56));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 212), 0xFFFFFFFF) == 1 )
      LODWORD(v1) = KeSetEvent((PRKEVENT)(v2 + 216), 0, 0);
  }
  return v1;
}
