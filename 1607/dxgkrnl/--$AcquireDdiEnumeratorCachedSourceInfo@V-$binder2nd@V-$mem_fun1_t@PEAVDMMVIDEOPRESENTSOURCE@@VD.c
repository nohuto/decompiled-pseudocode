/*
 * XREFs of ??$AcquireDdiEnumeratorCachedSourceInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C01AA220
 * Callers:
 *     ?AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@PEAPEBU3@@Z @ 0x1C01A5740 (-AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRES.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C0001DE0 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@?$Set@VDMMVIDEOPRESENTSOURCE@@@@SAPEAV12@QEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000FF8C (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@-$Set@VDMMVIDEOPRESENTSOURCE@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET,DMMVIDEOPRESENTSOURCE const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *Instance; // rax
  unsigned int v15; // ecx
  _QWORD *v16; // rax
  char *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_QWORD *)(a2 + 16);
  v9 = a1 + *(int *)(a2 + 8);
  v10 = *(__int64 (__fastcall **)(__int64, __int64))a2;
  *a3 = 0LL;
  v11 = v10(v9, v8);
  v12 = v11;
  if ( !v11 )
    return 3223192324LL;
  v17 = 0LL;
  Instance = Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>::CreateInstance(v11);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v17, Instance);
  if ( v17 )
  {
    v15 = *(_DWORD *)(v12 + 24);
    v16 = v17 + 16;
    *a3 = v17 + 16;
    *v16 = v15;
  }
  else
  {
    v3 = -1073741801;
  }
  operator delete(0LL);
  return v3;
}
