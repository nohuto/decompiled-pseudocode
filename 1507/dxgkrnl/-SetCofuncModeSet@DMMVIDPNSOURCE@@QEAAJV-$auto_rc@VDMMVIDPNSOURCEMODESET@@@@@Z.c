/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0006EEC
 * Callers:
 *     ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00AD410 (-AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C00077E8 (--4-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008400 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0017948 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00961C8 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetCofuncModeSet(__int64 a1, DMMVIDPNSOURCEMODESET **a2)
{
  DMMVIDPNSOURCEMODESET *v4; // rcx
  _QWORD *v5; // rsi
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
  if ( *((DMMVIDPNSOURCEMODESET **)*a2 + 6) == (DMMVIDPNSOURCEMODESET *)((char *)*a2 + 48) )
  {
    v11 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v11 + 24) = *a2;
    *(_QWORD *)(v11 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v11);
    v12 = -1071774968;
LABEL_13:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(a2, 0LL);
    return v12;
  }
  if ( v4 != *(DMMVIDPNSOURCEMODESET **)(a1 + 120) )
  {
    v13 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v13 + 24) = *a2;
    *(_QWORD *)(v13 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v13);
    v12 = -1071774928;
    goto LABEL_13;
  }
  v5 = (_QWORD *)(a1 + 104);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 104) + 144LL) )
    goto LABEL_4;
  v14 = Set<DMMVIDPNSOURCEMODE>::FindByValue((char *)v4 + 24);
  if ( !v14 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    WdLogEvent5_WdError(v16);
    v12 = -1071774958;
    goto LABEL_13;
  }
  DMMVIDPNSOURCEMODESET::PinMode(*a2, *(_DWORD *)(v14 + 24));
LABEL_4:
  *(_BYTE *)(*v5 + 136LL) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96LL) > 1
    && !(unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(*(_QWORD *)(a1 + 112), *v5) )
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
  auto_rc<DMMVIDPNSOURCEMODESET>::operator=(a1 + 104, a2);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(a1 + 120, 0LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(a2, 0LL);
  return 0LL;
}
