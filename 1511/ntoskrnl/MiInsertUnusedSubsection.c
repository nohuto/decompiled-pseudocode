/*
 * XREFs of MiInsertUnusedSubsection @ 0x1400A86E0
 * Callers:
 *     MiAppendSubsectionChain @ 0x14000A4A4 (MiAppendSubsectionChain.c)
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiRemoveViewsFromSection @ 0x1400A8B00 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(__int64 a1, int a2)
{
  int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 *v18; // rbx
  __int64 *v19; // rax
  __int64 **v20; // rcx
  unsigned int v22; // ecx
  _QWORD *v23; // rbx
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF);
  v8 = v5;
  v9 = *(_DWORD *)(a1 + 44) + (*(_DWORD *)(a1 + 52) & 0x7FFFFFFFu);
  v10 = v9;
  v11 = 8 * v9;
  if ( (unsigned __int64)(8 * v9) <= 0xFE0 )
  {
    v12 = v11 + 31;
LABEL_3:
    v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_4;
  }
  v22 = (8 * (_WORD)v9) & 0xFFF;
  if ( v11 < 0x10000 && v22 <= 0xFC0 )
  {
    v12 = v11 + 15;
    goto LABEL_3;
  }
  v13 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_4:
  v14 = (volatile signed __int32 *)(v5 + 1536);
  LOBYTE(v6) = -1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v14, v6);
  else
    ExpAcquireSpinLockExclusive(v14, v6, v7);
  *(_WORD *)(a1 + 34) |= 8u;
  qword_1402FE2A8 += v13;
  v17 = 0LL;
  if ( !(unsigned int)MiSubsectionUsingExtents(a1, v15, v16) && *(_DWORD *)(a1 + 48) )
  {
    *(_DWORD *)(a1 + 48) = 0;
    v17 = *(unsigned int *)(a1 + 44);
  }
  if ( *(_DWORD *)(a1 + 104) )
  {
    v18 = (__int64 *)(a1 + 80);
    v19 = (__int64 *)(v8 + 1424);
    if ( a2 == 1 )
    {
      v20 = *(__int64 ***)(v8 + 1432);
      *v18 = (__int64)v19;
      v18[1] = (__int64)v20;
      if ( *v20 != v19 )
        __fastfail(3u);
      *v20 = v18;
      *(_QWORD *)(v8 + 1432) = v18;
    }
    else
    {
      v25 = *v19;
      *v18 = *v19;
      v18[1] = (__int64)v19;
      if ( *(__int64 **)(v25 + 8) != v19 )
        __fastfail(3u);
      *(_QWORD *)(v25 + 8) = v18;
      *v19 = (__int64)v18;
    }
  }
  else
  {
    v23 = (_QWORD *)(a1 + 80);
    v24 = *(_QWORD **)(v8 + 1448);
    *v23 = v8 + 1440;
    v23[1] = v24;
    if ( *v24 != v8 + 1440 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v8 + 1448) = v23;
    *(_QWORD *)(v8 + 1264) += v10;
    if ( *(_QWORD *)(v8 + 1264) >= 0x20000uLL )
      v4 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8 + 1536, retaddr);
  else
    *(_DWORD *)(v8 + 1536) = 0;
  if ( v4 == 1 )
    KeSetEvent((PRKEVENT)(v8 + 1216), 0, 0);
  return v17;
}
