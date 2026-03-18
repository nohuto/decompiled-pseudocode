/*
 * XREFs of ?AcquireTargetSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE@@@Z @ 0x1C01782D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireTargetSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        _QWORD *a2,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *v19; // [rsp+38h] [rbp+10h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6050);
  v7 = 0;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v13, v12, v10, v14);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = *((_QWORD *)this + 247);
      if ( v16 )
      {
        v9 = *(_QWORD *)(v16 + 88);
        v19 = *(struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **)(v9 + 416);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 96) + 72LL));
        if ( *(_QWORD *)(v9 + 96) == -112LL )
          v17 = 0LL;
        else
          v17 = *(_QWORD *)(v9 + 96);
        *a2 = v17;
        *a3 = v19;
        goto LABEL_18;
      }
      v11 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v11 + 24) = this;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v11);
    v7 = -1071775742;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    v7 = -1073741811;
  }
LABEL_18:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6050);
  return v7;
}
