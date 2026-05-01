/*
 * XREFs of ?push_back@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x180002204
 * Callers:
 *     _lambda_1bb9c5925967af19482f691dd21001c0_::operator() @ 0x180001F80 (_lambda_1bb9c5925967af19482f691dd21001c0_--operator().c)
 * Callees:
 *     ?_Reallocate@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180002924 (-_Reallocate@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@W.c)
 *     ?_Xlen@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@IEBAXXZ @ 0x180002A04 (-_Xlen@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Mic.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800073D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Ga_ea_1800073D0.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::push_back(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 *v18; // rax

  v4 = a1[1];
  if ( (unsigned __int64)a2 >= v4 || *a1 > (unsigned __int64)a2 )
  {
    v13 = a1[2];
    if ( v4 == v13 && !((__int64)(v13 - v4) >> 3) )
    {
      v14 = (__int64)(v4 - *a1) >> 3;
      if ( v14 == 0x1FFFFFFFFFFFFFFFLL )
        std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlen();
      v15 = v14 + 1;
      v16 = (v13 - *a1) >> 3;
      if ( 0x1FFFFFFFFFFFFFFFLL - (v16 >> 1) >= v16 )
        v17 = (v16 >> 1) + v16;
      else
        v17 = 0LL;
      if ( v17 < v15 )
        v17 = v15;
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Reallocate(
        a1,
        v17);
    }
    v18 = (__int64 *)a1[1];
    if ( v18 )
    {
      v12 = *a2;
      *v18 = *a2;
LABEL_25:
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef();
    }
  }
  else
  {
    v5 = a1[2];
    v6 = ((__int64)a2 - *a1) >> 3;
    if ( v4 == v5 && !((__int64)(v5 - v4) >> 3) )
    {
      v7 = (__int64)(v4 - *a1) >> 3;
      if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
        std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlen();
      v8 = v7 + 1;
      v9 = (v5 - *a1) >> 3;
      if ( 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) >= v9 )
        v10 = (v9 >> 1) + v9;
      else
        v10 = 0LL;
      if ( v10 < v8 )
        v10 = v8;
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Reallocate(
        a1,
        v10);
    }
    v11 = (_QWORD *)a1[1];
    if ( v11 )
    {
      v12 = *(_QWORD *)(*a1 + 8 * v6);
      *v11 = v12;
      goto LABEL_25;
    }
  }
  a1[1] += 8LL;
}
