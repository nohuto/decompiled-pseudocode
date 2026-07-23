/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1406A9370
 * Callers:
 *     EtwpFreeFilterInfo @ 0x14048F784 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140492728 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1406A85CC (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(a1, 0);
}
