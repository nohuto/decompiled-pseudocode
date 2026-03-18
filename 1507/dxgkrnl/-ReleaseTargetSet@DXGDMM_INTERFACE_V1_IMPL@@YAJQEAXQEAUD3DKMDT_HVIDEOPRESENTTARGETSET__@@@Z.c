/*
 * XREFs of ?ReleaseTargetSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C01797E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C000DA44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::ReleaseTargetSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6051);
  v5 = 0;
  if ( !this )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_10:
    WdLogEvent5_WdError(v6);
    v5 = -1071775742;
    goto LABEL_14;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_QWORD *)this + 247) )
  {
    v6 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v6 + 24) = this;
    goto LABEL_10;
  }
  v14 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle(a2);
  if ( v14 )
  {
    ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v16 + 24) = a2;
    WdLogEvent5_WdError(v16);
    v5 = -1071774954;
  }
LABEL_14:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 6051);
  return v5;
}
