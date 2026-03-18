/*
 * XREFs of ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0075464
 * Callers:
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0004580 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C0079140 (-_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBu.c)
 * Callees:
 *     <none>
 */

_SINGLE_LIST_ENTRY *__fastcall FxObject::_CleanupPointer(_FX_DRIVER_GLOBALS *FxDriverGlobals, FxObject *Object)
{
  _SINGLE_LIST_ENTRY *p_m_DisposeSingleEntry; // rdi
  _SINGLE_LIST_ENTRY *Next; // rbx
  KIRQL v4; // al
  _SINGLE_LIST_ENTRY *v5; // rcx
  KIRQL v6; // dl
  _SINGLE_LIST_ENTRY *v7; // rax

  if ( SLOBYTE(Object->m_ObjectFlags) < 0 )
    Object = (FxObject *)((char *)Object - 32);
  p_m_DisposeSingleEntry = &Object[-1].m_DisposeSingleEntry;
  if ( FxDriverGlobals->FxPoolTrackingOn )
  {
    Next = p_m_DisposeSingleEntry->Next;
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&p_m_DisposeSingleEntry->Next[2].Next[1]);
    v5 = Next->Next;
    v6 = v4;
    v7 = Next[1].Next;
    if ( Next->Next[1].Next != Next || v7->Next != Next )
      __fastfail(3u);
    v7->Next = v5;
    v5[1].Next = v7;
    Next[2].Next[14].Next = (_SINGLE_LIST_ENTRY *)((char *)Next[2].Next[14].Next - (unsigned __int64)Next[4].Next);
    --LODWORD(Next[2].Next[16].Next);
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[2].Next[1], v6);
  }
  return p_m_DisposeSingleEntry;
}
