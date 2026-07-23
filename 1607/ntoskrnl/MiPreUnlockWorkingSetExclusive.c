/*
 * XREFs of MiPreUnlockWorkingSetExclusive @ 0x1401F2898
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140029580 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetWsAndInsertVad @ 0x140030660 (MiGetWsAndInsertVad.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReduceWs @ 0x1400AFD20 (MiReduceWs.c)
 */

void __fastcall MiPreUnlockWorkingSetExclusive(ULONG_PTR a1, char a2)
{
  char v2; // al
  int *v5; // rax
  char v6; // al

  v2 = *(_BYTE *)(a1 + 187);
  if ( (v2 & 0x10) != 0 )
  {
    *(_BYTE *)(a1 + 187) = v2 & 0xEF;
    v5 = MiPartitionIdToPointer(*(_WORD *)(a1 + 164));
    MiAgeWorkingSet(a1, a2, 1, *(unsigned __int16 *)(*((_QWORD *)v5 + 781) + 2358LL));
  }
  v6 = *(_BYTE *)(a1 + 187);
  if ( (v6 & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 187) = v6 & 0xDF;
    MiReduceWs(a1, a2, *(_QWORD *)(a1 + 144));
  }
}
