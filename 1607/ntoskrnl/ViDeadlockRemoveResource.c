/*
 * XREFs of ViDeadlockRemoveResource @ 0x140715928
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1402237EC (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockAddResource @ 0x14071474C (ViDeadlockAddResource.c)
 *     ViDeadlockEmptyDatabase @ 0x1407151DC (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x140702C28 (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x1407156D0 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveNode @ 0x1407157C4 (ViDeadlockRemoveNode.c)
 */

_QWORD *__fastcall ViDeadlockRemoveResource(__int64 *a1, int a2, __int64 *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  _QWORD *v9; // r9
  __int64 v10; // rdx
  __int64 **v11; // rcx
  unsigned __int64 v12; // rcx
  _QWORD *result; // rax

  if ( *((_DWORD *)ViDeadlockGlobals + 8196) || *((_DWORD *)ViDeadlockGlobals + 8282) > ViDeadlockChildrenCountMaximum )
    a2 = 1;
  if ( !a2 )
  {
    v6 = (__int64 *)a1[2];
    if ( v6 )
    {
      ViDeadlockPreprocessOptions(
        &byte_1402F99C0,
        "Deleted lock 0x%p is still owned by the thread 0x%p.",
        4107LL,
        a1[1],
        *v6,
        (__int64)a1);
      VfReportIssueWithOptions(196, 4107, a1[1], *(_QWORD *)a1[2], (ULONG_PTR)a1, &byte_1402F99C0);
    }
  }
  v7 = (__int64 *)a1[3];
  while ( v7 != a1 + 3 )
  {
    v8 = v7 - 5;
    v7 = (__int64 *)*v7;
    ViDeadlockRemoveNode(v8, a2);
    *v8 = *a3;
    *a3 = (__int64)v8;
  }
  v9 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 3);
  v10 = a1[5];
  v11 = (__int64 **)a1[6];
  if ( *(__int64 **)(v10 + 8) != a1 + 5 || *v11 != a1 + 5 )
    __fastfail(3u);
  *v11 = (__int64 *)v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = ((unsigned __int64)a1[1] >> 12) % 0x3FF;
  if ( *(_QWORD *)(v9[2] + 16 * v12) != v9[2] + 16 * v12 )
    return (_QWORD *)VfUtilAddressRangeRemove(
                       &v9[2 * v12 + 4],
                       a1[1],
                       (unsigned int)ViDeadlockResourceTypeSizeInfo[*(int *)a1]);
  result = &v9[2 * v12 + 4];
  *result = 0LL;
  result[1] = 0LL;
  return result;
}
