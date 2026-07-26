/*
 * XREFs of ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00995D8
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00994E4 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00D7610 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 */

void __fastcall Ndis::BindState::RemoveBindContext(Ndis::BindState *this, void *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 m_numElements; // rcx
  unsigned __int64 v5; // rax
  unsigned int v6; // eax

  v2 = 0LL;
  if ( this->m_bindContext.m_numElements )
  {
    m_numElements = this->m_bindContext.m_numElements;
    while ( 1 )
    {
      if ( v2 >= m_numElements )
        __fastfail(0xBAD0FFu);
      v5 = this->m_bindContext.m_numElements;
      if ( this->m_bindContext._p[v2] == a2 )
        break;
      if ( ++v2 >= v5 )
        return;
    }
    if ( v2 >= v5 )
      __fastfail(0xBAD0FFu);
    v6 = v5 - v2 - 1;
    if ( v6 )
      memmove(&this->m_bindContext._p[(unsigned int)v2], &this->m_bindContext._p[(unsigned int)(v2 + 1)], 8LL * v6);
    --this->m_bindContext.m_numElements;
  }
}
