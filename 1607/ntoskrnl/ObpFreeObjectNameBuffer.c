/*
 * XREFs of ObpFreeObjectNameBuffer @ 0x140405DC0
 * Callers:
 *     ObReferenceObjectByName @ 0x140405BE0 (ObReferenceObjectByName.c)
 *     ObCreateObjectEx @ 0x14041D970 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140442AB0 (IopAllocRealFileObject.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     <none>
 */

void __fastcall ObpFreeObjectNameBuffer(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8

  v1 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( *(_WORD *)(a1 + 2) == 248 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[5].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[5].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v1);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v1);
    }
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
  }
}
