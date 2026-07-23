/*
 * XREFs of PopPerfBoostPowerRequest @ 0x14050CDD8
 * Callers:
 *     <none>
 * Callees:
 *     PoLatencySensitivityHint @ 0x140105D7C (PoLatencySensitivityHint.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     PpmPerfRemoveMaximumOverride @ 0x1406359CC (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x1406359EC (PpmPerfSetMaximumOverride.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(__int64 a1, __int64 a2)
{
  int v2; // ecx
  char v3; // al
  int Buffer; // [rsp+60h] [rbp+18h] BYREF
  int v6; // [rsp+64h] [rbp+1Ch]

  LOBYTE(a2) = a1;
  if ( (MEMORY[0x7FFE02D0] & 0x10000) != 0
    || !byte_1402DDF63
    && !(_BYTE)word_1402DDF64
    && __PAIR16__(HIBYTE(word_1402DDF64), 0) == (unsigned __int8)byte_1402DDF66 )
  {
    v2 = 0;
    v6 = 0;
    Buffer = 0;
    if ( (_BYTE)a2 )
    {
      PoLatencySensitivityHint(3);
      v2 = Buffer;
      v3 = 1;
    }
    else
    {
      v3 = 0;
    }
    v6 = -1;
    Buffer = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(2 * v3)) & 2 | 1;
    ZwUpdateWnfStateData(&WNF_SEB_LOW_LATENCY_POWER_REQUEST, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  else if ( (_BYTE)a1 )
  {
    PpmPerfSetMaximumOverride(a1, a2);
  }
  else
  {
    PpmPerfRemoveMaximumOverride();
  }
  return 0LL;
}
