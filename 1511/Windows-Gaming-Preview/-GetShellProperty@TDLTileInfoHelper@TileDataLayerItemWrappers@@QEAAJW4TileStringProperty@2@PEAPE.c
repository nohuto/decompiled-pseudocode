/*
 * XREFs of ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileStringProperty@2@PEAPEAG@Z @ 0x180021ABC
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012CB0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetAppUserModelId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180022A1C (-GetAppUserModelId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(
        __int64 a1,
        unsigned int a2,
        PWSTR *a3)
{
  wchar_t *v4; // rsi
  HRESULT Str; // edi
  IStream *v6; // rsi
  IStream *v7; // rdi
  IStream *pstm; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  pstm = 0LL;
  v4 = (&off_18002EDD8)[2 * a2];
  *a3 = 0LL;
  Str = (*(__int64 (__fastcall **)(_QWORD, wchar_t *, IStream **))(**(_QWORD **)(a1 + 72) + 96LL))(
          *(_QWORD *)(a1 + 72),
          v4,
          &pstm);
  if ( Str < 0 )
    goto LABEL_2;
  if ( !pstm )
    return (unsigned int)-2147023728;
  Str = IStream_ReadStr(pstm, a3);
  if ( Str < 0 )
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
    Str = 0;
  }
  if ( Str < 0 )
    return (unsigned int)Str;
  return 0LL;
}
