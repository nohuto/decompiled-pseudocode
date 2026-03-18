/*
 * XREFs of PopPerfBoostPowerRequest @ 0x14058420C
 * Callers:
 *     <none>
 * Callees:
 *     PoLatencySensitivityHint @ 0x14013942C (PoLatencySensitivityHint.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(char a1)
{
  int v1; // edx
  char v2; // al
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+64h] [rbp+1Ch]

  v1 = 0;
  v5 = 0;
  v4 = 0;
  if ( a1 )
  {
    PoLatencySensitivityHint(3);
    v1 = v4;
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  v5 = -1;
  v4 = v1 ^ ((unsigned __int8)v1 ^ (unsigned __int8)(2 * v2)) & 2 | 1;
  ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v4, 8LL);
  return 0LL;
}
