/*
 * XREFs of _lambda_71dc2f7d55954a1851a2fc52826e08b0_::operator() @ 0x180013338
 * Callers:
 *     ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_71dc2f7d55954a1851a2fc52826e08b0_@@@Internal@Windows@@V?$CBasicResult@E$0A@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@E$0A@@23@@Z @ 0x180017240 (-Run@-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_71dc2f7d55954a1851a2fc52826e08b0_@@@Intern.c)
 * Callees:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004070 (-AddRef@-$RuntimeClass@U-$InterfaceList@U-$IIterator@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAUIIns.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180007240 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011390 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180011390.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026020 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_71dc2f7d55954a1851a2fc52826e08b0_::operator()(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  volatile signed __int64 *v4; // rsi
  char *v5; // rax
  __int64 v6; // rdi
  int v7; // r14d
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r15
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+80h] [rbp+50h]
  volatile signed __int64 *v19; // [rsp+88h] [rbp+58h]

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 200LL);
  v4 = 0LL;
  v19 = 0LL;
  v5 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v5;
  v18 = (__int64)v5;
  if ( !v5 )
  {
    v7 = -2147024882;
LABEL_21:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      381LL,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_23;
  }
  v8 = v5 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 16));
  *(_QWORD *)(v6 + 48) = 1LL;
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *v8 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  v9 = (_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v19;
    v6 = v18;
  }
  *(_QWORD *)v6 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable';
  *v8 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `IWeakReferenceSource'};
  *v9 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v18 = 0LL;
  v17 = 0LL;
  v10 = VE_MaterializeApplicationActivator(v3, &v17);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17);
    v7 = v10;
    if ( v10 >= 0 )
      goto LABEL_10;
    v11 = 24LL;
  }
  else
  {
    v11 = 23LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v11,
    (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\launchoperation.cpp",
    (const char *)(unsigned int)v10);
LABEL_10:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v7 >= 0 )
  {
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(v6);
    v4 = (volatile signed __int64 *)v6;
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
        (volatile signed __int64 *)v6,
        v12,
        v13);
    v7 = 0;
  }
  else if ( v6 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
      (volatile signed __int64 *)v6,
      v12,
      v13);
  }
  if ( v7 < 0 )
    goto LABEL_21;
  *(_BYTE *)(a2 + 16) = 1;
  v7 = 0;
LABEL_23:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
      v4,
      v12,
      v13);
  return (unsigned int)v7;
}
