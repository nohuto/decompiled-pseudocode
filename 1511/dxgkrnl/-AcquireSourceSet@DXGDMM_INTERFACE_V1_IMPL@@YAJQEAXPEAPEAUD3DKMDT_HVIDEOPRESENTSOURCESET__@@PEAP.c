/*
 * XREFs of ?AcquireSourceSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEBU_DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE@@@Z @ 0x1C017C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireSourceSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        _QWORD *a2,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *v17; // [rsp+38h] [rbp+10h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6048);
  v7 = 0;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v13);
      }
      v14 = *((_QWORD *)this + 248);
      if ( v14 )
      {
        v9 = *(_QWORD *)(v14 + 112);
        v17 = *(struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **)(v9 + 408);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 88) + 72LL));
        if ( *(_QWORD *)(v9 + 88) == -112LL )
          v15 = 0LL;
        else
          v15 = *(_QWORD *)(v9 + 88);
        *a2 = v15;
        *a3 = v17;
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
    Template_q(v9, &EventProfilerExit, v10, 6048);
  return v7;
}
