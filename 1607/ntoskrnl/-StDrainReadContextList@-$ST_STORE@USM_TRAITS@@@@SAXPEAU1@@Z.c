/*
 * XREFs of ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400046D0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003634 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003FBC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CC9C (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140166E80 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDrainReadContextList(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY v1; // rbx
  PSLIST_ENTRY v2; // rcx

  v1 = RtlpInterlockedFlushSList(a1 + 246);
  while ( v1 )
  {
    v2 = v1;
    v1 = v1->Next;
    ExFreePoolWithTag(v2, 0);
  }
}
