/*
 * XREFs of ?FindAllAsyncPackageFamilyName@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18000B2D0
 * Callers:
 *     ?FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18000B2C0 (-FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x18000F9C4 (--$Make@V-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumeratio.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800134B0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatic_ea_1800134B0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800267CC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::FindAllAsyncPackageFamilyName(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rbx
  int v6; // edi
  signed __int32 v7; // r8d
  int v8; // r8d
  signed __int32 v9; // edx
  int v10; // edx
  _QWORD *v11; // r14
  signed __int32 v12; // edx
  signed int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rax
  int v17[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v19; // [rsp+60h] [rbp+8h] BYREF
  const wchar_t *v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v3 = a1 - 32;
  v6 = 0x7FFFFFFF;
  if ( a1 != 32 )
  {
    v7 = *(_DWORD *)(v3 + 44);
    if ( v7 == 0x7FFFFFFF )
      goto LABEL_7;
    do
    {
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 44), v7 + 1, v7) )
        break;
      v7 = *(_DWORD *)(v3 + 44);
    }
    while ( v7 != 0x7FFFFFFF );
    if ( v7 == 0x7FFFFFFF )
LABEL_7:
      v8 = 0x7FFFFFFF;
    else
      v8 = v7 + 1;
    if ( (*(_BYTE *)(v3 + 64) & 4) == 0 && v8 == 2 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v9 = *(_DWORD *)(v3 + 44);
    if ( v9 == 0x7FFFFFFF )
      goto LABEL_16;
    do
    {
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 44), v9 + 1, v9) )
        break;
      v9 = *(_DWORD *)(v3 + 44);
    }
    while ( v9 != 0x7FFFFFFF );
    if ( v9 == 0x7FFFFFFF )
LABEL_16:
      v10 = 0x7FFFFFFF;
    else
      v10 = v9 + 1;
    if ( (*(_BYTE *)(v3 + 64) & 4) == 0 && v10 == 2 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  v17[2] = 0;
  v17[0] = 3;
  v17[1] = 128;
  v11 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    *v11 = &Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_e7d66ec3c204a83377ccb333ff70ed66_>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>>::`vftable';
    v11[1] = v3;
    v11[2] = v3;
    if ( v3 )
    {
      v12 = *(_DWORD *)(v3 + 44);
      if ( v12 != 0x7FFFFFFF )
      {
        do
        {
          if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 44), v12 + 1, v12) )
            break;
          v12 = *(_DWORD *)(v3 + 44);
        }
        while ( v12 != 0x7FFFFFFF );
        if ( v12 != 0x7FFFFFFF )
          v6 = v12 + 1;
      }
      if ( (*(_BYTE *)(v3 + 64) & 4) == 0 && v6 == 2 )
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    v11[3] = a2;
  }
  else
  {
    v11 = 0LL;
  }
  v19 = 0;
  *a3 = 0LL;
  v20 = L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Preview.GamesEn"
         "umeration.GameListEntry>>";
  v13 = v11 == 0LL ? 0x8007000E : 0;
  if ( v11 )
  {
    ((void (__fastcall *)(__int64 *, int *, const wchar_t **, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
      &v21,
      v17,
      &v20,
      &v19);
    v14 = v21;
    v13 = v21 == 0 ? 0x8007000E : 0;
    if ( v21 )
    {
      *(_QWORD *)(v21 + 240) = v11;
      v11 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 104LL))(v14 + 8);
      if ( v13 < 0 )
      {
LABEL_40:
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 16LL))(v14 + 8);
        goto LABEL_42;
      }
      v15 = v14;
      v14 = 0LL;
      if ( v15 )
        v15 += 160LL;
      *a3 = v15;
    }
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v11)(v11, 1LL);
    goto LABEL_40;
  }
LABEL_42:
  if ( v3 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v3);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v13);
  if ( v3 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v3);
  return (unsigned int)v13;
}
