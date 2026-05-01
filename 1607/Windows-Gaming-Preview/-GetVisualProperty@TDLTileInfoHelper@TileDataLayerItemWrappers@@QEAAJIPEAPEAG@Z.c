/*
 * XREFs of ?GetVisualProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJIPEAPEAG@Z @ 0x1800226C8
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180014C40 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetVisualProperty(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        __int64 a2,
        unsigned __int16 **a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 9);
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 120LL))(v4, 6553693LL, &v10);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v10 + 32LL))(v10, a3);
    v5 = v6;
    if ( v6 >= 0 )
      v5 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x136,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
