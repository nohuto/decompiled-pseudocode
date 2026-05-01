/*
 * XREFs of ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18000C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000A66C (--0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18000A950 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@U?$InterfaceList@UIActivationFactory@@U?$InterfaceList@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800126C8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@U-$InterfaceList@UIActiva.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer>(
        _BYTE *a1,
        void *a2,
        __int64 a3,
        __int64 a4)
{
  RTL_SRWLOCK *v8; // rax
  int CanCastTo; // esi
  RTL_SRWLOCK *v10; // rdi
  signed __int32 v11; // eax
  int v12; // ebx
  signed __int32 v13; // eax
  signed __int32 v14; // eax
  int v15; // ebx
  __int64 v16; // r10
  RTL_SRWLOCK *v17; // r10
  signed __int32 v18; // eax
  int v19; // ebx
  RTL_SRWLOCK *v21; // [rsp+20h] [rbp-28h]

  v21 = 0LL;
  v8 = (RTL_SRWLOCK *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
  {
    CanCastTo = -2147024882;
    goto LABEL_30;
  }
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GameListFactoryServer(v8);
  CanCastTo = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize((Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)v10);
  if ( CanCastTo >= 0 )
  {
    if ( v10 )
    {
      v13 = _InterlockedIncrement((volatile signed __int32 *)&v10[5].Ptr + 1);
      if ( ((__int64)v10[8].Ptr & 4) == 0 && v13 == 2 )
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    v21 = v10;
    if ( !v10 )
      goto LABEL_24;
    v14 = _InterlockedDecrement((volatile signed __int32 *)&v10[5].Ptr + 1);
    if ( v14 )
    {
      if ( ((__int64)v10[8].Ptr & 4) != 0 || v14 != 1 )
        goto LABEL_24;
    }
    else
    {
      v15 = LODWORD(v10[8].Ptr) >> 2;
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v10->Ptr + 7))(v10, 1LL);
      if ( (v15 & 1) == 0 || !Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_24;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
LABEL_24:
    CanCastTo = 0;
    goto LABEL_25;
  }
  if ( v10 )
  {
    v11 = _InterlockedDecrement((volatile signed __int32 *)&v10[5].Ptr + 1);
    if ( v11 )
    {
      if ( ((__int64)v10[8].Ptr & 4) == 0 && v11 == 1 )
        goto LABEL_11;
    }
    else
    {
      v12 = LODWORD(v10[8].Ptr) >> 2;
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v10->Ptr + 7))(v10, 1LL);
      if ( (v12 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_11:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
LABEL_25:
  if ( CanCastTo >= 0 )
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<IActivationFactory,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,0,0>::CanCastTo(
                  v21,
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      if ( (*a1 & 4) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 44));
      v17 = v21;
      v21 = 0LL;
      CanCastTo = 0;
      LODWORD(v17[8].Ptr) = *(_DWORD *)a1;
      v17[7].Ptr = a2;
    }
  }
LABEL_30:
  if ( v21 )
  {
    v18 = _InterlockedDecrement((volatile signed __int32 *)&v21[5].Ptr + 1);
    if ( v18 )
    {
      if ( ((__int64)v21[8].Ptr & 4) == 0 && v18 == 1 )
        goto LABEL_37;
    }
    else
    {
      v19 = LODWORD(v21[8].Ptr) >> 2;
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v21->Ptr + 7))(v21, 1LL);
      if ( (v19 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_37:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return (unsigned int)CanCastTo;
}
