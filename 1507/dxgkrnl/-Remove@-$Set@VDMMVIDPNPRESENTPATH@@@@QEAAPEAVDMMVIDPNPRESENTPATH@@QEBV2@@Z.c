/*
 * XREFs of ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0008334
 * Callers:
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z @ 0x1C00CD330 (-ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0008260 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008400 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 */

__int64 __fastcall Set<DMMVIDPNPRESENTPATH>::Remove(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx

  v3 = Set<DMMVIDPNPRESENTPATH>::FindByValue(a1, a2);
  v4 = DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(a1 + 8, v3);
  v7 = 0LL;
  if ( v4 )
  {
    v8 = (_QWORD *)(v5 + 8);
    v9 = *(_QWORD *)(v5 + 8);
    v10 = *(_QWORD **)(v5 + 16);
    if ( *(_QWORD **)(v9 + 8) != v8 || (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    v7 = v6;
    --*(_QWORD *)(a1 + 40);
  }
  return v7;
}
