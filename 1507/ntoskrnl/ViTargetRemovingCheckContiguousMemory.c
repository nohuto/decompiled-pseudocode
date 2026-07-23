/*
 * XREFs of ViTargetRemovingCheckContiguousMemory @ 0x140745DD4
 * Callers:
 *     VfTargetDriversRemove @ 0x140025684 (VfTargetDriversRemove.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViTargetRemovingCheckContiguousMemory(ULONG_PTR a1, __int64 a2)
{
  _SLIST_ENTRY **v2; // rbx
  ULONG_PTR v3; // r8
  _SLIST_ENTRY *v4; // rcx
  _SLIST_ENTRY *Next; // rdx
  _SLIST_ENTRY **v6; // rax

  v2 = (_SLIST_ENTRY **)(a1 + 232);
  if ( *v2 != (_SLIST_ENTRY *)v2 )
  {
    v3 = *(_QWORD *)(a2 + 96);
    ViBadDriver = a2 + 88;
    VerifierBugCheckIfAppropriate(0xC4u, 0x62uLL, v3, a1, *(_QWORD *)(a1 + 216));
  }
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 == (_SLIST_ENTRY *)v2 )
      break;
    Next = v4->Next;
    v6 = (_SLIST_ENTRY **)*((_QWORD *)&v4->Next + 1);
    if ( *(&v4->Next->Next + 1) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = Next;
    *((_QWORD *)&Next->Next + 1) = v6;
    VfPoolDelayFreeIfPossible(v4, 0);
  }
}
