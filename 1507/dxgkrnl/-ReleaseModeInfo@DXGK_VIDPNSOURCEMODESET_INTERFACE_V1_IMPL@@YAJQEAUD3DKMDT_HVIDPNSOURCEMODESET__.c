/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0095E50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007400 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0096170 (-ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  DMMVIDPNSOURCEMODESET *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7004);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v8 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v8 )
    {
      v11 = DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(v8, a2);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v15 + 24) = this;
      WdLogEvent5_WdError(v15);
      v11 = -1071774968;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 24) = 0LL;
    WdLogEvent5_WdError(v14);
    v11 = -1071774960;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v12, 7004);
  return v11;
}
