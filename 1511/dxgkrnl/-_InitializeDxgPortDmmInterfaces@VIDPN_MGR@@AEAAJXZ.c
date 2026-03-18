/*
 * XREFs of ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00DD388
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00DD684 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDxgPortDmmInterfaces(VIDPN_MGR *this)
{
  __int64 (__fastcall **v2)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64); // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 (__fastcall **v7)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64); // rdi
  __int64 (__fastcall **v8)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64); // rax
  __int64 (__fastcall **v9)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64); // rdi
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax

  v2 = (__int64 (__fastcall **)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64))operator new[](0x18uLL, 0x4E506456u, PagedPool);
  v6 = (_QWORD *)*((_QWORD *)this + 44);
  v7 = v2;
  if ( v2 != v6 )
    operator delete(v6);
  *((_QWORD *)this + 44) = v7;
  if ( !v7 )
    goto LABEL_8;
  *v7 = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo;
  v7[1] = (__int64 (__fastcall *)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64))DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource;
  v7[2] = (__int64 (__fastcall *)(DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const, struct _D3DKMDT_VIDEO_PRESENT_SOURCE **, __int64))DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v8 = (__int64 (__fastcall **)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64))operator new[](0x18uLL, 0x4E506456u, PagedPool);
  v6 = (_QWORD *)*((_QWORD *)this + 45);
  v9 = v8;
  if ( v8 != v6 )
    operator delete(v6);
  *((_QWORD *)this + 45) = v9;
  if ( v9 )
  {
    result = 0LL;
    *v9 = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo;
    v9[1] = (__int64 (__fastcall *)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64))DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddTarget;
    v9[2] = (__int64 (__fastcall *)(DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *, struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const, struct _D3DKMDT_VIDEO_PRESENT_TARGET **, __int64))DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
  }
  else
  {
LABEL_8:
    v12 = WdLogNewEntry5_WdLowResource(v6, v3, v4, v5);
    if ( !*((_QWORD *)this + 1) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v13);
    }
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
  return result;
}
