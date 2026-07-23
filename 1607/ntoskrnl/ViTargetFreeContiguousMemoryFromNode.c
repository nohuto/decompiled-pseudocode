/*
 * XREFs of ViTargetFreeContiguousMemoryFromNode @ 0x14071052C
 * Callers:
 *     ViTargetFreeContiguousMemory @ 0x14071049C (ViTargetFreeContiguousMemory.c)
 *     ViTargetFreeContiguousMemoryCallback @ 0x14071050C (ViTargetFreeContiguousMemoryCallback.c)
 * Callees:
 *     VfUtilFreePoolDispatchLevel @ 0x1402224A8 (VfUtilFreePoolDispatchLevel.c)
 */

__int64 __fastcall ViTargetFreeContiguousMemoryFromNode(_SLIST_ENTRY *a1, __int64 a2)
{
  __int64 v2; // r8
  _SLIST_ENTRY *i; // rcx
  _SLIST_ENTRY *Next; // rdx
  _SLIST_ENTRY **v7; // rax

  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 )
  {
    for ( i = *(_SLIST_ENTRY **)(v2 + 232); i != (_SLIST_ENTRY *)(v2 + 232); i = i->Next )
    {
      if ( i[1].Next == a1 )
      {
        Next = i->Next;
        v7 = (_SLIST_ENTRY **)*((_QWORD *)&i->Next + 1);
        if ( *(&i->Next->Next + 1) != i || *v7 != i )
          __fastfail(3u);
        *v7 = Next;
        *((_QWORD *)&Next->Next + 1) = v7;
        *(_QWORD *)(v2 + 216) -= *((_QWORD *)&i[1].Next + 1);
        VfUtilFreePoolDispatchLevel(i);
        return 1LL;
      }
    }
  }
  return 0LL;
}
