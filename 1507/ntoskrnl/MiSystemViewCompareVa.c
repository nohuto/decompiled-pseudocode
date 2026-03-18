/*
 * XREFs of MiSystemViewCompareVa @ 0x1400FA3C4
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiExceptionForMappedVa @ 0x14020DC94 (MiExceptionForMappedVa.c)
 *     MmCommitSessionMappedView @ 0x14051BB40 (MmCommitSessionMappedView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSystemViewCompareVa(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFF000uLL;
  if ( a1 < v2 + *(_QWORD *)(a2 + 32) )
    return (unsigned int)-(a1 < v2);
  else
    return 1LL;
}
