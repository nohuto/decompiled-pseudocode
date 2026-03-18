/*
 * XREFs of ?CitAllocZero@@YAPEAX_K@Z @ 0x1C000EC9C
 * Callers:
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C000EC34 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F85C (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00F7360 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00F78FC (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void *__fastcall CitAllocZero(size_t Size)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = (void *)Win32AllocPool(Size, 1231254357LL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, Size);
  return v3;
}
