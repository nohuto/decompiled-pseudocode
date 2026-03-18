/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00023A8
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C00029B4 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z.c)
 *     ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002B04 (-ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000C578 (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C000C5E0 (-Remove@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0080038 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(__int64 a1, __int64 a2)
{
  char v2; // r8
  _QWORD *v3; // rcx
  __int64 v4; // rax
  _QWORD *v6; // rax

  v2 = 0;
  if ( !a2 )
    return 0;
  v3 = (_QWORD *)(a1 + 16);
  if ( (_QWORD *)*v3 != v3 )
  {
    v4 = *v3 - 8LL;
    if ( *v3 != 8LL )
    {
      do
      {
        if ( v4 == a2 )
          break;
        v6 = *(_QWORD **)(v4 + 8);
        v4 = v6 == v3 ? 0LL : (__int64)(v6 - 1);
      }
      while ( v4 );
      if ( v4 )
        return 1;
    }
  }
  return v2;
}
