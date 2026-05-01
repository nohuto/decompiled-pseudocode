/*
 * XREFs of ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180022204
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180022874 (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@QEAA@XZ @ 0x18000EBD4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@D.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180010E88 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     _lambda_63cb72c57790635ad1abe013bf6503f8_::__lambda_63cb72c57790635ad1abe013bf6503f8_ @ 0x1800226AC (_lambda_63cb72c57790635ad1abe013bf6503f8_--__lambda_63cb72c57790635ad1abe013bf6503f8_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026020 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::SetCachePropertyWithRetry(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3,
        __int64 a4,
        LPCWCH lpString1)
{
  HRESULT v9; // eax
  int v10; // ebp
  struct IUnknownVtbl *v11; // rbx
  LPWSTR v12; // r12
  LPWSTR v13; // rbp
  IUnknown *v14; // rsi
  DWORD CurrentThreadId; // r13d
  IUnknown *v16; // rax
  __int64 v17; // r9
  IUnknown *v18; // rdi
  LPWSTR ppwsz; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+38h] [rbp-50h] BYREF
  struct ITileManager *v21; // [rsp+40h] [rbp-48h]
  struct IVisualElementEnumerator *v22; // [rsp+48h] [rbp-40h]
  LPWSTR v23; // [rsp+50h] [rbp-38h]
  struct IUnknownVtbl *v24; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( CompareStringOrdinal(lpString1, 1, L"@", 1, 0) == 2 )
    return 0LL;
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
    v20 = 983227;
    v21 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v22 = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
    v13 = ppwsz;
    v23 = ppwsz;
    v24 = v11;
    if ( v11 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v11->QueryInterface + 1))(v11);
    v14 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v16 = (IUnknown *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v16;
    if ( v16 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>((__int64)v16);
      v18->lpVtbl = (struct IUnknownVtbl *)&Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_63cb72c57790635ad1abe013bf6503f8_>::`vftable';
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
      v14 = v18;
    }
    v10 = Windows::Internal::ComTaskPool::RunTask(3, 2u, CurrentThreadId, v17, v14);
    if ( v14 )
      ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
    if ( v10 >= 0 )
    {
      v12 = 0LL;
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        461LL,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v10);
    }
    lambda_63cb72c57790635ad1abe013bf6503f8_::__lambda_63cb72c57790635ad1abe013bf6503f8_(&v20);
    if ( v11 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v11->QueryInterface + 2))(v11);
    if ( v12 )
      CoTaskMemFree(v12);
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      415LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( a3 )
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v10;
}
