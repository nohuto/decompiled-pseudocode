/*
 * XREFs of ?AddTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C00F5CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C000FCE0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C000FD7C (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C00F5E8C (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C00F5EC8 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DMMVIDEOPRESENTTARGETSET *v9; // rbx
  DMMVIDEOPRESENTTARGET *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  DMMVIDEOPRESENTTARGET *v23; // [rsp+50h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v9 = (struct DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      v10 = (DMMVIDEOPRESENTTARGET *)operator new(0x190uLL, 0x4E506456u, PagedPool);
      if ( v10 )
        v10 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v10,
                v9,
                a2->Id,
                a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes);
      if ( v10 )
      {
        v23 = v10;
        v12 = DMMVIDEOPRESENTTARGETSET::AddTarget(v9, &v23);
        v17 = v12;
        if ( v12 >= 0 )
          return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v9, a2);
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
      return 3223192342LL;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdError(v19);
    return 3223192325LL;
  }
}
