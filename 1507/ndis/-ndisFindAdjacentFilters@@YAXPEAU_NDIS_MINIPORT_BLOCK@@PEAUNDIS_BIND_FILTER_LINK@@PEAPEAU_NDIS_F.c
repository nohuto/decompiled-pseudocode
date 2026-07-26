/*
 * XREFs of ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00A1B74
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?LockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A3230 (-LockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00A3344 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 */

void __fastcall ndisFindAdjacentFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct _NDIS_FILTER_BLOCK **a3,
        struct _NDIS_FILTER_BLOCK **a4)
{
  Ndis::BindEngine *p_BindEngine; // rbp
  struct _NDIS_FILTER_BLOCK *BindContext; // rsi
  unsigned __int64 v10; // r10
  NDIS_BIND_FILTER_LINK *p; // rcx
  __int64 v12; // rdx
  __int64 v13; // r10
  unsigned __int64 v14; // r10
  __int64 v15; // rdx

  p_BindEngine = &a1->BindEngine;
  BindContext = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  Ndis::BindEngine::LockBindings(&a1->BindEngine);
  v10 = 0LL;
  if ( a1->Bindings.Filters.m_numElements )
  {
    while ( 1 )
    {
      if ( v10 >= a1->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      p = a1->Bindings.Filters._p[v10]._p;
      if ( p == a2 )
        break;
      if ( Ndis::BindState::GetBindContext(&p->BindState) )
        BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext((Ndis::BindState *)(*(_QWORD *)(v12 + 8 * v13) + 8LL));
      v10 = v13 + 1;
      if ( v10 >= a1->Bindings.Filters.m_numElements )
        goto LABEL_7;
    }
    *a4 = BindContext;
    while ( 1 )
    {
      v14 = v10 + 1;
      if ( v14 >= a1->Bindings.Filters.m_numElements )
        break;
      if ( Ndis::BindState::GetBindContext(&a1->Bindings.Filters._p[v14]._p->BindState) )
      {
        *a3 = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext((Ndis::BindState *)(*(_QWORD *)(v15 + 8 * v10)
                                                                                             + 8LL));
        break;
      }
    }
  }
LABEL_7:
  Ndis::BindEngine::UnlockBindings(p_BindEngine);
}
