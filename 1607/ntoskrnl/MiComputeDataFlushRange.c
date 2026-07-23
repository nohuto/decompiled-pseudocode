/*
 * XREFs of MiComputeDataFlushRange @ 0x1400214D8
 * Callers:
 *     MiComputeFlushRange @ 0x1400213D4 (MiComputeFlushRange.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 * Callees:
 *     MiReferenceSubsection @ 0x1400216EC (MiReferenceSubsection.c)
 *     MiLocateSubsectionNode @ 0x140021740 (MiLocateSubsectionNode.c)
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400268F0 (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFindLastSubsection @ 0x1400FAEB0 (MiFindLastSubsection.c)
 */

__int64 __fastcall MiComputeDataFlushRange(__int64 a1, KIRQL a2, _QWORD *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 SubsectionNode; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 LastSubsection; // rdi
  unsigned __int64 v17; // r13
  int i; // r15d
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 result; // rax
  volatile LONG *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // [rsp+50h] [rbp+8h]

  v9 = a1;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v22 = (volatile LONG *)(a1 + 72);
LABEL_18:
    ExReleaseSpinLockExclusive(v22, a2);
    return 0LL;
  }
  v10 = a1 + 128;
  if ( !a3 )
  {
    v13 = 0LL;
LABEL_16:
    LastSubsection = MiFindLastSubsection(a1, 1LL);
    v17 = (unsigned int)(*(_DWORD *)(LastSubsection + 44) - 1);
    goto LABEL_7;
  }
  v11 = *a3 >> 12;
  SubsectionNode = MiLocateSubsectionNode(a1, *a3, 1LL);
  v10 = SubsectionNode;
  if ( !SubsectionNode )
  {
LABEL_31:
    v22 = (volatile LONG *)(v9 + 72);
    goto LABEL_18;
  }
  v13 = v11
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
  if ( !a4
    || (v14 = (unsigned __int64)(*a3 + a4 - 1) >> 12,
        v15 = MiLocateSubsectionNode(v9, *a3 + a4 - 1, 1LL),
        (LastSubsection = v15) == 0) )
  {
    a1 = v9;
    goto LABEL_16;
  }
  v17 = v14 - (*(unsigned int *)(v15 + 36) | ((unsigned __int64)(*(_WORD *)(v15 + 32) & 0xFFC0) << 26));
LABEL_7:
  if ( !*(_DWORD *)(v10 + 104) || (int)MiReferenceSubsection(v10, 0LL) <= 1 )
  {
    for ( i = *(_DWORD *)(v10 + 44) - v13; v10 != LastSubsection; i += *(_DWORD *)(v10 + 44) )
    {
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v10 )
        break;
      if ( *(_DWORD *)(v10 + 104) && (int)MiReferenceSubsection(v10, 0LL) > 1 )
      {
        v19 = *(_QWORD *)(v10 + 8);
        goto LABEL_10;
      }
    }
    goto LABEL_31;
  }
  i = 0;
  v19 = *(_QWORD *)(v10 + 8) + 8 * v13;
LABEL_10:
  if ( !*(_DWORD *)(LastSubsection + 104) || (int)MiReferenceSubsection(LastSubsection, 0LL) <= 1 )
  {
    v23 = *(_QWORD *)(v10 + 16);
    v24 = 0LL;
    if ( v23 == LastSubsection )
      goto LABEL_20;
    do
    {
      if ( *(_DWORD *)(v23 + 104) && *(_QWORD *)(v23 + 8) )
        v24 = v23;
      v23 = *(_QWORD *)(v23 + 16);
    }
    while ( v23 != LastSubsection );
    LastSubsection = v24;
    if ( !v24 )
LABEL_20:
      LastSubsection = v10;
    MiReferenceSubsection(LastSubsection, 0LL);
    v17 = (unsigned int)(*(_DWORD *)(LastSubsection + 44) - 1);
  }
  ++*(_QWORD *)(v9 + 40);
  v25 = MiBuildWakeList(v9, 4LL);
  MiRemoveUnusedSegment(v9);
  if ( a5 == 1 )
    *(_DWORD *)(v9 + 56) |= 4u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  __writecr8(a2);
  MiReleaseControlAreaWaiters(v25);
  v20 = *(_QWORD *)(LastSubsection + 8);
  *(_QWORD *)a6 = v9;
  *(_QWORD *)(a6 + 8) = v19;
  *(_QWORD *)(a6 + 16) = v20 + 8 * v17;
  result = 259LL;
  *(_QWORD *)(a6 + 24) = v10;
  *(_QWORD *)(a6 + 32) = LastSubsection;
  *(_DWORD *)(a6 + 40) = i;
  return result;
}
