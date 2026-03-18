/*
 * XREFs of ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x1C0079194
 * Callers:
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0078260 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C00792AC (--0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z.c)
 * Callees:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0012998 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(
        FxMemoryBufferFromLookaside *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxLookasideList *Lookaside,
        unsigned __int64 BufferSize)
{
  unsigned int RefCount; // edx
  FxTagTracker *ContextTypeInfo; // rcx

  FxMemoryObject::FxMemoryObject(this, FxDriverGlobals, 0x88u, BufferSize);
  this->m_pLookaside = Lookaside;
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  RefCount = _InterlockedIncrement(&Lookaside->m_Refcnt);
  if ( SLOBYTE(Lookaside->m_ObjectFlags) >= 0 )
    ContextTypeInfo = 0LL;
  else
    ContextTypeInfo = (FxTagTracker *)Lookaside[-1].m_MemoryAttributes.ContextTypeInfo;
  if ( ContextTypeInfo )
    FxTagTracker::UpdateTagHistory(
      ContextTypeInfo,
      this,
      100,
      "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp",
      TagAddRef,
      RefCount);
}
