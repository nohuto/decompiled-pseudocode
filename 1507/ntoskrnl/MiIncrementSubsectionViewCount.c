/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x1400859A4
 * Callers:
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiPrepareSegmentForDeletion @ 0x14008506C (MiPrepareSegmentForDeletion.c)
 *     MiReferenceSubsection @ 0x14008595C (MiReferenceSubsection.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiProtoFault @ 0x1400FE484 (MiProtoFault.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(_QWORD *a1, char a2)
{
  unsigned int v2; // r10d
  _QWORD *v3; // r8
  __int64 v5; // rcx
  char v6; // r9
  __int16 *v7; // r11
  __int16 *v8; // rax
  int v9; // ecx

  v2 = 1;
  v3 = a1;
  if ( (a2 & 1) == 0 )
    goto LABEL_2;
  v5 = *a1;
  if ( (*(_DWORD *)(v5 + 56) & 0x40000000) != 0 )
    goto LABEL_2;
  v7 = MiPartitionIdToPointer(*(_WORD *)(v5 + 60) & 0x3FF);
  v8 = (v6 & 4) != 0 ? 0LL : MiGetVmPartition((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8]);
  if ( v8 == v7 )
    goto LABEL_2;
  v9 = *((_DWORD *)v3 + 12);
  if ( v9 == -1 )
    goto LABEL_2;
  if ( v9 )
  {
LABEL_14:
    *((_DWORD *)v3 + 12) = v9 + 1;
LABEL_2:
    ++v3[12];
    return v2;
  }
  if ( (v6 & 8) != 0 )
  {
    v2 = 2;
    goto LABEL_14;
  }
  return 0LL;
}
