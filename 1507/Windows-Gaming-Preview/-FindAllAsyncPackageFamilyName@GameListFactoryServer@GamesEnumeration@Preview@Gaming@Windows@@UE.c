/*
 * XREFs of ?FindAllAsyncPackageFamilyName@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180009190
 * Callers:
 *     ?FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180009180 (-FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyn.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x18000D5E4 (--$Make@V-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumeratio.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180011460 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatic_ea_180011460.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026020 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
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
  signed int v13; // ebp
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v18[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v20; // [rsp+60h] [rbp+8h] BYREF
  const wchar_t *v21; // [rsp+68h] [rbp+10h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

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
  v18[2] = 0;
  v18[0] = 3;
  v18[1] = 128;
  v11 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    *v11 = &Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_a644c9ca355a20c9ec9333f2681dd115_>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>>::`vftable';
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
  v20 = 0;
  *a3 = 0LL;
  v21 = L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Preview.GamesEn"
         "umeration.GameListEntry>>";
  v13 = v11 == 0LL ? 0x8007000E : 0;
  if ( v11 )
  {
    ((void (__fastcall *)(__int64 *, int *, const wchar_t **, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
      &v22,
      v18,
      &v21,
      &v20);
    v14 = v22;
    v13 = v22 == 0 ? 0x8007000E : 0;
    if ( v22 )
    {
      v15 = *(_QWORD *)(v22 + 8);
      *(_QWORD *)(v22 + 224) = v11;
      v11 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64))(v15 + 104))(v14 + 8);
      if ( v13 < 0 )
      {
LABEL_40:
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 16LL))(v14 + 8);
        goto LABEL_42;
      }
      v16 = v14;
      v14 = 0LL;
      if ( v16 )
        v16 += 152LL;
      *a3 = v16;
    }
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v11)(v11, 1LL);
    goto LABEL_40;
  }
LABEL_42:
  if ( v3 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v3);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      102LL,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v13);
  if ( v3 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v3);
  return (unsigned int)v13;
}
