/*
 * XREFs of ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00A1BA0
 * Callers:
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C006031C (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C006043C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     qsort_0 @ 0x1C0011486 (qsort_0.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v1; // rax
  __int16 v2; // ax
  __int64 v3; // rbx
  unsigned int i; // edx
  __int64 v5; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v1 )
    v2 = *(_WORD *)(v1 + 20);
  else
    v2 = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    qsort_0(
      (void *)(v3 + 48),
      *(unsigned __int16 *)(v3 + 20),
      0xD8uLL,
      CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback);
    for ( i = 0; i < *(unsigned __int16 *)(v3 + 20); *(_DWORD *)(216 * v5 + v3 + 232) = 0 )
      v5 = i++;
  }
  return 0LL;
}
