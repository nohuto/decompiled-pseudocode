/*
 * XREFs of WmipFindGEByGuid @ 0x1404A9D94
 * Callers:
 *     WmipOpenBlock @ 0x1404A9494 (WmipOpenBlock.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1404A9688 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipProcessEvent @ 0x1404A9A7C (WmipProcessEvent.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14057BD98 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x14057BE58 (WmipMangleInstanceName.c)
 *     WmipLinkDataSourceToList @ 0x14057C03C (WmipLinkDataSourceToList.c)
 *     WmipEnableCollectionForNewGuid @ 0x14057D87C (WmipEnableCollectionForNewGuid.c)
 *     WmipIncludeStaticNames @ 0x1406E07DC (WmipIncludeStaticNames.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x1404A9FE0 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindGEByGuid(_QWORD *a1, char a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)WmipGEHeadPtr; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)WmipGEHeadPtr )
    {
      KeReleaseMutex(&WmipSMMutex, 0);
      return 0LL;
    }
    v5 = *a1 - i[9];
    if ( *a1 == i[9] )
      v5 = a1[1] - i[10];
    if ( !v5 )
      break;
  }
  WmipReferenceEntry((ULONG_PTR)i);
  if ( a2 )
  {
    v7 = (_QWORD *)*i;
    v8 = (_QWORD *)i[1];
    if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v8 != i )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    v9 = (_QWORD *)WmipGEHeadPtr;
    v10 = *(_QWORD *)WmipGEHeadPtr;
    *i = *(_QWORD *)WmipGEHeadPtr;
    i[1] = v9;
    if ( *(_QWORD **)(v10 + 8) != v9 )
      __fastfail(3u);
    *(_QWORD *)(v10 + 8) = i;
    *v9 = i;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
