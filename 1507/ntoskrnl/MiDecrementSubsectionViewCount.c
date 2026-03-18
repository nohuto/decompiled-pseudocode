/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x140054300
 * Callers:
 *     MiRemoveViewsFromSectionWithPfn @ 0x140054170 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     MiAppendSubsectionChain @ 0x140077D64 (MiAppendSubsectionChain.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiRemoveViewsFromSection @ 0x14010E0A4 (MiRemoveViewsFromSection.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDecrementSubsectionViewCount(unsigned int *a1, char a2)
{
  __int64 v2; // r9
  __int16 *v3; // r10
  unsigned __int16 v4; // ax
  __int16 *v5; // r11
  _KPROCESS *Process; // rdx
  unsigned __int16 v7; // ax
  unsigned int v9; // eax
  unsigned int v10; // eax

  v2 = 0LL;
  if ( (a2 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x40000000) == 0 )
  {
    v3 = MiSystemPartition;
    v4 = *(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
    v5 = v4 == 1023 ? MiSystemPartition : *(__int16 **)(qword_14034F0E8 + 8LL * v4);
    if ( (a2 & 2) == 0 )
    {
      if ( (a2 & 4) != 0 )
      {
        v3 = 0LL;
      }
      else
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( ((__int64)Process[2].ProfileListHead.Blink & 7) == 0 )
        {
          v7 = WORD2(Process[1].SecurePid);
          if ( v7 != 1023 )
            v3 = *(__int16 **)(qword_14034F0E8 + 8LL * v7);
        }
      }
      if ( v3 != v5 )
      {
        v9 = a1[12];
        if ( v9 != -1 )
        {
          v10 = v9 - 1;
          a1[12] = v10;
          if ( !v10 )
            v2 = a1[11];
        }
      }
    }
  }
  --*((_QWORD *)a1 + 12);
  return v2;
}
