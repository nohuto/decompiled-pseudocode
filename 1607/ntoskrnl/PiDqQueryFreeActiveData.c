/*
 * XREFs of PiDqQueryFreeActiveData @ 0x14048D088
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14048ADF8 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqIrpQueryCreate @ 0x14048B94C (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048BBB8 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048C498 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryRelease @ 0x14048CAEC (PiDqQueryRelease.c)
 *     PiDqQueryAppendActionEntry @ 0x14048CEA0 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x1400C1CE0 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14048C268 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x14048C44C (PiDqActionDataFree.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1404D1050 (PiDqQueryDeleteObjectFromResultSet.c)
 */

void __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  __int64 **v3; // rdi
  _QWORD *v4; // rcx
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
  v4 = *(_QWORD **)(a1 + 184);
  if ( v4 )
  {
    PiDqActionDataFree(v4);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
}
