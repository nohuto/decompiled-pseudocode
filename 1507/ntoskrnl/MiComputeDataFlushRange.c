/*
 * XREFs of MiComputeDataFlushRange @ 0x140085714
 * Callers:
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiComputeFlushRange @ 0x140085450 (MiComputeFlushRange.c)
 * Callees:
 *     MiFindLastSubsection @ 0x140082B4C (MiFindLastSubsection.c)
 *     MiReferenceSubsection @ 0x14008595C (MiReferenceSubsection.c)
 *     MiLocateSubsectionNode @ 0x140085A20 (MiLocateSubsectionNode.c)
 *     MiBuildWakeList @ 0x140088660 (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x1400886B0 (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiComputeDataFlushRange(__int64 a1, unsigned __int8 a2, _QWORD *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 SubsectionNode; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 LastSubsection; // rdi
  unsigned __int64 v17; // r12
  int i; // r14d
  __int64 v19; // rbp
  __int64 v20; // r13
  _DWORD *v21; // rcx
  __int64 v22; // rax
  __int64 result; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v9 = a1;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 72) = 0;
LABEL_21:
      __writecr8(a2);
      return 0LL;
    }
    v26 = a1 + 72;
LABEL_39:
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26, retaddr);
    goto LABEL_21;
  }
  v10 = a1 + 120;
  if ( !a3 )
  {
    v13 = 0LL;
LABEL_18:
    LastSubsection = MiFindLastSubsection(a1, 1);
    v17 = (unsigned int)(*(_DWORD *)(LastSubsection + 44) - 1);
    goto LABEL_7;
  }
  v11 = (__int64)*a3 >> 12;
  SubsectionNode = MiLocateSubsectionNode(a1, *a3, 1LL);
  v10 = SubsectionNode;
  if ( !SubsectionNode )
  {
LABEL_28:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      *(_DWORD *)(v9 + 72) = 0;
      goto LABEL_21;
    }
    v26 = v9 + 72;
    goto LABEL_39;
  }
  v13 = v11
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
  if ( !a4
    || (v14 = (*a3 + a4 - 1) >> 12, v15 = MiLocateSubsectionNode(v9, *a3 + a4 - 1, 1LL), (LastSubsection = v15) == 0) )
  {
    a1 = v9;
    goto LABEL_18;
  }
  v17 = v14 - (*(unsigned int *)(v15 + 36) | ((unsigned __int64)(*(_WORD *)(v15 + 32) & 0xFFC0) << 26));
LABEL_7:
  if ( !*(_QWORD *)(v10 + 104) || !(unsigned int)MiReferenceSubsection(v10, 0LL) )
  {
    for ( i = *(_DWORD *)(v10 + 44) - v13; v10 != LastSubsection; i += *(_DWORD *)(v10 + 44) )
    {
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v10 )
        break;
      if ( *(_QWORD *)(v10 + 104) && (unsigned int)MiReferenceSubsection(v10, 0LL) )
      {
        v19 = *(_QWORD *)(v10 + 8);
        goto LABEL_10;
      }
    }
    goto LABEL_28;
  }
  i = 0;
  v19 = *(_QWORD *)(v10 + 8) + 8 * v13;
LABEL_10:
  if ( !*(_QWORD *)(LastSubsection + 104) || !(unsigned int)MiReferenceSubsection(LastSubsection, 0LL) )
  {
    v24 = *(_QWORD **)(v10 + 16);
    v25 = 0LL;
    if ( v24 == (_QWORD *)LastSubsection )
      goto LABEL_23;
    do
    {
      if ( v24[13] && v24[1] )
        v25 = v24;
      v24 = (_QWORD *)v24[2];
    }
    while ( v24 != (_QWORD *)LastSubsection );
    LastSubsection = (__int64)v25;
    if ( !v25 )
LABEL_23:
      LastSubsection = v10;
    MiReferenceSubsection(LastSubsection, 0LL);
    v17 = (unsigned int)(*(_DWORD *)(LastSubsection + 44) - 1);
  }
  ++*(_QWORD *)(v9 + 40);
  v20 = MiBuildWakeList(v9, 4LL);
  MiRemoveUnusedSegment(v9);
  if ( a5 == 1 )
    *(_DWORD *)(v9 + 56) |= 4u;
  v21 = (_DWORD *)(v9 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
  else
    *v21 = 0;
  __writecr8(a2);
  MiReleaseControlAreaWaiters(v20);
  v22 = *(_QWORD *)(LastSubsection + 8);
  *(_QWORD *)a6 = v9;
  *(_QWORD *)(a6 + 8) = v19;
  *(_QWORD *)(a6 + 16) = v22 + 8 * v17;
  result = 259LL;
  *(_QWORD *)(a6 + 24) = v10;
  *(_QWORD *)(a6 + 32) = LastSubsection;
  *(_DWORD *)(a6 + 40) = i;
  return result;
}
