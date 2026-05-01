/*
 * XREFs of ?_Reallocate@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800060E0
 * Callers:
 *     ?push_back@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x180005E74 (-push_back@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL.c)
 * Callees:
 *     ??$_Uninit_move@PEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@V123@@std@@YAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180009814 (--$_Uninit_move@PEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A770 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_18000A770.c)
 *     ??2@YAPEAX_K@Z @ 0x1800267F0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180026834 (--3@YAXPEAX@Z.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Reallocate(
        char **a1,
        unsigned __int64 a2)
{
  char *v4; // rbx
  size_t v5; // rcx
  void *v6; // rax
  __int64 v7; // rcx
  char *v8; // r13
  char *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rcx
  char *v12; // rcx
  unsigned __int64 v13; // rax
  char *v14; // rax
  unsigned __int64 v15; // rcx
  char *result; // rax

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    {
      std::_Xbad_alloc();
      __debugbreak();
    }
    v5 = 8 * a2;
    if ( 8 * a2 < 0x1000 )
    {
      v4 = (char *)operator new(v5);
      if ( !v4 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
    }
    else
    {
      if ( v5 + 39 < v5 )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v6 = operator new(v5 + 39);
      if ( !v6 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v4 = (char *)(((unsigned __int64)v6 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v4 - 1) = v6;
    }
  }
  else
  {
    v4 = 0LL;
  }
  try
  {
    std::_Uninit_move<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
      *a1,
      a1[1],
      v4);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::deallocate(
      v7,
      v4,
      a2);
    throw;
  }
  v8 = a1[1];
  v9 = *a1;
  v10 = (v8 - *a1) >> 3;
  if ( *a1 )
  {
    while ( v9 != v8 )
    {
      v11 = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 )
      {
        *(_QWORD *)v9 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v11);
      }
      v9 += 8;
    }
    v12 = *a1;
    v13 = (a1[2] - *a1) >> 3;
    if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    if ( 8 * v13 >= 0x1000 )
    {
      if ( ((unsigned __int8)v12 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v14 = (char *)*((_QWORD *)v12 - 1);
      if ( v14 >= v12 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v15 = v12 - v14;
      if ( v15 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      if ( v15 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v12 = v14;
    }
    operator delete(v12);
  }
  a1[2] = &v4[8 * a2];
  result = &v4[8 * v10];
  a1[1] = result;
  *a1 = v4;
  return result;
}
