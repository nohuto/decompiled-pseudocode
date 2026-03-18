/*
 * XREFs of PopPepSurprisePowerOn @ 0x14014BE7C
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x14014BE30 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepRequestWork @ 0x140027EF0 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140028058 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400281A4 (PopPepLockActivityLink.c)
 *     PopPepTriggerActivity @ 0x14002844C (PopPepTriggerActivity.c)
 */

__int64 __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  char v2; // si
  unsigned int v4; // ebx
  unsigned __int8 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = PopPepLockActivityLink(a1, 0LL, 6u, 0, &v5);
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v4 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(v4, *(_DWORD *)(a1 + 120));
  }
  return PopPepReleaseActivityLink(a1, 0LL, v2, v5);
}
