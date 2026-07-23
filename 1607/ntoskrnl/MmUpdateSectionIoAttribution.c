/*
 * XREFs of MmUpdateSectionIoAttribution @ 0x1400A5F88
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     MiLockSectionControlArea @ 0x14002144C (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall MmUpdateSectionIoAttribution(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdi
  KIRQL OldIrql; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = MiLockSectionControlArea(a1, 1, &OldIrql);
  if ( v4 )
  {
    if ( a2 != 8LL * *(_QWORD *)(v4 + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 32)) <= 1 )
        __fastfail(0xEu);
      v5 = *(_QWORD *)(v4 + 120) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v4 + 120) = (a2 >> 3) | *(_QWORD *)(v4 + 120) & 0xE000000000000000uLL;
      v3 = 8 * v5;
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72), OldIrql);
    if ( v3 )
      IoDiskIoAttributionDereference(v3);
  }
}
