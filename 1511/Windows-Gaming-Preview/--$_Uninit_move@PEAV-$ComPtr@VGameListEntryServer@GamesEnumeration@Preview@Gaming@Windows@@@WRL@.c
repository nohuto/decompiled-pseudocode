/*
 * XREFs of ??$_Uninit_move@PEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@V123@@std@@YAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180006288
 * Callers:
 *     ?_Reallocate@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180002A94 (-_Reallocate@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@W.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninit_move<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rcx
  __int64 *i; // rbx
  __int64 *v6; // [rsp+50h] [rbp+18h]
  __int64 *v7; // [rsp+58h] [rbp+20h]

  v6 = a3;
  v7 = a3;
  try
  {
    while ( a1 != a2 )
    {
      if ( a3 )
      {
        *a3 = 0LL;
        if ( a3 != a1 )
        {
          *a3 = *a1;
          *a1 = 0LL;
        }
      }
      v6 = ++a3;
      ++a1;
    }
  }
  catch ( ... )
  {
    for ( i = v7; i != v6; ++i )
    {
      v4 = *i;
      if ( *i )
      {
        *i = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v4);
      }
    }
    throw;
  }
  return a3;
}
