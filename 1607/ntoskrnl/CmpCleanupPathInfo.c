/*
 * XREFs of CmpCleanupPathInfo @ 0x140404920
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall CmpCleanupPathInfo(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  PSLIST_ENTRY result; // rax

  v1 = *(struct _SLIST_ENTRY **)(a1 + 160);
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
      return (PSLIST_ENTRY)((__int64 (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v1);
    }
  }
  return result;
}
