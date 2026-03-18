/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007E894
 * Callers:
 *     ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007D3F0 (-AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMOD.c)
 *     ?AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00BB6C0 (-AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETM.c)
 *     ?AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D5490 (-AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODE.c)
 *     ?AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D6240 (-AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  __int128 v15; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = 0;
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v17);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v9 )
    {
      v12 = operator new(0x58uLL, 0x4E506456u, PagedPool);
      v14 = v12;
      if ( v12 )
      {
        *(_DWORD *)v12 = 305419896;
        v12[1] = v9;
        memset(v12 + 2, 0, 0x48uLL);
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        operator delete(0LL);
        *((_DWORD *)v14 + 4) = *(_DWORD *)(v9 + 24);
        v15 = *(_OWORD *)(v9 + 72);
        *a3 = v14 + 2;
        *(_OWORD *)(v14 + 3) = v15;
        *(_OWORD *)(v14 + 5) = *(_OWORD *)(v9 + 88);
        *(_OWORD *)(v14 + 7) = *(_OWORD *)(v9 + 104);
        v14[9] = *(_QWORD *)(v9 + 120);
      }
      else
      {
        v19 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v19 + 24) = a1;
        WdLogEvent5_WdLowResource(v19);
        v3 = -1073741801;
      }
      operator delete(0LL);
      return v3;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v11) + 24) = a2;
      return 3223192394LL;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3223192352LL;
  }
}
