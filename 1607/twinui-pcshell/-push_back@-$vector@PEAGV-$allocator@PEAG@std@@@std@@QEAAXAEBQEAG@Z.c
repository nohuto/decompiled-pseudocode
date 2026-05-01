/*
 * XREFs of ?push_back@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18000B988
 * Callers:
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x180009F48 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18000A9AC (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x18001A660 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 * Callees:
 *     ?_Xlen@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ @ 0x180008638 (-_Xlen@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ.c)
 *     ?_Reallocate@?$vector@PEAGV?$allocator@PEAG@std@@@std@@IEAAX_K@Z @ 0x18000C17C (-_Reallocate@-$vector@PEAGV-$allocator@PEAG@std@@@std@@IEAAX_K@Z.c)
 */

void __fastcall std::vector<unsigned short *>::push_back(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rcx

  v4 = a1[1];
  if ( (unsigned __int64)a2 >= v4 || *a1 > (unsigned __int64)a2 )
  {
    v12 = a1[2];
    if ( v4 == v12 && !((__int64)(v12 - v4) >> 3) )
    {
      v13 = (__int64)(v4 - *a1) >> 3;
      if ( v13 == 0x1FFFFFFFFFFFFFFFLL )
        std::vector<ParsedTaskbarLayout>::_Xlen();
      v14 = v13 + 1;
      v15 = (v12 - *a1) >> 3;
      if ( 0x1FFFFFFFFFFFFFFFLL - (v15 >> 1) >= v15 )
        v16 = (v15 >> 1) + v15;
      else
        v16 = 0LL;
      if ( v16 < v14 )
        v16 = v14;
      std::vector<unsigned short *>::_Reallocate(a1, v16);
    }
    v17 = (_QWORD *)a1[1];
    if ( v17 )
      *v17 = *a2;
  }
  else
  {
    v5 = a1[2];
    v6 = ((__int64)a2 - *a1) >> 3;
    if ( v4 == v5 && !((__int64)(v5 - v4) >> 3) )
    {
      v7 = (__int64)(v4 - *a1) >> 3;
      if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
        std::vector<ParsedTaskbarLayout>::_Xlen();
      v8 = v7 + 1;
      v9 = (v5 - *a1) >> 3;
      if ( 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) >= v9 )
        v10 = (v9 >> 1) + v9;
      else
        v10 = 0LL;
      if ( v10 < v8 )
        v10 = v8;
      std::vector<unsigned short *>::_Reallocate(a1, v10);
    }
    v11 = (_QWORD *)a1[1];
    if ( v11 )
      *v11 = *(_QWORD *)(*a1 + 8 * v6);
  }
  a1[1] += 8LL;
}
