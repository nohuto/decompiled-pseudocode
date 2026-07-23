/*
 * XREFs of WmipFindGEByGuid @ 0x1404735A0
 * Callers:
 *     WmipOpenBlock @ 0x1404733AC (WmipOpenBlock.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532884 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140537BD0 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x140537E28 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140538080 (WmipProcessEvent.c)
 *     WmipLinkDataSourceToList @ 0x1405381E4 (WmipLinkDataSourceToList.c)
 *     WmipMangleInstanceName @ 0x1405383F8 (WmipMangleInstanceName.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x140473870 (WmipReferenceEntry.c)
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
    if ( *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) != WmipGEHeadPtr )
      __fastfail(3u);
    *i = v10;
    i[1] = v9;
    *(_QWORD *)(v10 + 8) = i;
    *v9 = i;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
