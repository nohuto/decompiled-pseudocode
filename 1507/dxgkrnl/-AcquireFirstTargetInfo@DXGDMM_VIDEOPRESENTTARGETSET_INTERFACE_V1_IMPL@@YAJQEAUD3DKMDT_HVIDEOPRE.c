/*
 * XREFs of ?AcquireFirstTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01779D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C000DA44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C017AC24 (--$AcquireDdiEnumeratorCachedTargetInfo@V-$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENT.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v23)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-18h] BYREF
  int v24; // [rsp+28h] [rbp-10h]
  __int64 v25; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6045);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v10 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v10 )
    {
      v24 = 0;
      v25 = 0LL;
      v23 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v12 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET>>(
              v10,
              &v23,
              &v25);
      v8 = v12;
      if ( v12 == -1071774971 )
      {
        v15 = WdLogNewEntry5_WdWarning(v6, v13, v7, v14);
        *(_QWORD *)(v15 + 24) = v10;
        WdLogEvent5_WdWarning(v15);
        if ( v25 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v6, v16, v7, v17);
          WdLogEvent5_WdAssertion(v18);
        }
        v8 = 1075708747;
      }
      else if ( v12 >= 0 )
      {
        v20 = v25;
        if ( !v25 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v6, v13, v7, v14);
          WdLogEvent5_WdAssertion(v21);
        }
        *(_QWORD *)a2 = v20;
        v8 = 0;
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v19 + 24) = v10;
        WdLogEvent5_WdError(v19);
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v11 + 24) = this;
      WdLogEvent5_WdError(v11);
      v8 = -1071774954;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = this;
    WdLogEvent5_WdError(v5);
    v8 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v6, &EventProfilerExit, v7, 6045);
  return v8;
}
