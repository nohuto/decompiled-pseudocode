/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x1403DC1C0
 * Callers:
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 */

void __fastcall ObDeleteCapturedInsertInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _SLIST_ENTRY *v7; // rdx
  _GENERAL_LOOKASIDE *P; // r8

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a1 - 16);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 32);
      if ( v5 )
      {
        LOBYTE(a2) = *(_BYTE *)(v4 + 16);
        LOBYTE(a3) = 1;
        SeReleaseSecurityDescriptor(v5, a2, a3);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = *(_SLIST_ENTRY **)(a1 - 16);
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, v7);
      }
      else
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v7);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
}
