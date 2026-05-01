/*
 * XREFs of ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x180007630
 * Callers:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 * Callees:
 *     ??$AutoPtrDeallocate@VGameConfigStoreServer@ExecutionModel@@@Common@@YAXPEAVGameConfigStoreServer@ExecutionModel@@@Z @ 0x18001B2B0 (--$AutoPtrDeallocate@VGameConfigStoreServer@ExecutionModel@@@Common@@YAXPEAVGameConfigStoreServe.c)
 *     ?CopyWString@Internal@ExecutionModel@@YAJPEBGPEAPEAG@Z @ 0x18001B370 (-CopyWString@Internal@ExecutionModel@@YAJPEBGPEAPEAG@Z.c)
 *     ?Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z @ 0x18001BB0C (-Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z.c)
 *     ??$emplace@PEAGPEAVGameConfigStoreServer@ExecutionModel@@@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@$$QEAPEAG$$QEAPEAVGameConfigStoreServer@ExecutionModel@@@Z @ 0x18001F6A0 (--$emplace@PEAGPEAVGameConfigStoreServer@ExecutionModel@@@-$_HashTable@PEBGU-$pair@QEBGPEAVGameC.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetGameConfigStoreServer(
        struct ExecutionModel::GameConfigStoreServer **this,
        unsigned __int16 *a2,
        struct ExecutionModel::GameConfigStoreServer **a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r11
  unsigned __int16 v7; // r9
  unsigned __int64 i; // rax
  __int64 v9; // rcx
  char v10; // cl
  unsigned __int64 v11; // r10
  _QWORD *v12; // rax
  _QWORD *v13; // r11
  unsigned __int64 v14; // rcx
  struct ExecutionModel::GameConfigStoreServer **v15; // rcx
  int v16; // edx
  int v18; // edi
  ExecutionModel::GameConfigStoreServer *v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  _BYTE v22[40]; // [rsp+20h] [rbp-28h] BYREF
  void *Block; // [rsp+60h] [rbp+18h] BYREF
  ExecutionModel::GameConfigStoreServer *v24; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v6 = *((_QWORD *)ExecutionModel::Internal::_sidToGameConfigServer + 2);
  if ( !v6 )
    goto LABEL_17;
  v7 = *(_WORD *)this;
  a3 = this;
  for ( i = 0LL; *(_WORD *)a3; i = (1025 * (i + v9)) ^ ((1025 * (i + v9)) >> 6) )
  {
    v9 = v7;
    a3 = (struct ExecutionModel::GameConfigStoreServer **)((char *)a3 + 2);
    v7 = *(_WORD *)a3;
  }
  v10 = *((_BYTE *)ExecutionModel::Internal::_sidToGameConfigServer + 32);
  v11 = 32769 * ((9 * i) ^ ((9 * i) >> 11));
  v12 = *(_QWORD **)(v6 + 16 * (v11 & ((8LL << v10) - 1)));
  if ( v12 && (v13 = **(_QWORD ***)(v6 + 16 * (v11 & ((8LL << v10) - 1)) + 8), v12 != v13) )
  {
    while ( 1 )
    {
      v14 = v12[2];
      if ( v14 >= v11 )
      {
        if ( v14 > v11 )
          goto LABEL_17;
        v15 = this;
        do
        {
          v16 = *(unsigned __int16 *)((char *)v15 + v12[3] - (_QWORD)this);
          a3 = (struct ExecutionModel::GameConfigStoreServer **)((unsigned int)*(unsigned __int16 *)v15 - v16);
          if ( (_DWORD)a3 )
            break;
          v15 = (struct ExecutionModel::GameConfigStoreServer **)((char *)v15 + 2);
        }
        while ( v16 );
        if ( !(_DWORD)a3 )
          break;
      }
      v12 = (_QWORD *)*v12;
      if ( v12 == v13 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v12 = ExecutionModel::Internal::_sidToGameConfigServer;
  }
  if ( v12 == ExecutionModel::Internal::_sidToGameConfigServer )
  {
    Block = 0LL;
    v18 = ExecutionModel::Internal::CopyWString(
            (ExecutionModel::Internal *)this,
            (const unsigned __int16 *)&Block,
            (unsigned __int16 **)a3);
    if ( v18 >= 0 )
    {
      v19 = (ExecutionModel::GameConfigStoreServer *)malloc(0x10uLL);
      if ( v19 )
      {
        *(_QWORD *)v19 = &ExecutionModel::GameConfigStoreServer::`vftable';
        *((_QWORD *)v19 + 1) = 0LL;
        v20 = ExecutionModel::GameConfigStoreServer::Initialize(v19, (const unsigned __int16 *)this);
        v3 = v20;
        if ( v20 >= 0 )
        {
          *(_QWORD *)a2 = v19;
          v24 = v19;
          utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::emplace<unsigned short *,ExecutionModel::GameConfigStoreServer *>(
            v21,
            v22,
            &Block,
            &v24);
          Common::AutoPtrDeallocate<ExecutionModel::GameConfigStoreServer>(0LL);
          operator delete(0LL);
          return v3;
        }
        v18 = v20;
      }
      else
      {
        v19 = 0LL;
        v18 = -2147024882;
      }
      Common::AutoPtrDeallocate<ExecutionModel::GameConfigStoreServer>(v19);
    }
    operator delete(Block);
    return (unsigned int)v18;
  }
  *(_QWORD *)a2 = v12[4];
  return v3;
}
