/*
 * XREFs of ViTargetRemovingCheckContiguousMemory @ 0x1407105C8
 * Callers:
 *     VfTargetDriversRemove @ 0x14012EDE8 (VfTargetDriversRemove.c)
 * Callees:
 *     VfUtilFreePoolDispatchLevel @ 0x14022267C (VfUtilFreePoolDispatchLevel.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViTargetRemovingCheckContiguousMemory(ULONG_PTR a1, __int64 a2)
{
  struct _SLIST_ENTRY **v2; // rbx
  struct _SLIST_ENTRY *v3; // rcx
  _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY **v5; // rax

  v2 = (struct _SLIST_ENTRY **)(a1 + 232);
  if ( *v2 != (struct _SLIST_ENTRY *)v2 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x62uLL, *(_QWORD *)(a2 + 96), a1, *(_QWORD *)(a1 + 216));
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (struct _SLIST_ENTRY *)v2 )
      break;
    Next = v3->Next;
    v5 = (struct _SLIST_ENTRY **)*((_QWORD *)&v3->Next + 1);
    if ( *(&v3->Next->Next + 1) != v3 || *v5 != v3 )
      __fastfail(3u);
    *v5 = Next;
    *((_QWORD *)&Next->Next + 1) = v5;
    VfUtilFreePoolDispatchLevel(v3);
  }
}
