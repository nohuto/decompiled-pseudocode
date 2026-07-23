/*
 * XREFs of MiTrimSharedPage @ 0x14008DE44
 * Callers:
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 * Callees:
 *     MiReferenceSubsection @ 0x1400216EC (MiReferenceSubsection.c)
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400268F0 (MiBuildWakeList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementModifiedWriteCount @ 0x14008E7E4 (MiDecrementModifiedWriteCount.c)
 *     MiTrimSection @ 0x14008EC74 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x14008F2E0 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     MiClusterVadFull @ 0x1401F6060 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  __int64 PrototypePteDirect; // rax
  __int64 v8; // rdi
  __int64 v10; // rbp
  volatile LONG *v11; // r14
  int v12; // ecx
  __int64 *v13; // rax
  __int64 *v14; // rbx
  KIRQL v15; // bl
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 *v18; // rax
  _QWORD *v19; // rax
  _QWORD v20[5]; // [rsp+20h] [rbp-58h] BYREF
  int v21; // [rsp+48h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v4 = 0LL;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    v18 = (__int64 *)MiReferencePfBackedSection(v3);
    v8 = (__int64)v18;
    if ( v18 )
    {
      v10 = *v18;
      if ( (a3 & 0x800000) == 0 || *(int *)(v10 + 56) >= 0 || (unsigned int)MiClusterVadFull(a1, v18) != 1 )
        goto LABEL_10;
      v19 = (_QWORD *)MiDecrementModifiedWriteCount(v10, 0LL);
      if ( v19 )
        MiReleaseControlAreaWaiters(v19);
    }
    MiLockPageInline(a1);
    return 0LL;
  }
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
  v8 = PrototypePteDirect;
  if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 )
    return 0LL;
  v10 = *(_QWORD *)PrototypePteDirect;
  v11 = (volatile LONG *)(*(_QWORD *)PrototypePteDirect + 72LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(v11);
  v12 = *(_DWORD *)(v10 + 56);
  if ( v12 & 1 | ((v12 & 2) != 0) )
  {
LABEL_5:
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    return 0LL;
  }
  if ( (v12 & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(v8 + 34) & 1) != 0 )
      goto LABEL_5;
    v4 = v8;
    MiReferenceSubsection(v8);
  }
  v13 = MiBuildWakeList(v10, 4);
  ++*(_DWORD *)(v10 + 76);
  v14 = v13;
  MiRemoveUnusedSegment(v10);
  ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(a2);
  MiReleaseControlAreaWaiters(v14);
LABEL_10:
  v21 = 0;
  v20[0] = v10;
  v20[1] = v3;
  v20[2] = v3;
  v20[3] = v8;
  v20[4] = v8;
  if ( (unsigned int)MiTrimSection(v20, 1LL, a3) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection(v20, 1LL, a3);
  if ( v4 )
  {
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
    v16 = MiDecrementSubsections(v4, v4, 0);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72), v15);
    if ( v16 )
      MiReturnSubsectionCharges(v16);
  }
  v17 = (_QWORD *)MiDecrementModifiedWriteCount(v10, 0LL);
  if ( v17 )
    MiReleaseControlAreaWaiters(v17);
  MiLockPageInline(a1);
  return (*(_BYTE *)(a1 + 34) & 7) != 6 ? 2 : 0;
}
