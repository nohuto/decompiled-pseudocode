/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0089CE8
 * Callers:
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C008A310 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C009A510 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017B650 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0005D74 (-GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005DA0 (-GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SA?AV?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000A4DC (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SA-.c)
 *     ??4?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000D074 (--4-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C002C320 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00B7350 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  unsigned int v4; // esi
  int v5; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  void **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rbx
  _DWORD *v22; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  SIZE_T v28; // rbp
  PVOID v29; // rax
  __int64 v30; // rcx
  PVOID v31; // r14
  _DWORD *v32; // [rsp+50h] [rbp+8h] BYREF
  void *v33; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = a4;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v25);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v14 = v9;
    if ( !v9 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = a2;
      return 3223192359LL;
    }
    v32 = 0LL;
    v16 = (void **)Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(&v33, v9);
    auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::operator=((void **)&v32, v16);
    operator delete(v33);
    v21 = v32;
    if ( v32 )
    {
      v22 = v32 + 4;
      v32[7] = *(_DWORD *)(v14 + 112);
      if ( v5 )
        ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v14);
      else
        ContentRotationHw = *(_DWORD *)(v14 + 116);
      *((_DWORD *)v21 + 9) = ContentRotationHw;
      *((_DWORD *)v21 + 6) = *(_DWORD *)(v14 + 104);
      *v22 = *(_DWORD *)(*(_QWORD *)(v14 + 88) + 24LL);
      *((_DWORD *)v21 + 5) = *(_DWORD *)(*(_QWORD *)(v14 + 96) + 24LL);
      *((_DWORD *)v21 + 20) = *(_DWORD *)(v14 + 164);
      v24 = *(_DWORD *)(v14 + 172);
      *((_DWORD *)v21 + 21) = v24;
      *((_DWORD *)v21 + 87) = *(_DWORD *)(v14 + 168);
      if ( v24 == 2 )
        *((_DWORD *)v21 + 22) = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(
                                  (DMMVIDPNPRESENTPATH *)v14,
                                  v17,
                                  v19,
                                  v20);
      else
        *((_DWORD *)v21 + 22) = 0;
      DMMVIDPNPRESENTPATH::GetScalingSupport(
        (DMMVIDPNPRESENTPATH *)v14,
        (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *const)v21 + 8);
      DMMVIDPNPRESENTPATH::GetRotationSupport(
        (DMMVIDPNPRESENTPATH *)v14,
        (struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *const)v21 + 10);
      *((_OWORD *)v21 + 22) = *(_OWORD *)(v14 + 184);
      *((_QWORD *)v21 + 46) = *(_QWORD *)(v14 + 200);
      if ( !*((_QWORD *)v21 + 46) )
        goto LABEL_12;
      v28 = *((_QWORD *)v21 + 45);
      v29 = operator new[](v28, 0x4E506456u, PagedPool);
      v31 = v29;
      if ( v29 )
      {
        memmove(v29, *((const void **)v21 + 46), v28);
        *((_QWORD *)v21 + 46) = v31;
LABEL_12:
        *a3 = v22;
        v21 = 0LL;
LABEL_13:
        operator delete(v21);
        return v4;
      }
      v27 = WdLogNewEntry5_WdLowResource(v30);
      *(_QWORD *)(v27 + 24) = v28;
    }
    else
    {
      v27 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v27 + 24) = a1;
    }
    WdLogEvent5_WdLowResource(v27);
    v4 = -1073741801;
    goto LABEL_13;
  }
  v26 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v26 + 24) = a1;
  WdLogEvent5_WdError(v26);
  return 3223192375LL;
}
