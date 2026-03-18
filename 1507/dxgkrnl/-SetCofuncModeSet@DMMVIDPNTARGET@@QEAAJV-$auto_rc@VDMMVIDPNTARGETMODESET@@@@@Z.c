/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C0003C3C
 * Callers:
 *     ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C009AA40 (-AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00081CC (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C00097A8 (--4-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C002BF3C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C0088704 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(__int64 a1, __int64 *a2)
{
  __int64 v2; // r11
  _QWORD *v5; // rsi
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  DMMVIDPNTARGETMODESET *v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rdx

  v2 = *a2;
  if ( *(_QWORD *)(*a2 + 48) == *a2 + 48 )
  {
    v7 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v7 + 24) = *a2;
    *(_QWORD *)(v7 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v7);
    v8 = -1071774967;
LABEL_10:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(a2, 0LL);
    return v8;
  }
  if ( v2 != *(_QWORD *)(a1 + 112) )
  {
    v9 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v9 + 24) = *a2;
    *(_QWORD *)(v9 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v9);
    v8 = -1071774928;
    goto LABEL_10;
  }
  v5 = (_QWORD *)(a1 + 104);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 104) + 144LL) )
    goto LABEL_4;
  v10 = Set<DMMVIDPNTARGETMODE>::FindByValue(v2 + 24);
  if ( !v10 )
  {
    v8 = -1071774958;
    goto LABEL_10;
  }
  DMMVIDPNTARGETMODESET::PinMode(v11, *(_DWORD *)(v10 + 24));
LABEL_4:
  *(_BYTE *)(*v5 + 136LL) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96LL) > 1
    && !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(*(_QWORD *)(a1 + 120), *v5) )
  {
    v14 = (_QWORD *)(v12 + 8);
    v15 = *(_QWORD **)(v13 + 24);
    *v14 = v13 + 16;
    v14[1] = v15;
    if ( *v15 != v13 + 16 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v13 + 24) = v14;
    ++*(_QWORD *)(v13 + 32);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::operator=(v5, a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(a1 + 112, 0LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(a2, 0LL);
  return 0LL;
}
