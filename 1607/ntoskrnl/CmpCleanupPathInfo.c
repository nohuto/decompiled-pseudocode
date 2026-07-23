/*
 * XREFs of CmpCleanupPathInfo @ 0x1404037E0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall CmpCleanupPathInfo(__int64 a1)
{
  _SLIST_ENTRY *v1; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  PSLIST_ENTRY result; // rax

  v1 = *(_SLIST_ENTRY **)(a1 + 160);
  if ( v1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth )
      return RtlpInterlockedPushEntrySList(&P->ListHead, v1);
    ++P->FreeMisses;
    P = CurrentPrcb->PPLookasideList[8].L;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth )
    {
      return RtlpInterlockedPushEntrySList(&P->ListHead, v1);
    }
    else
    {
      ++P->FreeMisses;
      return (PSLIST_ENTRY)((__int64 (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v1);
    }
  }
  return result;
}
