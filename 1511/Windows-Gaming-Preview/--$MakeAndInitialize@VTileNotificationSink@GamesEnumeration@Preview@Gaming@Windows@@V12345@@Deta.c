/*
 * XREFs of ??$MakeAndInitialize@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@V12345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@@Z @ 0x18000A7C8
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180008E38 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180007110 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?RuntimeClassInitialize@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001E448 (-RuntimeClassInitialize@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180025EF0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink,Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rdi
  char *v3; // rax
  char *v4; // rdi
  int v5; // ebp
  _QWORD *v6; // rbx
  char *v8; // [rsp+70h] [rbp+18h]

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 9, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
    }
  }
  *a1 = 0LL;
  v3 = (char *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v8 = v3;
  if ( v3 )
  {
    v6 = v3 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 8));
    *((_DWORD *)v4 + 9) = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IVisualElementEventSink'};
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v4 = v8;
    }
    *(_QWORD *)v4 = &Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::`vftable'{for `IVisualElementEventSink'};
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_DWORD *)v4 + 10) = 0;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 10) = 0LL;
    *((_QWORD *)v4 + 14) = 0LL;
    *((_QWORD *)v4 + 18) = 0LL;
    v5 = Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::RuntimeClassInitialize((Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink *)v4);
    if ( v5 >= 0 )
    {
      if ( v4 )
        _InterlockedIncrement((volatile signed __int32 *)v4 + 9);
      *a1 = (volatile signed __int32 *)v4;
      if ( v4 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 9, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
        }
      }
      return 0;
    }
    else if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 9, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
