/*
 * XREFs of ?_Reserve@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@Z @ 0x18000BB8C
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000A1E0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?_Xlen@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ @ 0x180008638 (-_Xlen@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ.c)
 *     ?_Reallocate@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@Z @ 0x18000BDE8 (-_Reallocate@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX.c)
 */

unsigned __int64 __fastcall std::vector<ParsedTaskbarLayout>::_Reserve(_QWORD *a1)
{
  __int64 v1; // r8
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  v1 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((a1[2] - v1) * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64) >> 63;
  if ( !((a1[2] - v1) / 104) )
  {
    v3 = (v1 - *a1) / 104;
    if ( v3 == 0x276276276276276LL )
      std::vector<ParsedTaskbarLayout>::_Xlen();
    v4 = v3 + 1;
    v5 = (a1[2] - *a1) / 104LL;
    if ( 0x276276276276276LL - (v5 >> 1) >= v5 )
      v6 = (v5 >> 1) + v5;
    else
      v6 = 0LL;
    if ( v6 < v4 )
      v6 = v4;
    return std::vector<ParsedTaskbarLayout>::_Reallocate(a1, v6);
  }
  return result;
}
