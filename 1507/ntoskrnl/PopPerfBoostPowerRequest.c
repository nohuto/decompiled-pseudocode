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
  int Buffer; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+64h] [rbp+1Ch]

  v1 = 0;
  v5 = 0;
  Buffer = 0;
  if ( a1 )
  {
    PoLatencySensitivityHint(3);
    v1 = Buffer;
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  v5 = -1;
  Buffer = v1 ^ ((unsigned __int8)v1 ^ (unsigned __int8)(2 * v2)) & 2 | 1;
  ZwUpdateWnfStateData(&WNF_SEB_LOW_LATENCY_POWER_REQUEST, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return 0LL;
}
