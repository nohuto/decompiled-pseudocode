/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0009CDC
 * Callers:
 *     ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00BFE00 (-AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0004FDC (--4-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008774 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C001945C (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C0092860 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetCofuncModeSet(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax

  v4 = *a2;
  if ( *(_QWORD *)(*a2 + 48) == *a2 + 48 )
  {
    v11 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v11 + 24) = *a2;
    *(_QWORD *)(v11 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v11);
    v12 = -1071774968;
LABEL_13:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(a2, 0LL);
    return v12;
  }
  if ( v4 != *(_QWORD *)(a1 + 120) )
  {
    v13 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v13 + 24) = *a2;
    *(_QWORD *)(v13 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v13);
    v12 = -1071774928;
    goto LABEL_13;
  }
  v5 = (__int64 *)(a1 + 104);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 104) + 144LL) )
    goto LABEL_4;
  v14 = Set<DMMVIDPNSOURCEMODE>::FindByValue(v4 + 24);
  if ( !v14 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    WdLogEvent5_WdError(v16);
    v12 = -1071774958;
    goto LABEL_13;
  }
  DMMVIDPNSOURCEMODESET::PinMode((DMMVIDPNSOURCEMODESET *)*a2, *(_DWORD *)(v14 + 24));
LABEL_4:
  *(_BYTE *)(*v5 + 136) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96) > 1
    && !DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(*(_QWORD *)(a1 + 112), *v5) )
  {
    v9 = (_QWORD *)(v7 + 8);
    v10 = *(_QWORD **)(v8 + 24);
    *v9 = v8 + 16;
    v9[1] = v10;
    if ( *v10 != v8 + 16 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v8 + 24) = v9;
    ++*(_QWORD *)(v8 + 32);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::operator=((__int64 *)(a1 + 104), a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)(a1 + 120), 0LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(a2, 0LL);
  return 0LL;
}
