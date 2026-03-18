/*
 * XREFs of ??0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z @ 0x1C0079214
 * Callers:
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0077DA0 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
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

  FxMemoryObject::FxMemoryObject(this, FxDriverGlobals, ((BufferSize + 15) & 0xFFF0) + 128, BufferSize);
  this->m_pLookaside = Lookaside;
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  RefCount = _InterlockedIncrement(&Lookaside->m_Refcnt);
  if ( (Lookaside->m_ObjectFlags & 0x80) != 0 )
    ContextTypeInfo = (FxTagTracker *)Lookaside[-1].m_MemoryAttributes.ContextTypeInfo;
  else
    ContextTypeInfo = 0LL;
  if ( ContextTypeInfo )
    FxTagTracker::UpdateTagHistory(
      ContextTypeInfo,
      this,
      100,
      "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp",
      TagAddRef,
      RefCount);
}
