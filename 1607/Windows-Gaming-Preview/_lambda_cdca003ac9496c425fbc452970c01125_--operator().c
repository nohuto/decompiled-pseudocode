/*
 * XREFs of _lambda_cdca003ac9496c425fbc452970c01125_::operator() @ 0x180014AD0
 * Callers:
 *     ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_cdca003ac9496c425fbc452970c01125_@@@Internal@Windows@@V?$CBasicResult@E$0A@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@E$0A@@23@@Z @ 0x1800185D0 (-Run@-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_cdca003ac9496c425fbc452970c01125_@@@Intern.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004D30 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIAppDisplayInfo@ApplicationModel@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007B40 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIAppDisplayInfo@ApplicationModel@Windows@@U-$InterfaceL.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013540 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180013540.c)
 *     ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001E574 (-RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileI.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800267CC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_cdca003ac9496c425fbc452970c01125_::operator()(__int64 a1, __int64 a2)
{
  struct ITileInfo *v3; // rbp
  char *v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int64 *v11; // [rsp+50h] [rbp+8h]
  __int64 v12; // [rsp+60h] [rbp+18h]

  v3 = *(struct ITileInfo **)(*(_QWORD *)a1 + 192LL);
  v11 = 0LL;
  v4 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  v12 = (__int64)v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x111,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_16;
  }
  v7 = v4 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 16));
  *(_QWORD *)(v5 + 48) = 1LL;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *v7 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  v8 = (_QWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v5 = v12;
  }
  *(_QWORD *)v5 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable';
  *v7 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `IWeakReferenceSource'};
  *v8 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v6 = Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::RuntimeClassInitialize(
         (Windows::Gaming::Preview::GamesEnumeration::LaunchOperation *)&Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'},
         v3);
  if ( v6 >= 0 )
  {
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(v5);
    v11 = (volatile signed __int64 *)v5;
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v5);
    v6 = 0;
  }
  else if ( v5 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v5);
  }
  if ( v6 < 0 )
    goto LABEL_14;
  *(_BYTE *)(a2 + 16) = 1;
  v6 = 0;
LABEL_16:
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v11);
  return (unsigned int)v6;
}
