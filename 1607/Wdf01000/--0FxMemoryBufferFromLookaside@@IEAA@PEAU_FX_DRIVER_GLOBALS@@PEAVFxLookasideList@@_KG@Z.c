/*
 * XREFs of ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x1C0011C14
 * Callers:
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C007AD70 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C007B798 (--0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z.c)
 * Callees:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0014C50 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 */

void __fastcall FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(
        FxMemoryBufferFromLookaside *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxLookasideList *Lookaside,
        unsigned __int64 BufferSize)
{
  FxMemoryObject::FxMemoryObject(this, FxDriverGlobals, 0x88u, BufferSize);
  this->m_pLookaside = Lookaside;
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::AddRef(Lookaside, this, 100, "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp");
}
