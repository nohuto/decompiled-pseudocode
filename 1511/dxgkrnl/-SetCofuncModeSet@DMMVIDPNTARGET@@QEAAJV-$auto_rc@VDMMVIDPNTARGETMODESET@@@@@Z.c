/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C000635C
 * Callers:
 *     ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00BF8D0 (-AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0004FDC (--4-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C000BA80 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000E43C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C0092F28 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(__int64 a1, __int64 *a2)
{
  DMMVIDPNTARGETMODESET *v2; // rsi
  __int64 *v5; // r14
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rdx

  v2 = (DMMVIDPNTARGETMODESET *)*a2;
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
  if ( v2 != *(DMMVIDPNTARGETMODESET **)(a1 + 112) )
  {
    v9 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v9 + 24) = *a2;
    *(_QWORD *)(v9 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v9);
    v8 = -1071774928;
    goto LABEL_10;
  }
  v5 = (__int64 *)(a1 + 104);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 104) + 144LL) )
    goto LABEL_4;
  v10 = Set<DMMVIDPNTARGETMODE>::FindByValue((char *)v2 + 24);
  if ( !v10 )
  {
    v8 = -1071774958;
    goto LABEL_10;
  }
  DMMVIDPNTARGETMODESET::PinMode(v2, *(_DWORD *)(v10 + 24));
LABEL_4:
  *(_BYTE *)(*v5 + 136) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96) > 1
    && !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(*(_QWORD *)(a1 + 120), *v5) )
  {
    v13 = (_QWORD *)(v11 + 8);
    v14 = *(_QWORD **)(v12 + 24);
    *v13 = v12 + 16;
    v13[1] = v14;
    if ( *v14 != v12 + 16 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v12 + 24) = v13;
    ++*(_QWORD *)(v12 + 32);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::operator=(v5, a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)(a1 + 112), 0LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(a2, 0LL);
  return 0LL;
}
