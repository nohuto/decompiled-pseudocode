/*
 * XREFs of CmpExpandPathInfo @ 0x14049B7CC
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpComputeComponentHashes @ 0x14049B480 (CmpComputeComponentHashes.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall CmpExpandPathInfo(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  unsigned int v4; // ebx
  PSLIST_ENTRY v5; // rdi
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v4 = 0;
  v5 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v5 )
    goto LABEL_2;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v5 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v5
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v5 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_2:
    LODWORD(v5->Next) = CurrentPrcb->Number;
    memset(v5, 0, 0x1E0uLL);
    *(_QWORD *)(a1 + 160) = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
