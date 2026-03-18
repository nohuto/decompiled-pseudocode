/*
 * XREFs of ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0004440
 * Callers:
 *     ?_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C000441C (-_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBu.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C00086B0 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 * Callees:
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0069DBC (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

FX_POOL_TRACKER **__fastcall FxObject::_CleanupPointer(_FX_DRIVER_GLOBALS *FxDriverGlobals, FxObject *Object)
{
  FX_POOL_TRACKER **p_m_DisposeSingleEntry; // rbx

  if ( SLOBYTE(Object->m_ObjectFlags) < 0 )
    Object = (FxObject *)((char *)Object - 32);
  p_m_DisposeSingleEntry = (FX_POOL_TRACKER **)&Object[-1].m_DisposeSingleEntry;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    FxPoolRemoveNonPagedAllocateTracker(*p_m_DisposeSingleEntry);
  return p_m_DisposeSingleEntry;
}
