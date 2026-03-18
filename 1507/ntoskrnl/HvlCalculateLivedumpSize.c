/*
 * XREFs of HvlCalculateLivedumpSize @ 0x1401EEEC4
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1403FF1F0 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlCalculateLivedumpSize(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9

  if ( (HvlpRootFlags & 2) == 0 )
    return 3221225659LL;
  v4 = 0;
  if ( !qword_14034D088 || !HvlpHypervisorStatsPage )
    return 3221225659LL;
  v5 = *(_QWORD *)(HvlpHypervisorStatsPage + 24);
  v6 = (unsigned __int64)(v5 + 767) >> 9;
  v7 = (v6 + 511) >> 9;
  if ( (v7 + 511) >> 9 == 1 )
  {
    *a2 = (unsigned int)(dword_14034D098 << 12);
    *a1 = (v7 + v6 + v5 + 258) << 12;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
