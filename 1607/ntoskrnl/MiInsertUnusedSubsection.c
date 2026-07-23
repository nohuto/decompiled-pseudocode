/*
 * XREFs of MiInsertUnusedSubsection @ 0x14002694C
 * Callers:
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MiRemoveViewsFromSection @ 0x140022364 (MiRemoveViewsFromSection.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiAppendSubsectionChain @ 0x1400FAF08 (MiAppendSubsectionChain.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  volatile LONG *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 **v18; // rcx
  _QWORD *v20; // rdi
  _QWORD *v21; // rcx
  __int64 v22; // rcx

  v5 = a2;
  v6 = MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF, a2, a3, a4);
  v7 = 0;
  v8 = v6;
  v9 = 8LL * (*(_DWORD *)(a1 + 44) + (*(_DWORD *)(a1 + 52) & 0x7FFFFFFFu));
  v10 = *(_DWORD *)(a1 + 44) + (*(_DWORD *)(a1 + 52) & 0x7FFFFFFFu);
  if ( v9 > 0xFE0 )
  {
    if ( v9 >= 0x10000 || ((8 * (*(_WORD *)(a1 + 44) + *(_WORD *)(a1 + 52))) & 0xFFFu) > 0xFC0 )
    {
      v12 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v11 = v9 + 15;
  }
  else
  {
    v11 = v9 + 31;
  }
  v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  v13 = (volatile LONG *)(v6 + 1664);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 1664));
  *(_WORD *)(a1 + 34) |= 8u;
  *(_QWORD *)(v8 + 1536) += v12;
  _InterlockedExchangeAdd64(&qword_1403265A8, v12);
  v15 = 0LL;
  if ( !(unsigned int)MiSubsectionUsingExtents(a1, v14) && *(_DWORD *)(a1 + 48) )
  {
    v15 = *(unsigned int *)(a1 + 44);
    *(_DWORD *)(a1 + 48) = 0;
  }
  if ( *(_DWORD *)(a1 + 104) )
  {
    v16 = v8 + 1560;
    v17 = (__int64 *)(a1 + 80);
    if ( v5 == 1 )
    {
      v18 = *(__int64 ***)(v8 + 1568);
      if ( *v18 != (__int64 *)v16 )
        __fastfail(3u);
      *v17 = v16;
      v17[1] = (__int64)v18;
      *v18 = v17;
      *(_QWORD *)(v8 + 1568) = v17;
    }
    else
    {
      v22 = *(_QWORD *)v16;
      if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 )
        __fastfail(3u);
      *v17 = v22;
      v17[1] = v16;
      *(_QWORD *)(v22 + 8) = v17;
      *(_QWORD *)v16 = v17;
    }
  }
  else
  {
    v20 = (_QWORD *)(a1 + 80);
    v21 = *(_QWORD **)(v8 + 1584);
    if ( *v21 != v8 + 1576 )
      __fastfail(3u);
    *v20 = v8 + 1576;
    v20[1] = v21;
    *v21 = v20;
    *(_QWORD *)(v8 + 1584) = v20;
    *(_QWORD *)(v8 + 1264) += v10;
    if ( *(_QWORD *)(v8 + 1264) >= 0x20000uLL )
      v7 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v13);
  if ( v7 == 1 )
    KeSetEvent((PRKEVENT)(v8 + 1216), 0, 0);
  return v15;
}
