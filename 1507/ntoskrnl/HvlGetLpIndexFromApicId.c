/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1401E5874
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x1406BE4BC (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x1406BE594 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x1406BE72C (PpmPerfRegisterHvStates.c)
 * Callees:
 *     sub_1401E65AC @ 0x1401E65AC (sub_1401E65AC.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( (HvlpFlags & 4) != 0 && (v5 = sub_1401E65AC(a1, a2, a3, a4)) != 0 )
    return *(unsigned int *)(v5 + 4);
  else
    return 0xFFFFFFFFLL;
}
