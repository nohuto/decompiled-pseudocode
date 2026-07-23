/*
 * XREFs of PiDqQueryFreeActiveData @ 0x14053D550
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x1404407A4 (PiDqQueryAppendActionEntry.c)
 *     PiDqIrpQueryCreate @ 0x1404419DC (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryGetResult @ 0x140444BEC (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14053CF2C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryRelease @ 0x14053D4E0 (PiDqQueryRelease.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x140019610 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140442488 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x14044266C (PiDqActionDataFree.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14053D5D8 (PiDqQueryDeleteObjectFromResultSet.c)
 */

void __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  __int64 **v3; // rdi
  void *v4; // rcx
  __int64 *v5; // rcx
  __int64 v6; // rax

  for ( i = (_RTL_AVL_TABLE *)(a1 + 72); !RtlIsGenericTableEmptyAvl(i); i = (_RTL_AVL_TABLE *)(a1 + 72) )
    PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL));
  v3 = (__int64 **)(a1 + 192);
  while ( *v3 != (__int64 *)v3 )
  {
    v5 = *v3;
    v6 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    PiDqQueryActionQueueEntryFree(v5);
  }
  *(_DWORD *)(a1 + 208) = 0;
  v4 = *(void **)(a1 + 184);
  if ( v4 )
  {
    PiDqActionDataFree(v4);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
}
