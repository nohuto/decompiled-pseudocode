/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1401AE928
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x14063DC20 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x14063DCF8 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x14063DE28 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     sub_1401AF240 @ 0x1401AF240 (sub_1401AF240.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( (HvlpFlags & 4) != 0 && (v5 = sub_1401AF240(a1, a2, a3, a4)) != 0 )
    return *(unsigned int *)(v5 + 4);
  else
    return 0xFFFFFFFFLL;
}
