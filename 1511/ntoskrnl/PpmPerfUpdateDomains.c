/*
 * XREFs of PpmPerfUpdateDomains @ 0x140537610
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 *     PpmPerfRemoveMaximumOverride @ 0x1406359CC (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x1406359EC (PpmPerfSetMaximumOverride.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfUpdateDomains(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 *v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1;
  v3[1] = (unsigned __int16 *)qword_1402D17F8[0];
  v3[0] = (unsigned __int16 *)PpmCheckRegistered;
  v4 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v3) )
  {
    v1 = *(_QWORD *)(KeGetPrcb(v5) + 24176);
    if ( v1 )
      KeAddProcessorAffinityEx(PpmPerfDomainsToUpdate, *(_DWORD *)(*(_QWORD *)(v1 + 16) + 36LL));
  }
  return PpmCheckApplyPerfConstraints(0);
}
