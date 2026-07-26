/*
 * XREFs of ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00A11D4
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009AE00 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

void __fastcall Ndis::BindStack::~BindStack(Ndis::BindStack *this)
{
  void **p; // rcx
  __int64 v3; // rdi
  NDIS_BIND_PROTOCOL_LINK *v4; // rsi
  __int64 v5; // rdi
  NDIS_BIND_FILTER_LINK *v6; // rsi

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
    LODWORD(v5) = this->Filters.m_numElements;
    while ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      v6 = this->Filters._p[v5]._p;
      if ( v6 )
      {
        KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v6->BindDriver);
        NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(&v6->NDIS_BIND_LINK_BASE);
        ExFreePoolWithTag(v6, 0x4C6C4642u);
      }
    }
    ExFreePoolWithTag(this->Filters._p, 0x7272414Bu);
    this->Filters._p = 0LL;
    this->Filters.m_numElements = 0;
    this->Filters.m_bufferSize = 0;
  }
  if ( this->Protocols._p )
  {
    LODWORD(v3) = this->Protocols.m_numElements;
    while ( (_DWORD)v3 )
    {
      v3 = (unsigned int)(v3 - 1);
      v4 = this->Protocols._p[v3]._p;
      if ( v4 )
      {
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v4->BindDriver);
        NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(&v4->NDIS_BIND_LINK_BASE);
        ExFreePoolWithTag(v4, 0x4C745042u);
      }
    }
    ExFreePoolWithTag(this->Protocols._p, 0x7272414Bu);
    this->Protocols._p = 0LL;
    this->Protocols.m_numElements = 0;
    this->Protocols.m_bufferSize = 0;
  }
}
