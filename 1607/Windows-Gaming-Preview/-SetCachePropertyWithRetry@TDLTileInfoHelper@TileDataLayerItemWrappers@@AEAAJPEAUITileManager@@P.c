/*
 * XREFs of ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180022768
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180022BAC (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180012B38 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@QEAA@XZ @ 0x180012CA4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@D.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x180013674 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800267CC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::SetCachePropertyWithRetry(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3,
        __int64 a4,
        LPCWCH lpString1)
{
  HRESULT v9; // eax
  int v10; // edi
  struct IUnknownVtbl *v11; // rbx
  LPWSTR v12; // r13
  LPWSTR v13; // r12
  int v14; // ebp
  IUnknown *v15; // rsi
  IUnknown *v16; // rax
  __int64 v17; // r9
  IUnknown *v18; // rdi
  LPWSTR ppwsz; // [rsp+30h] [rbp-78h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-70h] BYREF
  volatile unsigned __int64 v21; // [rsp+40h] [rbp-68h]
  LPWSTR v22; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( CompareStringOrdinal(lpString1, 1, L"@", 1, 0) == 2 )
    return 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(
    &TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock,
    &SRWLock);
  v21 = TileDataLayerItemWrappers::MRTCacheManagerInternal::s_currentMRTStateHash;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( a2 )
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
  ppwsz = 0LL;
  v9 = SHStrDupW(lpString1, &ppwsz);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (struct IUnknownVtbl *)*((_QWORD *)this + 9);
    v12 = ppwsz;
    if ( v11 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v11->QueryInterface + 1))(v11);
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( a3 )
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
    v13 = ppwsz;
    v22 = ppwsz;
    if ( v11 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v11->QueryInterface + 1))(v11);
    if ( (dword_180038B18 & 1) != 0 )
    {
      v14 = dword_180038B1C;
    }
    else
    {
      dword_180038B18 |= 1u;
      v13 = v22;
      v14 = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
      dword_180038B1C = v14;
    }
    v15 = 0LL;
    v16 = (IUnknown *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v16;
    if ( v16 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>((__int64)v16);
      v18->lpVtbl = (struct IUnknownVtbl *)&Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_1386917c2b0eefcf92d5aaca6b176d86_ &>::`vftable';
      LODWORD(v18[2].lpVtbl) = 983227;
      v18[3].lpVtbl = (struct IUnknownVtbl *)a2;
      if ( a2 )
        (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v18[4].lpVtbl = (struct IUnknownVtbl *)a3;
      if ( a3 )
        (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
      v18[5].lpVtbl = (struct IUnknownVtbl *)v13;
      v18[6].lpVtbl = v11;
      if ( v11 )
        (*((void (__fastcall **)(struct IUnknownVtbl *))v11->QueryInterface + 1))(v11);
      v15 = v18;
      v18[7].lpVtbl = (struct IUnknownVtbl *)v21;
    }
    v10 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v14, v17, v15);
    if ( v15 )
      ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
    if ( v10 >= 0 )
    {
      v12 = 0LL;
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F7,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( v11 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v11->QueryInterface + 2))(v11);
    if ( a3 )
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 16LL))(a3);
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v11 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v11->QueryInterface + 2))(v11);
    if ( v12 )
      CoTaskMemFree(v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( a3 )
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v10;
}
