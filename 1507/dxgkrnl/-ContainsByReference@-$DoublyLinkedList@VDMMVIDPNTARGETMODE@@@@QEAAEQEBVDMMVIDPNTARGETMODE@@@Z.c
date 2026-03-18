/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0004620
 * Callers:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C00045DC (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00886AC (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 *     ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C0097B50 (-AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODES.c)
 *     ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D4070 (-AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMOD.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(__int64 a1, __int64 a2)
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
