/*
 * XREFs of PopPepTryPowerDownDevice @ 0x140029034
 * Callers:
 *     PopPepProcessEvent @ 0x140027CF4 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepStartActivity @ 0x140027C18 (PopPepStartActivity.c)
 *     PopPepReleaseActivityLink @ 0x140027E84 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x140027EF0 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140028058 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400281A4 (PopPepLockActivityLink.c)
 *     PopPepTriggerActivity @ 0x14002844C (PopPepTriggerActivity.c)
 */

char __fastcall PopPepTryPowerDownDevice(__int64 a1, __int64 a2)
{
  char started; // di
  char v5; // r15
  unsigned int v6; // ebp
  unsigned __int8 v8; // [rsp+50h] [rbp+8h] BYREF

  started = 0;
  v5 = PopPepLockActivityLink(a1, 0LL, 6u, 4u, &v8);
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0
    && !*(_DWORD *)(a1 + 140)
    && *(_BYTE *)(a1 + 136)
    && !**(_DWORD **)(a1 + 104)
    && !**(_DWORD **)(a1 + 112) )
  {
    v6 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 4, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    if ( a2 && **(_DWORD **)(a1 + 104) == 2 )
      started = PopPepStartActivity(a1, 0LL, a1 + 72, 4, (volatile signed __int32 *)(a1 + 120), a2);
    else
      PopPepRequestWork(v6, *(_DWORD *)(a1 + 120));
  }
  PopPepReleaseActivityLink(a1, 0LL, v5, v8);
  return started;
}
