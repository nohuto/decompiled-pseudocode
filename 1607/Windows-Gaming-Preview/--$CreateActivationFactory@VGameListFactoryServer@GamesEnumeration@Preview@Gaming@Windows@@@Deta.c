/*
 * XREFs of ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18000C780
 * Callers:
 *     <none>
 * Callees:
 *     ??0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000AC78 (--0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18000AEB8 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@U?$InterfaceList@UIActivationFactory@@U?$InterfaceList@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180013330 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@U-$InterfaceList@UIActiva.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800134B0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatic_ea_1800134B0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800267CC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer>(
        _BYTE *a1,
        void *a2,
        __int64 a3,
        __int64 a4)
{
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v9; // rax
  int CanCastTo; // esi
  RTL_SRWLOCK *v11; // rdi
  signed __int32 Ptr_high; // edx
  int v13; // edx
  signed __int32 v14; // eax
  RTL_SRWLOCK *v16; // [rsp+20h] [rbp-38h]

  v6 = 0LL;
  v16 = 0LL;
  v9 = (RTL_SRWLOCK *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GameListFactoryServer(v9);
    CanCastTo = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize((Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)v11);
    if ( CanCastTo >= 0 )
    {
      if ( v11 )
      {
        Ptr_high = HIDWORD(v11[5].Ptr);
        if ( Ptr_high == 0x7FFFFFFF )
          goto LABEL_12;
        do
        {
          if ( Ptr_high == _InterlockedCompareExchange(
                             (volatile signed __int32 *)&v11[5].Ptr + 1,
                             Ptr_high + 1,
                             Ptr_high) )
            break;
          Ptr_high = HIDWORD(v11[5].Ptr);
        }
        while ( Ptr_high != 0x7FFFFFFF );
        if ( Ptr_high == 0x7FFFFFFF )
LABEL_12:
          v13 = 0x7FFFFFFF;
        else
          v13 = Ptr_high + 1;
        if ( ((__int64)v11[8].Ptr & 4) == 0 && v13 == 2 )
          _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      }
      v6 = v11;
      v16 = v11;
      if ( v11 )
        Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v11);
      CanCastTo = 0;
    }
    else if ( v11 )
    {
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v11);
    }
    if ( CanCastTo >= 0 )
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<IActivationFactory,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,0,0>::CanCastTo(
                    v6,
                    a3,
                    a4);
      if ( CanCastTo >= 0 )
      {
        if ( (*a1 & 4) == 0 )
        {
          do
            v14 = HIDWORD(v6[5].Ptr);
          while ( v14 != 0x7FFFFFFF
               && v14 != _InterlockedCompareExchange((volatile signed __int32 *)&v6[5].Ptr + 1, v14 + 1, v14) );
          v6 = v16;
        }
        LODWORD(v6[8].Ptr) = *(_DWORD *)a1;
        v6[7].Ptr = a2;
        v6 = 0LL;
        CanCastTo = 0;
      }
    }
  }
  else
  {
    CanCastTo = -2147024882;
  }
  if ( v6 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v6);
  return (unsigned int)CanCastTo;
}
