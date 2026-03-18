/*
 * XREFs of MiReferenceActiveSubsection @ 0x1400A8C00
 * Callers:
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x14003A500 (MiRemoveUnusedSubsection.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A8CA0 (MiIncrementSubsectionViewCount.c)
 *     MiSubsectionRequiresCharge @ 0x1400ED1C4 (MiSubsectionRequiresCharge.c)
 *     MiGetSubsectionCharges @ 0x1401E2FC8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(__int64 a1, KIRQL a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // rbp
  unsigned int i; // esi
  int v8; // edi
  __int64 v10; // rcx
  int SubsectionCharges; // eax
  volatile LONG *v12; // rcx

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  v4 = *(unsigned int *)(a1 + 44);
  for ( i = 1; ; i |= 8u )
  {
    if ( !*(_QWORD *)(a1 + 8) )
      goto LABEL_13;
    v8 = MiIncrementSubsectionViewCount(a1, i);
    if ( v8 > 1 )
    {
      if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection(a1);
      *(_WORD *)(a1 + 32) |= 1u;
    }
    if ( v8 >= 2 )
      break;
    if ( !v8 )
      return 3221225556LL;
LABEL_13:
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72), a2);
    if ( (i & 8) != 0 )
    {
      MiReturnSubsectionCharges(v3);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
      return 3221225773LL;
    }
    MiSubsectionRequiresCharge(a1);
    v3 = v4;
    SubsectionCharges = MiGetSubsectionCharges(v10, v4);
    v12 = (volatile LONG *)(v2 + 72);
    if ( SubsectionCharges < 0 )
    {
      ExAcquireSpinLockExclusive(v12);
      return 3221225626LL;
    }
    ExAcquireSpinLockExclusive(v12);
    if ( !*(_QWORD *)(a1 + 8) || (_DWORD)v4 != *(_DWORD *)(a1 + 44) )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72), a2);
      MiReturnSubsectionCharges(v4);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
      return 3221225994LL;
    }
  }
  if ( v8 == 2 && (i & 8) != 0 )
  {
    if ( v3 )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72), a2);
      MiReturnSubsectionCharges(v3);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
    }
  }
  return 0LL;
}
