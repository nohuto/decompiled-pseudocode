/*
 * XREFs of ??$MakeAndInitialize@VDisplayChangedHandler@@V1@PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@QEAVSpatialInputControllerCollection@@_N@Details@WRL@Microsoft@@YAJPEAPEAVDisplayChangedHandler@@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEBQEAVSpatialInputControllerCollection@@$$QEA_N@Z @ 0x18007B740
 * Callers:
 *     ??$MakeAndInitialize@VDisplayChangedHandler@@V1@PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@QEAVSpatialInputControllerCollection@@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEBQEAVSpatialInputControllerCollection@@$$QEA_N@Z @ 0x18007B1E4 (--$MakeAndInitialize@VDisplayChangedHandler@@V1@PEAUIHolographicDisplayWatcher@Internal@Holograp.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DisplayChangedHandler,DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,SpatialInputControllerCollection * const,bool>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        _BYTE *a4)
{
  _BYTE *v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 *v15; // rcx
  _BYTE *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  _BYTE *v21; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
    goto LABEL_19;
  }
  *(_QWORD *)v9 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
  v9[3] = 1;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v10 = &DisplayChangedHandler::`vftable';
  *((_BYTE *)v10 + 16) = 1;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 4) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v10 + 12), 0, 0);
  v8 = v10;
  v21 = v10;
  v12 = *a3;
  v13 = *a2;
  v21[16] = *a4;
  *((_QWORD *)v8 + 4) = v12;
  if ( *((_QWORD *)v8 + 3) != v13 )
  {
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *((_QWORD *)v8 + 3);
    *((_QWORD *)v8 + 3) = v13;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (__int64 *)*((_QWORD *)v8 + 3);
  v16 = v8 + 40;
  v17 = *v15;
  if ( v8[16] )
  {
    v18 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, _BYTE *))(v17 + 56))(v15, v8, v16);
    v11 = v18;
    if ( v18 < 0 )
    {
      v19 = 199LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_17;
    }
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, _BYTE *))(v17 + 72))(v15, v8, v16);
    v11 = v18;
    if ( v18 < 0 )
    {
      v19 = 203LL;
      goto LABEL_13;
    }
  }
  v11 = 0;
LABEL_17:
  if ( v11 >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v8 + 3);
    v8 = v21;
    *a1 = v21;
    v11 = 0;
  }
LABEL_19:
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v21 + 32LL))(v21, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v11;
}
