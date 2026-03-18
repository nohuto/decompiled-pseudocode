/*
 * XREFs of ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C007F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000577C (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 */

void __fastcall FxPagedLookasideListFromPool::Reclaim(
        FxPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside *Memory)
{
  _SLIST_ENTRY **v3; // rax

  v3 = (_SLIST_ENTRY **)FxObject::_CleanupPointer(this->m_Globals, Memory);
  FxFreeToNPagedLookasideList((_PAGED_LOOKASIDE_LIST *)&this->m_ObjectLookaside, *v3);
}
