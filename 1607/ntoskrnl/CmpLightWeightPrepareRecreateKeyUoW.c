/*
 * XREFs of CmpLightWeightPrepareRecreateKeyUoW @ 0x14060F30C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareRecreateKeyUoW(__int64 a1)
{
  return (unsigned __int8)HvpMarkCellDirty(
                            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
                            0);
}
