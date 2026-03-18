/*
 * XREFs of PopPepSurprisePowerOn @ 0x1401169C8
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x140116978 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     PopPepRequestWork @ 0x1400DBB20 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400DBC94 (PopPepPromoteActivities.c)
 *     PopPepTriggerActivity @ 0x1400DC038 (PopPepTriggerActivity.c)
 */

void __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  KIRQL v2; // si
  unsigned int v3; // ebx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v3 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(v3, *(_DWORD *)(a1 + 120));
  }
  PopPepReleaseActivityLink(a1, 0LL, 1, v2);
}
