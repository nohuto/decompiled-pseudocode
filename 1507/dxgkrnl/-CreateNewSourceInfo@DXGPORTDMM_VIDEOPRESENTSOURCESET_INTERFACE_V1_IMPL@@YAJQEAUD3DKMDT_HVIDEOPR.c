/*
 * XREFs of ?CreateNewSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C00C47C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C000D0FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C00C4830 (-AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PR.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DMMVIDEOPRESENTSOURCESET *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v24; // [rsp+30h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = a2;
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v20);
  }
  *(_QWORD *)a2 = 0LL;
  v11 = (DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( v11 )
  {
    v24 = 0LL;
    v13 = DMMVIDEOPRESENTSOURCESET::AcquireRawDdiEnumeratorCachedSourceInfo(v11, &v24);
    v18 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -1073741801 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v23 + 24) = v18;
      WdLogEvent5_WdError(v23);
      return (unsigned int)v18;
    }
    else
    {
      *(_QWORD *)a2 = v24;
      return 0LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    return 3223192341LL;
  }
}
