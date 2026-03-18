/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00885C4
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C0097B50 (-AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODES.c)
 *     ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D4070 (-AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMOD.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SA?AV?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@@@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0009824 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SA-AV.c)
 *     ??4?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000D074 (--4-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  void **v14; // rax
  __int64 v15; // rcx
  char *v16; // rcx
  __int128 v17; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // [rsp+40h] [rbp+8h] BYREF
  void *v23; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v13 = v8;
    if ( v8 )
    {
      v22 = 0LL;
      v14 = (void **)Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(&v23, v8);
      auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::operator=((void **)&v22, v14);
      operator delete(v23);
      if ( v22 )
      {
        v16 = (char *)(v22 + 4);
        v22[4] = *(_DWORD *)(v13 + 24);
        v17 = *(_OWORD *)(v13 + 72);
        *a3 = v16;
        *(_OWORD *)(v16 + 8) = v17;
        *(_OWORD *)(v16 + 24) = *(_OWORD *)(v13 + 88);
        *(_OWORD *)(v16 + 40) = *(_OWORD *)(v13 + 104);
        *((_QWORD *)v16 + 7) = *(_QWORD *)(v13 + 120);
      }
      else
      {
        v21 = WdLogNewEntry5_WdLowResource(v15);
        *(_QWORD *)(v21 + 24) = a1;
        WdLogEvent5_WdLowResource(v21);
        v4 = -1073741801;
      }
      operator delete(0LL);
      return v4;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = a2;
      return 3223192394LL;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3223192352LL;
  }
}
