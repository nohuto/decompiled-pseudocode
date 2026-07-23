/*
 * XREFs of MiReferenceActiveSubsection @ 0x14002CA00
 * Callers:
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x14002CAA0 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x14008FC04 (MiRemoveUnusedSubsection.c)
 *     MiSubsectionRequiresCharge @ 0x1400FA744 (MiSubsectionRequiresCharge.c)
 *     MiGetSubsectionCharges @ 0x1401F4F24 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(__int64 *a1, char a2, KIRQL a3)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int i; // esi
  int v9; // edi
  __int64 v11; // rcx
  int SubsectionCharges; // eax
  volatile LONG *v13; // rcx

  v3 = *a1;
  v4 = *((unsigned int *)a1 + 11);
  v5 = 0LL;
  for ( i = (a2 & 1) == 0; ; i |= 8u )
  {
    if ( !a1[1] )
      goto LABEL_13;
    v9 = MiIncrementSubsectionViewCount(a1, i);
    if ( v9 > 1 )
    {
      if ( (*((_BYTE *)a1 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection();
      *((_WORD *)a1 + 16) |= 1u;
    }
    if ( v9 >= 2 )
      break;
    if ( !v9 )
      return 3221225556LL;
LABEL_13:
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), a3);
    if ( (i & 8) != 0 )
    {
      MiReturnSubsectionCharges(v5);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225773LL;
    }
    MiSubsectionRequiresCharge(a1);
    v5 = v4;
    SubsectionCharges = MiGetSubsectionCharges(v11, v4);
    v13 = (volatile LONG *)(v3 + 72);
    if ( SubsectionCharges < 0 )
    {
      ExAcquireSpinLockExclusive(v13);
      return 3221225626LL;
    }
    ExAcquireSpinLockExclusive(v13);
    if ( !a1[1] || (_DWORD)v4 != *((_DWORD *)a1 + 11) )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), a3);
      MiReturnSubsectionCharges(v4);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225994LL;
    }
  }
  if ( v9 == 2 && (i & 8) != 0 )
  {
    if ( v5 )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), a3);
      MiReturnSubsectionCharges(v5);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    }
  }
  return 0LL;
}
