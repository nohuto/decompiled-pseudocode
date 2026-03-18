/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1406A9238
 * Callers:
 *     EtwpFreeFilterInfo @ 0x14048ECF4 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140491C98 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1406A8494 (EtwpAllocateEventNameFilter.c)
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
