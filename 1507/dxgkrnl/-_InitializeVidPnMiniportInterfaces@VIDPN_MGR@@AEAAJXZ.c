/*
 * XREFs of ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00CD870
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00D0AA8 (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00D0B18 (-InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00D0B88 (-InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C00D0C24 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeVidPnMiniportInterfaces(VIDPN_MGR *this)
{
  DXGK_VIDPN_INTERFACE_V1_IMPL *v2; // rax
  struct _DXGK_VIDPN_INTERFACE *v3; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v4; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v5; // rdi
  DXGK_VIDPN_INTERFACE_V1_IMPL *v6; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v7; // rax
  struct _DXGK_VIDPNTOPOLOGY_INTERFACE *v8; // rdx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v9; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v10; // rdi
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // rax
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v12; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v13; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v14; // rdi
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v15; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v16; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v17; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v18; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax

  v2 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)operator new[](0x58uLL, 0x4E506456u, PagedPool);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 46);
  v5 = v2;
  if ( v2 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 46) = v5;
  v6 = v5;
  if ( !v5 )
    goto LABEL_14;
  DXGK_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v5, v3);
  v7 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  v9 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 47);
  v10 = v7;
  if ( v7 != v9 )
    operator delete(v9);
  *((_QWORD *)this + 47) = v10;
  v6 = v10;
  if ( !v10 )
    goto LABEL_14;
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v10, v8);
  v11 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)operator new[](0x40uLL, 0x4E506456u, PagedPool);
  v13 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 48);
  v14 = v11;
  if ( v11 != v13 )
    operator delete(v13);
  *((_QWORD *)this + 48) = v14;
  v6 = v14;
  if ( !v14 )
    goto LABEL_14;
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v14, v12);
  v15 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)operator new[](0x40uLL, 0x4E506456u, PagedPool);
  v17 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 49);
  v18 = v15;
  if ( v15 != v17 )
    operator delete(v17);
  *((_QWORD *)this + 49) = v18;
  v6 = v18;
  if ( v18 )
  {
    DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v18, v16);
    return 0LL;
  }
  else
  {
LABEL_14:
    v22 = WdLogNewEntry5_WdLowResource(v6);
    if ( !*((_QWORD *)this + 1) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v21, v20, v23, v24);
      WdLogEvent5_WdAssertion(v25);
    }
    *(_QWORD *)(v22 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
}
