/*
 * XREFs of MiTrimSharedPage @ 0x1400081F8
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiTrimSection @ 0x1400083E8 (MiTrimSection.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     MiReferencePfBackedSection @ 0x14000E638 (MiReferencePfBackedSection.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiDecrementModifiedWriteCount @ 0x140038E48 (MiDecrementModifiedWriteCount.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiBuildWakeList @ 0x14003AAEC (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x14003AB30 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceSubsection @ 0x1400A8AA8 (MiReferenceSubsection.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  __int64 v8; // rdi
  __int64 v9; // rbp
  volatile LONG *v10; // r14
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  KIRQL v14; // bl
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 *v18; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+48h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v5 = 0LL;
  if ( (v3 & 0x400) != 0 )
  {
    v8 = v3 >> 16;
    if ( (*(_BYTE *)(v8 + 34) & 2) == 0 )
    {
      v9 = *(_QWORD *)v8;
      v10 = (volatile LONG *)(*(_QWORD *)v8 + 72LL);
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
      v11 = *(_DWORD *)(v9 + 56);
      if ( !(v11 & 1 | ((v11 & 2) != 0)) )
      {
        if ( (v11 & 0x20) != 0 )
        {
LABEL_7:
          v12 = MiBuildWakeList(v9, 4LL);
          ++*(_DWORD *)(v9 + 76);
          v13 = v12;
          MiRemoveUnusedSegment(v9);
          ExReleaseSpinLockExclusiveFromDpcLevel(v10);
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(a2);
          MiReleaseControlAreaWaiters(v13);
          goto LABEL_8;
        }
        if ( (*(_BYTE *)(v8 + 34) & 1) == 0 )
        {
          v5 = v8;
          MiReferenceSubsection(v8, 0LL);
          goto LABEL_7;
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    }
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(a2);
  v18 = (__int64 *)MiReferencePfBackedSection(v4);
  v8 = (__int64)v18;
  if ( !v18 )
  {
    MiLockPageInline(a1);
    return 0LL;
  }
  v9 = *v18;
LABEL_8:
  v20 = 0;
  v19[0] = v9;
  v19[1] = v4;
  v19[2] = v4;
  v19[3] = v8;
  v19[4] = v8;
  if ( (unsigned int)MiTrimSection(v19, 1LL, a3) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection(v19, 1LL, a3);
  if ( v5 )
  {
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
    v15 = MiDecrementSubsections(v5, v5, 0LL);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72), v14);
    if ( v15 )
      MiReturnSubsectionCharges(v15);
  }
  v16 = MiDecrementModifiedWriteCount(v9, 0LL);
  if ( v16 )
    MiReleaseControlAreaWaiters(v16);
  MiLockPageInline(a1);
  return (*(_BYTE *)(a1 + 34) & 7) != 6 ? 2 : 0;
}
