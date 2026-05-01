/*
 * XREFs of _lambda_bbf38d9c7f6d38a94907f74399a6babc_::operator() @ 0x180013A54
 * Callers:
 *     ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_bbf38d9c7f6d38a94907f74399a6babc_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x180016DD0 (-Run@-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_bbf38d9c7f6d38a94907f74399a6babc_@@@Intern.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180007110 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010ED0 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180010ED0.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D4D0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180025EF0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_bbf38d9c7f6d38a94907f74399a6babc_::operator()(unsigned int *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r12
  volatile signed __int64 *v5; // rdi
  char *v6; // rax
  char *v7; // rbx
  int v8; // esi
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v15; // [rsp+88h] [rbp+10h]

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 192LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 176LL);
  v5 = 0LL;
  v6 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v15 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_17:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      503LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v9 = v6 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
  *((_QWORD *)v7 + 6) = 1LL;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *v9 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  v10 = v7 + 16;
  *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v5 = 0LL;
    v7 = v15;
  }
  *(_QWORD *)v7 = &Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::`vftable';
  *v9 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v8 = Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize(
         &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'},
         *(unsigned int *)(v2 + 104),
         a1[4],
         v4,
         v3);
  if ( v8 >= 0 )
  {
    if ( v7 )
    {
      v11 = *((_QWORD *)v7 + 6);
      while ( v11 >= 0 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 6, v11 + 1, v11);
        if ( v12 == v11 )
          goto LABEL_13;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
    }
LABEL_13:
    v5 = (volatile signed __int64 *)v7;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v7);
    v8 = 0;
  }
  else if ( v7 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v7);
  }
  if ( v8 < 0 )
    goto LABEL_17;
LABEL_18:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v5);
  return (unsigned int)v8;
}
