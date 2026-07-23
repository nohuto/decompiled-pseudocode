/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x1400223E0
 * Callers:
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MiRemoveViewsFromSection @ 0x140022364 (MiRemoveViewsFromSection.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiCreatePrototypePtes @ 0x14008F5E4 (MiCreatePrototypePtes.c)
 *     MiAppendSubsectionChain @ 0x1400FAF08 (MiAppendSubsectionChain.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDecrementSubsectionViewCount(__int64 a1, char a2)
{
  __int64 v2; // r9
  int v3; // eax
  int *v4; // r10
  unsigned __int16 v5; // ax
  int *v6; // r11
  unsigned __int16 v7; // ax
  __int64 result; // rax
  int v9; // eax
  int v10; // eax

  v2 = 0LL;
  if ( (a2 & 1) == 0 )
    goto LABEL_11;
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  if ( (v3 & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 4) != 0 )
      goto LABEL_11;
  }
  else if ( (v3 & 0x40000000) != 0 )
  {
    goto LABEL_11;
  }
  v4 = MiSystemPartition;
  v5 = *(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
  if ( v5 == 1023 )
    v6 = MiSystemPartition;
  else
    v6 = *(int **)(qword_140327038 + 8LL * v5);
  if ( (a2 & 2) == 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      v4 = 0LL;
    }
    else
    {
      v7 = WORD2(KeGetCurrentThread()->ApcState.Process[1].InstrumentationCallback);
      if ( v7 != 1023 )
        v4 = *(int **)(qword_140327038 + 8LL * v7);
    }
    if ( v4 != v6 )
    {
      v9 = *(_DWORD *)(a1 + 48);
      if ( v9 != -1 )
      {
        v10 = v9 - 1;
        *(_DWORD *)(a1 + 48) = v10;
        if ( !v10 )
          v2 = *(unsigned int *)(a1 + 44);
      }
    }
  }
LABEL_11:
  result = v2;
  if ( (*(_BYTE *)(a1 + 34) & 1) == 0 )
    --*(_QWORD *)(a1 + 96);
  return result;
}
