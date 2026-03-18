/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x1400A8CA0
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14000C4EC (MiPrepareSegmentForDeletion.c)
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiReferenceSubsection @ 0x1400A8AA8 (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x1400A8C00 (MiReferenceActiveSubsection.c)
 *     MiRetainSubsection @ 0x1400EAAA4 (MiRetainSubsection.c)
 *     MiSetSubsectionBase @ 0x1401E3AF0 (MiSetSubsectionBase.c)
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 * Callees:
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r11d
  __int64 v4; // rcx
  char v5; // r9
  unsigned __int16 v6; // cx
  int *v7; // rdx
  int *v8; // rcx
  _KPROCESS *Process; // r10
  unsigned __int16 SignalState; // ax
  int v12; // ecx

  v2 = a1;
  v3 = 2;
  if ( (a2 & 1) != 0 && !(unsigned int)MiSubsectionUsingExtents(a1, a2, a1) )
  {
    v6 = *(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF;
    v7 = v6 == 1023 ? MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v6);
    if ( (v5 & 4) != 0 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = MiSystemPartition;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (Process[2].DirectoryTableBase & 7) == 0 )
      {
        SignalState = Process[2].Header.SignalState;
        if ( SignalState != 1023 )
          v8 = *(int **)(qword_1402FEC28 + 8LL * SignalState);
      }
    }
    if ( v8 != v7 )
    {
      if ( v7 != MiSystemPartition )
      {
        ++dword_1402FEC38;
        return 0LL;
      }
      v12 = *(_DWORD *)(v2 + 48);
      if ( v12 != -1 )
      {
        if ( !v12 )
        {
          if ( (v5 & 8) == 0 )
            return 1LL;
          v3 = 3;
        }
        *(_DWORD *)(v2 + 48) = v12 + 1;
      }
    }
  }
  if ( (*(_BYTE *)(v2 + 34) & 1) == 0 )
    ++*(_QWORD *)(v2 + 96);
  return v3;
}
