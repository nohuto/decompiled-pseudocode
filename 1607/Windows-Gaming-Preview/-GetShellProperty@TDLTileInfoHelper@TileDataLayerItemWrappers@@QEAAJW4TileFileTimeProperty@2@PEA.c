/*
 * XREFs of ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileFileTimeProperty@2@PEAU_FILETIME@@@Z @ 0x180022614
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180014C40 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(
        __int64 a1,
        unsigned int a2,
        void *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  IStream *v6; // rcx
  unsigned int v7; // ebx
  HRESULT v8; // eax
  IStream *pstm; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  pstm = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, wchar_t *, IStream **))(*(_QWORD *)v3 + 96LL))(
         v3,
         (&off_1800292B8)[2 * a2],
         &pstm);
  v6 = pstm;
  v7 = v5;
  if ( v5 < 0 )
    goto LABEL_2;
  if ( !pstm )
    return (unsigned int)-2147023728;
  v8 = IStream_Read(pstm, a3, 8u);
  v6 = pstm;
  v7 = v8;
  if ( v8 < 0 )
  {
LABEL_2:
    if ( v6 )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return 0;
  }
  return v7;
}
