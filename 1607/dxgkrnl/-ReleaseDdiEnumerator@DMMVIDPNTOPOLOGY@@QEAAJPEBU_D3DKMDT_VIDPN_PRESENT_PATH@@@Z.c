/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0080038
 * Callers:
 *     ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BE280 (-ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A8A10 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00023A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  SIZE_T *p_DataSize; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_10:
    WdLogEvent5_WdError(v8);
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = p_DataSize;
    goto LABEL_10;
  }
  v4 = p_DataSize[1];
  if ( v4 && !DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference((__int64)this + 8, v4) )
  {
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = p_DataSize;
    *(_QWORD *)(v9 + 32) = this;
    WdLogEvent5_WdError(v9);
    return 3223192368LL;
  }
  else
  {
    v6 = (void *)p_DataSize[46];
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    ExFreePoolWithTag(p_DataSize, 0);
    return 0LL;
  }
}
