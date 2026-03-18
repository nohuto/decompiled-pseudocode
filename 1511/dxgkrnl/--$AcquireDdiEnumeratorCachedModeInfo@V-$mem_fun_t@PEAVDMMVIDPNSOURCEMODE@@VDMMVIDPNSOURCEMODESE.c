/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0092718
 * Callers:
 *     ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00A19D0 (-AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMOD.c)
 *     ?AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00C4480 (-AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEM.c)
 *     ?AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00E9C80 (-AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMO.c)
 *     ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C017EFD0 (-AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODE.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0006778 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@SA?AV?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@@@QEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000C434 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@-$Set@VDMMVIDPNSOURCEMODE@@@@SA-AV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C002B8AC (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DMMVIDPNSOURCEMODE *v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  void *v25; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v21);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    v12 = (DMMVIDPNSOURCEMODE *)v7;
    if ( v7 )
    {
      v13 = Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance(&v25, v7);
      v14 = *v13;
      *v13 = 0LL;
      if ( v14 )
        operator delete(0LL);
      operator delete(v25);
      if ( !v14 )
      {
        v23 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
        *(_QWORD *)(v23 + 24) = a1;
        WdLogEvent5_WdLowResource(v23);
        v3 = -1073741801;
        goto LABEL_11;
      }
      *(_DWORD *)(v14 + 16) = *((_DWORD *)v12 + 6);
      v19 = *((_DWORD *)v12 + 18);
      *(_DWORD *)(v14 + 20) = v19;
      if ( v19 != 1 )
      {
        if ( v19 == 2 )
        {
          *(enum _D3DKMDT_TEXT_RENDERING_FORMAT *)(v14 + 24) = *DMMVIDPNSOURCEMODE::GetTextInfo(v12);
          goto LABEL_10;
        }
        if ( v19 <= 2 || v19 > 4 )
        {
          if ( (unsigned int)(v19 - 1) <= 3 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v16);
            WdLogEvent5_WdAssertion(v24);
          }
          goto LABEL_10;
        }
      }
      *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v14 + 24) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v12);
LABEL_10:
      *a3 = v14 + 16;
LABEL_11:
      operator delete(0LL);
      return v3;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = a2;
    return 3223192394LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v22 + 24) = a1;
    WdLogEvent5_WdError(v22);
    return 3223192352LL;
  }
}
