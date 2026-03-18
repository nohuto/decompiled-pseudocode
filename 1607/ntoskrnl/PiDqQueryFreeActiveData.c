/*
 * XREFs of PiDqQueryFreeActiveData @ 0x14048CA74
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14048AB64 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048AD7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqIrpQueryCreate @ 0x14048B3E8 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048B654 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048BF34 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryRelease @ 0x14048C588 (PiDqQueryRelease.c)
 *     PiDqQueryAppendActionEntry @ 0x14048C88C (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x1400C3E40 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14048A260 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14048BD04 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x14048BEE8 (PiDqActionDataFree.c)
 */

void __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  struct _RTL_AVL_TABLE *i; // rcx
  __int64 **v3; // rdi
  _QWORD *v4; // rcx
  __int64 *v5; // rcx
  __int64 v6; // rax

  for ( i = (struct _RTL_AVL_TABLE *)(a1 + 72); !RtlIsGenericTableEmptyAvl(i); i = (struct _RTL_AVL_TABLE *)(a1 + 72) )
    PiDqQueryDeleteObjectFromResultSet(a1, *(void **)(*(_QWORD *)(a1 + 88) + 32LL));
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
