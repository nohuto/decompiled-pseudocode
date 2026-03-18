/*
 * XREFs of PpmPerfUpdateDomains @ 0x140544794
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x140544740 (PopPerfBoostPowerRequest.c)
 *     PpmReapplyPerfPolicy @ 0x140569F90 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D53B0 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall PpmPerfUpdateDomains(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int16 *v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1;
  v3[1] = (unsigned __int16 *)qword_1402F8878[0];
  v3[0] = (unsigned __int16 *)PpmCheckRegistered;
  v4 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v3) )
  {
    v1 = *(_QWORD *)(KeGetPrcb(v5) + 24176);
    if ( v1 )
      *(_BYTE *)(v1 + 406) = 1;
  }
  return PpmCheckApplyPerfConstraints(0LL);
}
