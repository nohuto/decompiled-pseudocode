/*
 * XREFs of CmpLightWeightPrepareRecreateKeyUoW @ 0x14060F258
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053AD0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405136F0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareRecreateKeyUoW(__int64 a1)
{
  return (unsigned __int8)HvpMarkCellDirty(
                            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
                            0);
}
