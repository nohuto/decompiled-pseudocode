/*
 * XREFs of ?ReleaseTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C017D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C000DA44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C00CB9D0 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  DMMVIDEOPRESENTTARGETSET *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v10 = (DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v10 )
    {
      return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v10, a2);
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = this;
      WdLogEvent5_WdError(v12);
      return 3223192342LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    return 3223192325LL;
  }
}
