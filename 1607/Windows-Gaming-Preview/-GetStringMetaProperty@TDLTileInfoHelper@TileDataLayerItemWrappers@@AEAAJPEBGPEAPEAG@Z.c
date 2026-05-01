/*
 * XREFs of ?GetStringMetaProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z @ 0x1800237E4
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180014C40 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F18C (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetStringMetaProperty(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  __int64 v4; // rcx
  int v5; // eax
  IStream *v6; // rcx
  unsigned int v7; // ebx
  HRESULT Str; // eax
  IStream *pstm; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 9);
  pstm = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, IStream **))(*(_QWORD *)v4 + 96LL))(v4, a2, &pstm);
  v6 = pstm;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( pstm )
    {
      Str = IStream_ReadStr(pstm, a3);
      v6 = pstm;
      v7 = Str;
      if ( Str >= 0 )
        v7 = 0;
    }
    else
    {
      v7 = -2147023728;
    }
  }
  if ( v6 )
  {
    pstm = 0LL;
    (*(void (__fastcall **)(IStream *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v7;
}
