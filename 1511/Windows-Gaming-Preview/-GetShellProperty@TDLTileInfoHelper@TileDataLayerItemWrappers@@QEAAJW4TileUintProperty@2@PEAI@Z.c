/*
 * XREFs of ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileUintProperty@2@PEAI@Z @ 0x180021BAC
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800117A8 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(__int64 a1, __int64 a2, void *a3)
{
  __int64 v3; // rdi
  HRESULT v5; // edi
  IStream *v6; // rsi
  IStream *v7; // rdi
  IStream *pstm; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  pstm = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, IStream **))(*(_QWORD *)v3 + 96LL))(
         v3,
         L"Windows.Gaming.AppCategory",
         &pstm);
  if ( v5 < 0 )
    goto LABEL_2;
  if ( !pstm )
    return (unsigned int)-2147023728;
  v5 = IStream_Read(pstm, a3, 4u);
  if ( v5 < 0 )
  {
LABEL_2:
    v6 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v7 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return 0;
  }
  return (unsigned int)v5;
}
