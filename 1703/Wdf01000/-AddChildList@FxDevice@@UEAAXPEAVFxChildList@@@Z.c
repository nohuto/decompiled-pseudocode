/*
 * XREFs of ?AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C001FFE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxDevice::AddChildList(FxDevice *this, unsigned __int64 List)
{
  FxPkgPnp *m_PkgPnp; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v5; // rsi
  __int64 p_m_ChildListList; // rbx
  FxTransactionedEntry *v7; // rdi
  __int64 v8; // r8
  FxTransactionedEntry **v9; // rcx
  unsigned __int16 v10; // ax
  const void *_a2; // rdx
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *p_m_TransactionLink; // rdi
  char v14; // [rsp+50h] [rbp+8h] BYREF

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
  {
    m_Globals = m_PkgPnp->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v10 = *(_WORD *)(List + 10);
      _a2 = (const void *)(List ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v10 )
        _a2 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x4Au, WPP_FxPkgPnp_cpp_Traceguids, (const void *)List, _a2);
    }
    v5 = m_PkgPnp->m_Globals;
    p_m_ChildListList = (__int64)&m_PkgPnp->m_EnumInfo->m_ChildListList;
    v7 = (FxTransactionedEntry *)(List + 120);
    (**(void (__fastcall ***)(__int64, _FX_DRIVER_GLOBALS *, char *))p_m_ChildListList)(p_m_ChildListList, v5, &v14);
    if ( !*(_BYTE *)(p_m_ChildListList + 53)
      && (*(int (__fastcall **)(__int64, FxTransactionedEntry *))(*(_QWORD *)p_m_ChildListList + 16LL))(
           p_m_ChildListList,
           v7) >= 0 )
    {
      if ( *(_DWORD *)(p_m_ChildListList + 48) )
      {
        v7->m_Transaction = FxTransactionActionAdd;
        v12 = *(_LIST_ENTRY **)(p_m_ChildListList + 32);
        p_m_TransactionLink = &v7->m_TransactionLink;
        if ( v12->Flink != (_LIST_ENTRY *)(p_m_ChildListList + 24) )
          __fastfail(3u);
        p_m_TransactionLink->Flink = (_LIST_ENTRY *)(p_m_ChildListList + 24);
        p_m_TransactionLink->Blink = v12;
        v12->Flink = p_m_TransactionLink;
        *(_QWORD *)(p_m_ChildListList + 32) = p_m_TransactionLink;
      }
      else
      {
        v9 = *(FxTransactionedEntry ***)(p_m_ChildListList + 16);
        if ( *v9 != (FxTransactionedEntry *)(p_m_ChildListList + 8) )
          __fastfail(3u);
        v7->m_ListLink.Flink = (_LIST_ENTRY *)(p_m_ChildListList + 8);
        v7->m_ListLink.Blink = (_LIST_ENTRY *)v9;
        *v9 = v7;
        *(_QWORD *)(p_m_ChildListList + 16) = v7;
        (*(void (__fastcall **)(__int64, FxTransactionedEntry *))(*(_QWORD *)p_m_ChildListList + 24LL))(
          p_m_ChildListList,
          v7);
      }
    }
    LOBYTE(v8) = v14;
    (*(void (__fastcall **)(__int64, _FX_DRIVER_GLOBALS *, __int64))(*(_QWORD *)p_m_ChildListList + 8LL))(
      p_m_ChildListList,
      v5,
      v8);
  }
}
