/*
 * XREFs of ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00A3564
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AAD08 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AD04C (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ??_G?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00A351C (--_G-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z.c)
 *     ??_G?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00AF868 (--_G-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z.c)
 */

void __fastcall Ndis::BindStack::~BindStack(Ndis::BindStack *this)
{
  void **p; // rcx
  unsigned int j; // edi
  unsigned int i; // edi

  p = this->Miniport.m_bindContext._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->Miniport.m_bindContext._p = 0LL;
    this->Miniport.m_bindContext.m_numElements = 0;
    this->Miniport.m_bindContext.m_bufferSize = 0;
  }
  if ( this->Filters._p )
  {
    for ( i = this->Filters.m_numElements;
          i;
          KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(&this->Filters._p[i]) )
    {
      --i;
    }
    ExFreePoolWithTag(this->Filters._p, 0x7272414Bu);
    this->Filters._p = 0LL;
    this->Filters.m_numElements = 0;
    this->Filters.m_bufferSize = 0;
  }
  if ( this->Protocols._p )
  {
    for ( j = this->Protocols.m_numElements;
          j;
          KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'((__int64 *)&this->Protocols._p[j]) )
    {
      --j;
    }
    ExFreePoolWithTag(this->Protocols._p, 0x7272414Bu);
    this->Protocols._p = 0LL;
    this->Protocols.m_numElements = 0;
    this->Protocols.m_bufferSize = 0;
  }
}
