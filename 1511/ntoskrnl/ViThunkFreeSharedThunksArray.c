/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x1406B22B0
 * Callers:
 *     VfThunkRemoveTargetNotify @ 0x1406B2068 (VfThunkRemoveTargetNotify.c)
 *     VfThunkAddTargetNotify @ 0x1406B2128 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x1406B21F8 (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ViThunkFreeSharedThunksArray(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x54496656u);
    *a1 = 0LL;
  }
}
