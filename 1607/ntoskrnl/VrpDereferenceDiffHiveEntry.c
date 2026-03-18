/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x140616FDC
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140617474 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x140617878 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x140617028 (VrpDereferenceDiffHiveEntryWithLock.c)
 *     VrpLockDiffHiveTableExclusive @ 0x140617778 (VrpLockDiffHiveTableExclusive.c)
 */

__int64 __fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  __int64 result; // rax
  __int64 v3; // rtt

  _m_prefetchw(P + 2);
  result = P[2];
  while ( result - 1 > 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(P + 2, result - 1, result);
    if ( v3 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  VrpLockDiffHiveTableExclusive();
  VrpDereferenceDiffHiveEntryWithLock(P);
  return VrpUnlockDiffHiveTable();
}
