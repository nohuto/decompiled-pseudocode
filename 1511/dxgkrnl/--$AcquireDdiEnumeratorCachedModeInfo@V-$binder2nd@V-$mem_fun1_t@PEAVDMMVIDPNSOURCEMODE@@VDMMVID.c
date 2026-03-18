/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00E4B68
 * Callers:
 *     ?AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C00E4A30 (-AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMOD.c)
 *     ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C017F160 (-AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODES.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0006778 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@SA?AV?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@@@QEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000C434 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@-$Set@VDMMVIDPNSOURCEMODE@@@@SA-AV.c)
 *     ??4?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000C518 (--4-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C002B8AC (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
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
  void **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rdi
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // [rsp+40h] [rbp+8h] BYREF
  void *v26; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v21);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v12 = (DMMVIDPNSOURCEMODE *)v7;
    if ( v7 )
    {
      v25 = 0LL;
      v13 = (void **)Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance(&v26, v7);
      auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::operator=((void **)&v25, v13);
      operator delete(v26);
      if ( !v25 )
      {
        v23 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
        *(_QWORD *)(v23 + 24) = a1;
        WdLogEvent5_WdLowResource(v23);
        v3 = -1073741801;
        goto LABEL_9;
      }
      v18 = (char *)(v25 + 4);
      v25[4] = *((_DWORD *)v12 + 6);
      v19 = *((_DWORD *)v12 + 18);
      *((_DWORD *)v18 + 1) = v19;
      if ( v19 != 1 )
      {
        if ( v19 == 2 )
        {
          *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v18 + 2) = *DMMVIDPNSOURCEMODE::GetTextInfo(v12);
          goto LABEL_8;
        }
        if ( v19 <= 2 || v19 > 4 )
        {
          if ( (unsigned int)(v19 - 1) <= 3 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v15);
            WdLogEvent5_WdAssertion(v24);
          }
          goto LABEL_8;
        }
      }
      *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v18 + 8) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v12);
LABEL_8:
      *a3 = v18;
LABEL_9:
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
