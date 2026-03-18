/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0089E48
 * Callers:
 *     ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0089720 (-ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3D.c)
 *     ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C009A4B0 (-ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017B910 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  SIZE_T *p_DataSize; // rbx
  SIZE_T v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_13:
    WdLogEvent5_WdError(v9);
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    v9 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v9 + 24) = p_DataSize;
    goto LABEL_13;
  }
  v4 = p_DataSize[1];
  if ( !v4 )
    goto LABEL_8;
  v5 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v5 == v5 )
    goto LABEL_19;
  v6 = *v5 - 8LL;
  if ( *v5 == 8LL )
    goto LABEL_19;
  do
  {
    if ( v6 == v4 )
      break;
    v10 = *(_QWORD **)(v6 + 8);
    v6 = v10 == v5 ? 0LL : (__int64)(v10 - 1);
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_19:
    v11 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v11 + 24) = p_DataSize;
    *(_QWORD *)(v11 + 32) = this;
    WdLogEvent5_WdError(v11);
    return 3223192368LL;
  }
  else
  {
LABEL_8:
    v7 = (void *)p_DataSize[46];
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    ExFreePoolWithTag(p_DataSize, 0);
    return 0LL;
  }
}
