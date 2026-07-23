/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x1404ECC84
 * Callers:
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 */

void __fastcall ObDeleteCapturedInsertInfo(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _SLIST_ENTRY *v5; // rdx
  _GENERAL_LOOKASIDE *P; // r8

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 - 16);
    if ( v2 )
    {
      v3 = *(void **)(v2 + 32);
      if ( v3 )
      {
        SeReleaseSecurityDescriptor(v3, *(_BYTE *)(v2 + 16), 1);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = *(_SLIST_ENTRY **)(a1 - 16);
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, v5);
      }
      else
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v5);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
}
