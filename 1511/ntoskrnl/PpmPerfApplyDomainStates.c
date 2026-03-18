/*
 * XREFs of PpmPerfApplyDomainStates @ 0x140074E40
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmPerfApplyDomainState @ 0x1400D1E40 (PpmPerfApplyDomainState.c)
 *     KeOrAffinityEx @ 0x1400D8E70 (KeOrAffinityEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeIsSubsetAffinityEx @ 0x1401C4D7C (KeIsSubsetAffinityEx.c)
 */

char PpmPerfApplyDomainStates()
{
  unsigned __int64 v0; // rbx
  unsigned __int16 v1; // di
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 Prcb; // rax
  __int64 *i; // rbx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+30h] [rbp-28h]
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF

  if ( PpmPerfArtificialDomainEnabled )
  {
    v7[1] = qword_1402D1698;
    v8 = 0;
    v7[0] = PpmPerfDomainsToUpdate;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v7) )
    {
      Prcb = KeGetPrcb(v9);
      if ( !(unsigned int)KeIsSubsetAffinityEx(*(_QWORD *)(Prcb + 24176) + 24LL, &PpmPerfNewCoreParkingMask) )
      {
        for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = (__int64 *)*i )
        {
          if ( !(unsigned int)KeIsSubsetAffinityEx(i + 3, &PpmPerfNewCoreParkingMask) )
            KeAddProcessorAffinityEx(PpmPerfDomainsToUpdate, *(unsigned int *)(i[2] + 36));
        }
        break;
      }
    }
  }
  v0 = qword_1402D1698;
  v1 = 0;
  while ( v0 )
  {
LABEL_6:
    _BitScanForward64(&v3, v0);
    v0 &= ~(1LL << v3);
    v4 = KeGetPrcb((unsigned int)KiProcessorNumberToIndexMappingTable[64 * v1 + (unsigned __int8)v3]);
    if ( (unsigned __int8)PpmPerfApplyDomainState(v4) )
      KeOrAffinityEx(*(_QWORD *)(v4 + 24176) + 24LL, &PpmPerfProcessorsToUpdate, &PpmPerfProcessorsToUpdate);
  }
  while ( ++v1 < (unsigned int)LOWORD(PpmPerfDomainsToUpdate[0]) )
  {
    v0 = PpmPerfDomainsToUpdate[v1 + 1];
    if ( v0 )
      goto LABEL_6;
  }
  PpmPerfDomainsToUpdate[0] = 1310721LL;
  memset(&qword_1402D1698, 0, 0xA0uLL);
  return 1;
}
