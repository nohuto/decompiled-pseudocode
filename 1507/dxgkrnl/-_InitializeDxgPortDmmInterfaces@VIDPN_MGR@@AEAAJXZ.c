/*
 * XREFs of ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00CD988
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDxgPortDmmInterfaces(VIDPN_MGR *this)
{
  __int64 (__fastcall **v2)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64); // rax
  _QWORD *v3; // rcx
  __int64 (__fastcall **v4)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64); // rdi
  __int64 (__fastcall **v5)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64); // rax
  __int64 (__fastcall **v6)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64); // rdi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  v2 = (__int64 (__fastcall **)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64))operator new[](0x18uLL, 0x4E506456u, PagedPool);
  v3 = (_QWORD *)*((_QWORD *)this + 44);
  v4 = v2;
  if ( v2 != v3 )
    operator delete(v3);
  *((_QWORD *)this + 44) = v4;
  if ( !v4 )
    goto LABEL_8;
  *v4 = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo;
  v4[1] = (__int64 (__fastcall *)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64))DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource;
  v4[2] = (__int64 (__fastcall *)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64))DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v5 = (__int64 (__fastcall **)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64))operator new[](0x18uLL, 0x4E506456u, PagedPool);
  v3 = (_QWORD *)*((_QWORD *)this + 45);
  v6 = v5;
  if ( v5 != v3 )
    operator delete(v3);
  *((_QWORD *)this + 45) = v6;
  if ( v6 )
  {
    result = 0LL;
    *v6 = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo;
    v6[1] = (__int64 (__fastcall *)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64))DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddTarget;
    v6[2] = (__int64 (__fastcall *)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64))DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
  }
  else
  {
LABEL_8:
    v10 = WdLogNewEntry5_WdLowResource(v3);
    if ( !*((_QWORD *)this + 1) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
      WdLogEvent5_WdAssertion(v13);
    }
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
  return result;
}
