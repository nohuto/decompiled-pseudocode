/*
 * XREFs of MiPreUnlockWorkingSetExclusive @ 0x1401F2A6C
 * Callers:
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400295E0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140029A00 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetWsAndInsertVad @ 0x140030AE0 (MiGetWsAndInsertVad.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2AEC (MiRelockWorkingSetExclusive.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiReduceWs @ 0x1400B1DE0 (MiReduceWs.c)
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
