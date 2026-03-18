/*
 * XREFs of ??$AcquireDdiEnumeratorCachedTargetInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C017AB64
 * Callers:
 *     ?AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@PEAPEBU3@@Z @ 0x1C0177F70 (-AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRES.c)
 * Callees:
 *     ??4?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000D074 (--4-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@@.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@SA?AV?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000D9E8 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET,DMMVIDEOPRESENTTARGET const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rax
  _DWORD *v13; // rdi
  void **v15; // rax
  int v16; // ecx
  _DWORD *v17; // rax
  char *v18; // [rsp+40h] [rbp+8h] BYREF
  void *v19; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(_QWORD *)(a2 + 16);
  v10 = a1 + *(int *)(a2 + 8);
  v11 = *(__int64 (__fastcall **)(__int64, __int64))a2;
  *a3 = 0LL;
  v12 = v11(v10, v9);
  v13 = (_DWORD *)v12;
  if ( !v12 )
    return 3223192325LL;
  v18 = 0LL;
  v15 = (void **)Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>::CreateInstance(&v19, v12);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::operator=((void **)&v18, v15);
  operator delete(v19);
  if ( v18 )
  {
    v16 = v13[6];
    v17 = v18 + 16;
    *a3 = v18 + 16;
    *v17 = v16;
    v17[1] = v13[18];
    v17[2] = v13[20];
    v17[3] = v13[21];
  }
  else
  {
    v4 = -1073741801;
  }
  operator delete(0LL);
  return v4;
}
