/*
 * XREFs of ViDeadlockRemoveThread @ 0x140715AC4
 * Callers:
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140223944 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 *     ViDeadlockEmptyDatabase @ 0x1407151DC (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x140702C28 (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x1407156D0 (ViDeadlockPreprocessOptions.c)
 */

_QWORD *__fastcall ViDeadlockRemoveThread(__int64 a1, int a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rcx
  _QWORD *result; // rax

  if ( *((_DWORD *)ViDeadlockGlobals + 8196) || *((_DWORD *)ViDeadlockGlobals + 8282) > ViDeadlockChildrenCountMaximum )
    a2 = 1;
  if ( !a2 && *(_DWORD *)(a1 + 40) )
  {
    ViDeadlockPreprocessOptions(&byte_1402F99C4, "Terminated thread 0x%p owns lock.", 4106LL, *(_QWORD *)a1, a1, 0LL);
    VfReportIssueWithOptions(196, 4106, *(_QWORD *)a1, a1, 0LL, &byte_1402F99C4);
  }
  v3 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 2051);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD *)(v4 + 8) != a1 + 24 || *v5 != a1 + 24 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = (*(_QWORD *)a1 >> 12) % 0x3FFuLL;
  if ( *(_QWORD *)(v3[2050] + 16 * v6) != v3[2050] + 16 * v6 )
    return (_QWORD *)VfUtilAddressRangeRemove(&v3[2 * v6 + 2052], *(_QWORD *)a1, 2016LL);
  result = &v3[2 * v6 + 2052];
  *result = 0LL;
  result[1] = 0LL;
  return result;
}
