/*
 * XREFs of ?IgnoreCurrentThread@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXXZ @ 0x180023894
 * Callers:
 *     ?StopActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020530 (-StopActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020A80 (-StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020FB0 (-StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z @ 0x180023908 (-Stop@-$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180024C9C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::ActivityBase<0,0,5>::IgnoreCurrentThread(__int64 a1)
{
  __int64 **v1; // rbx
  __int64 *i; // rax
  __int64 v3; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 32) )
  {
    v1 = (__int64 **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x779,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        v4);
    *((_DWORD *)v1 + 6) = 0;
    for ( i = *v1; *i; *v1 = i )
    {
      v3 = **v1;
      if ( (__int64 **)v3 == v1 )
      {
        **v1 = (__int64)v1[2];
        break;
      }
      i = (__int64 *)(v3 + 16);
    }
    *v1 = 0LL;
  }
}
