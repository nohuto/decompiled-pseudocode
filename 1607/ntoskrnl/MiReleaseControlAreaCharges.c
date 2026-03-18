/*
 * XREFs of MiReleaseControlAreaCharges @ 0x140027350
 * Callers:
 *     MiInsertUnusedSegment @ 0x140026FEC (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x140027BB0 (MiIncludeSharedCommit.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v5; // rdi
  KIRQL v6; // dl
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( !(unsigned int)MiIncludeSharedCommit() )
    return 0LL;
  v5 = 0LL;
  if ( v2 == 1 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  if ( (*(_DWORD *)(a1 + 60) & 0xFFFFFC00) != 0 )
  {
    v7 = a1 + 128;
    *(_DWORD *)(a1 + 60) &= 0x3FFu;
    while ( v7 )
    {
      v8 = *(unsigned int *)(v7 + 44);
      v7 = *(_QWORD *)(v7 + 16);
      v5 += v8;
    }
  }
  if ( v6 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
  return v5;
}
