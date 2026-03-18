/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C007FE94
 * Callers:
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C0080B40 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BE0F0 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A8750 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000CBB0 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0034370 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C0081114 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  unsigned int v4; // esi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v16; // rcx
  _QWORD *Instance; // rbx
  _DWORD *v18; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  __int64 v20; // rcx
  SIZE_T v21; // rbp
  PVOID v22; // rax
  __int64 v23; // rcx
  PVOID v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  v4 = 0;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1);
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
    Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(v9);
    if ( Instance )
    {
      operator delete(0LL);
      v18 = Instance + 2;
      *((_DWORD *)Instance + 7) = *(_DWORD *)(v14 + 112);
      if ( a4 )
        ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v14);
      else
        ContentRotationHw = *(_DWORD *)(v14 + 116);
      *((_DWORD *)Instance + 9) = ContentRotationHw;
      *((_DWORD *)Instance + 6) = *(_DWORD *)(v14 + 104);
      *v18 = *(_DWORD *)(*(_QWORD *)(v14 + 88) + 24LL);
      *((_DWORD *)Instance + 5) = *(_DWORD *)(*(_QWORD *)(v14 + 96) + 24LL);
      *((_DWORD *)Instance + 20) = *(_DWORD *)(v14 + 164);
      v20 = *(unsigned int *)(v14 + 172);
      *((_DWORD *)Instance + 21) = v20;
      *((_DWORD *)Instance + 87) = *(_DWORD *)(v14 + 168);
      if ( (_DWORD)v20 == 2 )
        *((_DWORD *)Instance + 22) = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v14);
      else
        *((_DWORD *)Instance + 22) = 0;
      if ( Instance == (_QWORD *)-32LL )
      {
        v28 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v28);
      }
      *((_DWORD *)Instance + 8) = *(_DWORD *)(v14 + 120);
      if ( Instance == (_QWORD *)-40LL )
      {
        v29 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v29);
      }
      *((_DWORD *)Instance + 10) = *(_DWORD *)(v14 + 124);
      *((_OWORD *)Instance + 22) = *(_OWORD *)(v14 + 184);
      Instance[46] = *(_QWORD *)(v14 + 200);
      if ( !Instance[46] )
        goto LABEL_16;
      v21 = Instance[45];
      v22 = operator new(v21, 0x4E506456u, PagedPool);
      v24 = v22;
      if ( v22 )
      {
        memmove(v22, (const void *)Instance[46], v21);
        Instance[46] = v24;
LABEL_16:
        *a3 = v18;
        Instance = 0LL;
LABEL_17:
        operator delete(Instance);
        return v4;
      }
      v27 = WdLogNewEntry5_WdLowResource(v23);
      *(_QWORD *)(v27 + 24) = v21;
    }
    else
    {
      v27 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v27 + 24) = a1;
    }
    WdLogEvent5_WdLowResource(v27);
    v4 = -1073741801;
    goto LABEL_17;
  }
  v26 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v26 + 24) = a1;
  WdLogEvent5_WdError(v26);
  return 3223192375LL;
}
