/*
 * XREFs of ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C00F5F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C000FFC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x1C000FFE0 (--0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C00F60D8 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C00F6114 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DMMVIDEOPRESENTSOURCESET *v9; // rbx
  DMMVIDEOPRESENTSOURCE *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  DMMVIDEOPRESENTSOURCE *v23; // [rsp+30h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v9 = (struct DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      v10 = (DMMVIDEOPRESENTSOURCE *)operator new(0x88uLL, 0x4E506456u, PagedPool);
      if ( v10 )
        v10 = DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(v10, v9, a2->Id);
      if ( v10 )
      {
        v23 = v10;
        v12 = DMMVIDEOPRESENTSOURCESET::AddSource(v9, &v23);
        v17 = v12;
        if ( v12 >= 0 )
          return DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v9, a2);
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
        v22[3] = 0LL;
        v22[4] = v9;
        v22[5] = v17;
      }
      else
      {
        v21 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v21 + 24) = v9;
        WdLogEvent5_WdLowResource(v21);
        LODWORD(v17) = -1073741801;
      }
      return (unsigned int)v17;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdError(v20);
      return 3223192341LL;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdError(v19);
    return 3223192324LL;
  }
}
