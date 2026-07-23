/*
 * XREFs of CmpFreeExtraHashInfo @ 0x140119718
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall CmpFreeExtraHashInfo(_SLIST_ENTRY *a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // r8

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth )
    return RtlpInterlockedPushEntrySList(&P->ListHead, a1);
  ++P->FreeMisses;
  P = CurrentPrcb->PPLookasideList[8].L;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth )
    return RtlpInterlockedPushEntrySList(&P->ListHead, a1);
  ++P->FreeMisses;
  return (PSLIST_ENTRY)((__int64 (*)(void))P->FreeEx)();
}
