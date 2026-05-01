/*
 * XREFs of ?push_back@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x180002358
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z @ 0x1800020E4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z.c)
 * Callees:
 *     ?_Reallocate@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180002A94 (-_Reallocate@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@W.c)
 *     ?_Xlen@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@IEBAXXZ @ 0x180002B74 (-_Xlen@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Mic.c)
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
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rdx
  signed __int64 v22; // rtt

  v4 = a1[1];
  if ( (unsigned __int64)a2 >= v4 || *a1 > (unsigned __int64)a2 )
  {
    v15 = a1[2];
    if ( v4 == v15 && !((__int64)(v15 - v4) >> 3) )
    {
      v16 = (__int64)(v4 - *a1) >> 3;
      if ( v16 == 0x1FFFFFFFFFFFFFFFLL )
        std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlen();
      v17 = v16 + 1;
      v18 = (v15 - *a1) >> 3;
      if ( 0x1FFFFFFFFFFFFFFFLL - (v18 >> 1) >= v18 )
        v19 = (v18 >> 1) + v18;
      else
        v19 = 0LL;
      if ( v19 < v17 )
        v19 = v17;
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Reallocate(
        a1,
        v19);
    }
    v20 = (__int64 *)a1[1];
    if ( v20 )
    {
      v21 = *a2;
      *v20 = *a2;
      if ( v21 )
      {
        v13 = *(_QWORD *)(v21 + 96);
        while ( v13 >= 0 )
        {
          v22 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 96), v13 + 1, v13);
          if ( v22 == v13 )
            goto LABEL_33;
        }
        goto LABEL_32;
      }
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
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 96);
        while ( v13 >= 0 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 96), v13 + 1, v13);
          if ( v14 == v13 )
            goto LABEL_33;
        }
LABEL_32:
        _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
      }
    }
  }
LABEL_33:
  a1[1] += 8LL;
}
