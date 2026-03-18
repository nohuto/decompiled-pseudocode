/*
 * XREFs of ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00F46BC
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00F49B8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDxgPortDmmInterfaces(VIDPN_MGR *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax

  v2 = operator new(0x18uLL, 0x4E506456u, PagedPool);
  v3 = (_QWORD *)*((_QWORD *)this + 44);
  v4 = v2;
  if ( v2 != v3 )
    operator delete(v3);
  *((_QWORD *)this + 44) = v4;
  if ( !v4 )
    goto LABEL_8;
  *v4 = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo;
  v4[1] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource;
  v4[2] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v5 = operator new(0x18uLL, 0x4E506456u, PagedPool);
  v3 = (_QWORD *)*((_QWORD *)this + 45);
  v6 = v5;
  if ( v5 != v3 )
    operator delete(v3);
  *((_QWORD *)this + 45) = v6;
  if ( v6 )
  {
    result = 0LL;
    *v6 = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo;
    v6[1] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddTarget;
    v6[2] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
  }
  else
  {
LABEL_8:
    v9 = WdLogNewEntry5_WdLowResource(v3);
    if ( !*((_QWORD *)this + 1) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v10);
    }
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
  return result;
}
