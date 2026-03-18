/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00813FC
 * Callers:
 *     ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00812F0 (-AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMOD.c)
 *     ?AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00BB780 (-AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEM.c)
 *     ?AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DADC0 (-AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMO.c)
 *     ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01A8390 (-AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C00339A4 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v3 = 0;
  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v20);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v9 )
    {
      v12 = operator new(0x38uLL, 0x4E506456u, PagedPool);
      v14 = v12;
      if ( v12 )
      {
        *(_DWORD *)v12 = 305419896;
        v12[1] = v9;
        memset(v12 + 2, 0, 0x28uLL);
      }
      else
      {
        v14 = 0LL;
      }
      if ( !v14 )
      {
        v24 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v24 + 24) = a1;
        WdLogEvent5_WdLowResource(v24);
        v3 = -1073741801;
        goto LABEL_13;
      }
      operator delete(0LL);
      v16 = v14 + 2;
      *(_DWORD *)v16 = *(_DWORD *)(v9 + 24);
      v17 = *(_DWORD *)(v9 + 72);
      *((_DWORD *)v16 + 1) = v17;
      if ( v17 != 1 )
      {
        if ( v17 == 2 )
        {
          *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v16 + 2) = *DMMVIDPNSOURCEMODE::GetTextInfo((DMMVIDPNSOURCEMODE *)v9);
LABEL_12:
          *a3 = v16;
LABEL_13:
          operator delete(0LL);
          return v3;
        }
        if ( v17 <= 2 || v17 > 4 )
        {
          if ( (unsigned int)(v17 - 1) <= 3 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v15);
            WdLogEvent5_WdAssertion(v22);
          }
          goto LABEL_12;
        }
      }
      v18 = *(unsigned int *)(v9 + 72);
      if ( (((_DWORD)v18 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v18 == 2 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v23);
      }
      *(_OWORD *)(v16 + 1) = *(_OWORD *)(v9 + 76);
      *(_OWORD *)(v16 + 3) = *(_OWORD *)(v9 + 92);
      goto LABEL_12;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v11) + 24) = a2;
    return 3223192394LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192352LL;
  }
}
