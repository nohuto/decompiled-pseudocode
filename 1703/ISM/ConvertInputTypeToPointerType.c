/*
 * XREFs of ConvertInputTypeToPointerType @ 0x1800148A8
 * Callers:
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x180016190 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180016F50 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertInputTypeToPointerType(char a1)
{
  if ( (a1 & 8) != 0 )
    return 2LL;
  if ( (a1 & 0x20) != 0 )
    return 5LL;
  if ( (a1 & 0x10) != 0 )
    return 3LL;
  return (a1 & 2) != 0 ? 4 : 1;
}
