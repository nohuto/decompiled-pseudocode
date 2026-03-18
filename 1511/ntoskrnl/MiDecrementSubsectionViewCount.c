/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x1400A8DA0
 * Callers:
 *     MiAppendSubsectionChain @ 0x14000A4A4 (MiAppendSubsectionChain.c)
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiRemoveViewsFromSection @ 0x1400A8B00 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 * Callees:
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // cx
  int *v7; // r10
  int *v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 result; // rax

  v2 = 0LL;
  v3 = a1;
  if ( (a2 & 1) != 0 && !(unsigned int)MiSubsectionUsingExtents(a1, a2, a1) )
  {
    v6 = *(_WORD *)(*(_QWORD *)v5 + 60LL) & 0x3FF;
    v7 = v6 == 1023 ? MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v6);
    if ( (v4 & 2) == 0 )
    {
      v8 = (int *)((v4 & 4) != 0
                 ? v2
                 : MiGetVmPartition(&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12], v4, v3));
      if ( v8 != v7 )
      {
        v9 = *(_DWORD *)(v3 + 48);
        if ( v9 != -1 )
        {
          v10 = v9 - 1;
          *(_DWORD *)(v3 + 48) = v10;
          if ( !v10 )
            v2 = *(unsigned int *)(v3 + 44);
        }
      }
    }
  }
  result = v2;
  if ( (*(_BYTE *)(v3 + 34) & 1) == 0 )
    --*(_QWORD *)(v3 + 96);
  return result;
}
