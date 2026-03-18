/*
 * XREFs of ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C00670A0
 * Callers:
 *     imp_WdfCommonBufferCreate @ 0x1C0069D10 (imp_WdfCommonBufferCreate.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001B770 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxCommonBuffer::FxCommonBuffer(
        FxCommonBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDmaEnabler *pDmaEnabler)
{
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1402, 0xB8u, FxDriverGlobals);
  this->m_DmaEnabler = pDmaEnabler;
  this->__vftable = (FxCommonBuffer_vtbl *)FxCommonBuffer::`vftable';
  this->m_BufferRawVA = 0LL;
  this->m_BufferAlignedVA = 0LL;
  this->m_BufferAlignedLA.QuadPart = 0LL;
  this->m_BufferRawLA.QuadPart = 0LL;
  this->m_Length = 0LL;
  this->m_RawLength = 0LL;
  this->m_ObjectFlags |= 0x800u;
  this->m_Alignment = pDmaEnabler->m_CommonBufferAlignment;
}
