/*
 * XREFs of ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180021EF4
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x1800225EC (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@QEAA@XZ @ 0x18000E744 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@D.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800109F8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800111B8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     _lambda_96d0bed5b180209255fc5fd7d24cbe07_::__lambda_96d0bed5b180209255fc5fd7d24cbe07_ @ 0x18002241C (_lambda_96d0bed5b180209255fc5fd7d24cbe07_--__lambda_96d0bed5b180209255fc5fd7d24cbe07_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180025EF0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::SetCachePropertyWithRetry(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3,
        __int64 a4,
        LPCWCH lpString1)
{
  volatile unsigned __int64 v9; // rsi
  HRESULT v10; // eax
  int v11; // r12d
  struct IUnknownVtbl *v12; // rbx
  LPWSTR v13; // r13
  int v14; // r12d
  IUnknown *v15; // rsi
  IUnknown *v16; // rax
  __int64 v17; // r9
  IUnknown *v18; // rdi
  void *v19; // rsi
  LPWSTR ppwsz; // [rsp+30h] [rbp-50h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-48h] BYREF
  volatile unsigned __int64 v22; // [rsp+40h] [rbp-40h]
  LPVOID pv; // [rsp+48h] [rbp-38h]
  int v24; // [rsp+50h] [rbp-30h] BYREF
  struct ITileManager *v25; // [rsp+58h] [rbp-28h]
  struct IVisualElementEnumerator *v26; // [rsp+60h] [rbp-20h]
  LPWSTR v27; // [rsp+68h] [rbp-18h]
  struct IUnknownVtbl *v28; // [rsp+70h] [rbp-10h]
  volatile unsigned __int64 v29; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  if ( CompareStringOrdinal(lpString1, 1, L"@", 1, 0) == 2 )
    return 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(
    &TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock,
    &SRWLock);
  v9 = TileDataLayerItemWrappers::MRTCacheManagerInternal::s_currentMRTStateHash;
  v22 = TileDataLayerItemWrappers::MRTCacheManagerInternal::s_currentMRTStateHash;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( a2 )
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
  ppwsz = 0LL;
  v10 = SHStrDupW(lpString1, &ppwsz);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = (struct IUnknownVtbl *)*((_QWORD *)this + 9);
    pv = ppwsz;
    if ( v12 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v12->QueryInterface + 1))(v12);
    v24 = 983227;
    v25 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v26 = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
    v13 = ppwsz;
    v27 = ppwsz;
    v28 = v12;
    if ( v12 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v12->QueryInterface + 1))(v12);
    v29 = v9;
    if ( (dword_180037B60 & 1) != 0 )
    {
      v14 = dword_180037B64;
    }
    else
    {
      dword_180037B60 |= 1u;
      v13 = v27;
      v14 = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
      dword_180037B64 = v14;
    }
    v15 = 0LL;
    v16 = (IUnknown *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v16;
    if ( v16 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>((__int64)v16);
      v18->lpVtbl = (struct IUnknownVtbl *)&Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_96d0bed5b180209255fc5fd7d24cbe07_>::`vftable';
      LODWORD(v18[2].lpVtbl) = 983227;
      v18[3].lpVtbl = (struct IUnknownVtbl *)a2;
      if ( a2 )
        (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v18[4].lpVtbl = (struct IUnknownVtbl *)a3;
      if ( a3 )
        (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
      v18[5].lpVtbl = (struct IUnknownVtbl *)v13;
      v18[6].lpVtbl = v12;
      if ( v12 )
        (*((void (__fastcall **)(struct IUnknownVtbl *))v12->QueryInterface + 1))(v12);
      v15 = v18;
      v18[7].lpVtbl = (struct IUnknownVtbl *)v22;
    }
    v11 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v14, v17, v15);
    if ( v15 )
      ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
    if ( v11 >= 0 )
    {
      v19 = 0LL;
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        576LL,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v11);
      v19 = pv;
    }
    lambda_96d0bed5b180209255fc5fd7d24cbe07_::__lambda_96d0bed5b180209255fc5fd7d24cbe07_(&v24);
    if ( v12 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v12->QueryInterface + 2))(v12);
    if ( v19 )
      CoTaskMemFree(v19);
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      523LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( a3 )
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v11;
}
