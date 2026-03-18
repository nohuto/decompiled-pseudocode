/*
 * XREFs of ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C007FAFC
 * Callers:
 *     ?Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C007EA50 (-Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C007EAD0 (-Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C007EFC0 (-Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     memset @ 0x1C0040480 (memset.c)
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C007D9CC (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C007FD9C (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 */

int __fastcall FxLookasideList::InitializeLookaside(
        FxLookasideList *this,
        unsigned __int16 BufferSize,
        unsigned __int16 MemoryObjectSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // rdi
  int result; // eax
  unsigned __int64 size; // [rsp+40h] [rbp+8h] BYREF

  p_m_MemoryAttributes = &this->m_MemoryAttributes;
  if ( MemoryAttributes )
  {
    *(_OWORD *)&p_m_MemoryAttributes->Size = *(_OWORD *)&MemoryAttributes->Size;
    *(_OWORD *)&this->m_MemoryAttributes.EvtDestroyCallback = *(_OWORD *)&MemoryAttributes->EvtDestroyCallback;
    *(_OWORD *)&this->m_MemoryAttributes.ParentObject = *(_OWORD *)&MemoryAttributes->ParentObject;
    this->m_MemoryAttributes.ContextTypeInfo = MemoryAttributes->ContextTypeInfo;
  }
  else
  {
    memset(p_m_MemoryAttributes, 0, sizeof(_WDF_OBJECT_ATTRIBUTES));
  }
  result = FxCalculateObjectTotalSize(this->m_Globals, MemoryObjectSize, BufferSize, p_m_MemoryAttributes, &size);
  if ( result >= 0 )
  {
    result = FxPoolAddHeaderSize(this->m_Globals, size, &size);
    if ( result >= 0 )
    {
      this->m_MemoryObjectSize = size;
      this->m_BufferSize = BufferSize;
    }
  }
  return result;
}
