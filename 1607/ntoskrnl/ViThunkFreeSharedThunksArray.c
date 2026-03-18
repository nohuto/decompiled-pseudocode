/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x1406FE100
 * Callers:
 *     VfThunkAddTargetNotify @ 0x1406FDDDC (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x1406FDEAC (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x1406FE1D8 (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
