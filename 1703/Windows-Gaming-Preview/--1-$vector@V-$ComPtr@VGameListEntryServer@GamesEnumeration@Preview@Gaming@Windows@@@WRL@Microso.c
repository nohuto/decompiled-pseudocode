/*
 * XREFs of ??1?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000CEA8
 * Callers:
 *     ??_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18000CD70 (--_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A150 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_18000A150.c)
 *     ??3@YAXPEAX@Z @ 0x18002954C (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::~vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
        __int64 a1)
{
  volatile signed __int64 **v1; // rbx
  volatile signed __int64 **v3; // rsi
  volatile signed __int64 *v4; // rcx
  volatile signed __int64 **v5; // rcx
  unsigned __int64 v6; // rax
  volatile signed __int64 **v7; // rax
  unsigned __int64 v8; // rcx

  v1 = *(volatile signed __int64 ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(volatile signed __int64 ***)(a1 + 8);
    while ( v1 != v3 )
    {
      v4 = *v1;
      if ( *v1 )
      {
        *v1 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v4);
      }
      ++v1;
    }
    v5 = *(volatile signed __int64 ***)a1;
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    if ( 8 * v6 >= 0x1000 )
    {
      if ( ((unsigned __int8)v5 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v7 = (volatile signed __int64 **)*(v5 - 1);
      if ( v7 >= v5 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v8 = (char *)v5 - (char *)v7;
      if ( v8 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      if ( v8 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v5 = v7;
    }
    operator delete(v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
