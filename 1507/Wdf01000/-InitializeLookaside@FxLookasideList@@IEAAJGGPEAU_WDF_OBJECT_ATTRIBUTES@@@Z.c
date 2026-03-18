/*
 * XREFs of ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0079038
 * Callers:
 *     ?Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0077F90 (-Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0078010 (-Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0078500 (-Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C00796E0 (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 */

int __fastcall FxLookasideList::InitializeLookaside(
        FxLookasideList *this,
        unsigned __int16 BufferSize,
        unsigned __int16 MemoryObjectSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // rdi
  int result; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 v10; // rcx
  unsigned __int16 v11; // r9
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
    m_Globals = this->m_Globals;
    v10 = size + 16;
    if ( size + 16 < size )
    {
      v11 = 10;
    }
    else
    {
      if ( !m_Globals->FxPoolTrackingOn )
      {
LABEL_9:
        this->m_BufferSize = BufferSize;
        result = 0;
        this->m_MemoryObjectSize = v10;
        return result;
      }
      if ( size + 80 >= size + 16 )
      {
        v10 = size + 80;
        goto LABEL_9;
      }
      v11 = 11;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v11, WPP_FxPoolInlines_hpp_Traceguids, -1073741675);
    return -1073741675;
  }
  return result;
}
