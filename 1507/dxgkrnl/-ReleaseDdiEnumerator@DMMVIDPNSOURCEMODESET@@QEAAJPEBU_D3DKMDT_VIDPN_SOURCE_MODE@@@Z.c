/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0096170
 * Callers:
 *     ?ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0095E50 (-ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__.c)
 *     ?ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00AF680 (-ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C00032D4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(
        DMMVIDPNSOURCEMODESET *this,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = 0LL;
LABEL_8:
    WdLogEvent5_WdError(v7);
    return 3223192336LL;
  }
  v3 = &a2[-1].Format.Text + 4;
  if ( a2[-1].Format.Graphics.Stride != 305419896 )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = v3;
    goto LABEL_8;
  }
  v4 = v3[1];
  if ( v4 && !DoublyLinkedList<DMMVIDPNSOURCEMODE>::ContainsByReference((__int64)this + 32, v4) )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = v3;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    return 3223192368LL;
  }
  else
  {
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
}
