/*
 * XREFs of PpmPerfForceDomainStates @ 0x140126714
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KeOrAffinityEx @ 0x1400D8E70 (KeOrAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

char PpmPerfForceDomainStates()
{
  __int64 v0; // rcx
  ULONG v2; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int16 *v3; // [rsp+28h] [rbp-81h] BYREF
  __int64 v4; // [rsp+30h] [rbp-79h]
  __int16 v5; // [rsp+38h] [rbp-71h]
  __int64 v6; // [rsp+40h] [rbp-69h] BYREF
  __int64 v7; // [rsp+48h] [rbp-61h]
  _BYTE v8[152]; // [rsp+50h] [rbp-59h] BYREF

  v6 = 1310721LL;
  v7 = 0LL;
  memset(v8, 0, sizeof(v8));
  v4 = qword_1402D1698;
  v3 = (unsigned __int16 *)PpmPerfDomainsToUpdate;
  v5 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v2, &v3) )
  {
    v0 = *(_QWORD *)(KeGetPrcb(v2) + 24176);
    *(_BYTE *)(v0 + 396) = 1;
    KeOrAffinityEx((unsigned __int16 *)(v0 + 24), (unsigned __int16 *)&v6, &v6);
  }
  v4 = v7;
  v3 = (unsigned __int16 *)&v6;
  v5 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v2, &v3) )
    *(_BYTE *)(*(_QWORD *)(KeGetPrcb(v2) + 24184) + 80LL) = 1;
  return 1;
}
