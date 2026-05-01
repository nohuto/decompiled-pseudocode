/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x180007044
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z @ 0x180005794 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180007A08 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800092D4 (--$_Uninitialized_move_al_unchecked1@PEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A150 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_18000A150.c)
 *     ??2@YAPEAX_K@Z @ 0x180029510 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002954C (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        char **a1,
        __int64 *a2)
{
  char *v4; // rcx
  char *v5; // rdi
  __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  char *v14; // rsi
  size_t v15; // rcx
  void *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  char *v21; // rdi
  char *v22; // r15
  __int64 v23; // rcx
  char *v24; // rcx
  unsigned __int64 v25; // rax
  char *v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v9 = (v5 - *a1) >> 3;
    if ( v9 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
    v10 = v9 + 1;
    v11 = (v4 - *a1) >> 3;
    v12 = v11 >> 1;
    if ( v11 <= 0x1FFFFFFFFFFFFFFFLL - (v11 >> 1) )
    {
      v13 = v12 + v11;
      if ( v12 + v11 < v10 )
        v13 = v9 + 1;
    }
    else
    {
      v13 = v9 + 1;
    }
    if ( v13 )
    {
      if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v15 = 8 * v13;
      if ( 8 * v13 < 0x1000 )
      {
        v14 = (char *)operator new(v15);
      }
      else
      {
        if ( v15 + 39 < v15 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v16 = operator new(v15 + 39);
        v14 = (char *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v14 - 1) = v16;
      }
    }
    else
    {
      v14 = 0LL;
    }
    try
    {
      v17 = (__int64 *)&v14[8 * v9];
      if ( v17 )
      {
        v18 = *a2;
        *v17 = *a2;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 96);
          while ( v19 >= 0 )
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 96), v19 + 1, v19);
            if ( v20 == v19 )
              goto LABEL_30;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v19 + 16));
        }
      }
LABEL_30:
      std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>(
        *a1,
        a1[1],
        v14);
    }
    catch ( ... )
    {
      v28 = std::_Unfancy<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(&v14[8 * v9]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::destroy<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
        v29,
        v28);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::deallocate(
        v30,
        v14,
        v13);
      throw;
    }
    v21 = *a1;
    if ( *a1 )
    {
      v22 = a1[1];
      while ( v21 != v22 )
      {
        v23 = *(_QWORD *)v21;
        if ( *(_QWORD *)v21 )
        {
          *(_QWORD *)v21 = 0LL;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v23);
        }
        v21 += 8;
      }
      v24 = *a1;
      v25 = (a1[2] - *a1) >> 3;
      if ( v25 > 0x1FFFFFFFFFFFFFFFLL )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      if ( 8 * v25 >= 0x1000 )
      {
        if ( ((unsigned __int8)v24 & 0x1F) != 0 )
        {
          _o__invalid_parameter_noinfo_noreturn();
          __debugbreak();
        }
        v26 = (char *)*((_QWORD *)v24 - 1);
        if ( v26 >= v24 )
        {
          _o__invalid_parameter_noinfo_noreturn();
          __debugbreak();
        }
        v27 = v24 - v26;
        if ( v27 < 8 )
        {
          _o__invalid_parameter_noinfo_noreturn();
          __debugbreak();
        }
        if ( v27 > 0x27 )
        {
          _o__invalid_parameter_noinfo_noreturn();
          __debugbreak();
        }
        v24 = v26;
      }
      operator delete(v24);
    }
    *a1 = v14;
    a1[1] = &v14[8 * v10];
    a1[2] = &v14[8 * v13];
  }
  else
  {
    if ( v5 )
    {
      v6 = *a2;
      *(_QWORD *)v5 = v6;
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 96);
        while ( v7 >= 0 )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 96), v7 + 1, v7);
          if ( v8 == v7 )
            goto LABEL_8;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
      }
    }
LABEL_8:
    a1[1] += 8;
  }
}
