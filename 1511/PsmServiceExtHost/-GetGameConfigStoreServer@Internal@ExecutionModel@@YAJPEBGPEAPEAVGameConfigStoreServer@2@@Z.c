/*
 * XREFs of ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x18001C0CC
 * Callers:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180006D50 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??$_EqualRangeImpl@PEBG@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001C274 (--$_EqualRangeImpl@PEBG@-$_HashTable@PEBGU-$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@.c)
 *     ??$emplace@PEAGPEAVGameConfigStoreServer@ExecutionModel@@@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@$$QEAPEAG$$QEAPEAVGameConfigStoreServer@ExecutionModel@@@Z @ 0x180022D54 (--$emplace@PEAGPEAVGameConfigStoreServer@ExecutionModel@@@-$_HashTable@PEBGU-$pair@QEBGPEAVGameC.c)
 *     ??$AutoPtrDeallocate@VGameConfigStoreServer@ExecutionModel@@@Common@@YAXPEAVGameConfigStoreServer@ExecutionModel@@@Z @ 0x180025940 (--$AutoPtrDeallocate@VGameConfigStoreServer@ExecutionModel@@@Common@@YAXPEAVGameConfigStoreServe.c)
 *     ?CopyWString@Internal@ExecutionModel@@YAJPEBGPEAPEAG@Z @ 0x180025A70 (-CopyWString@Internal@ExecutionModel@@YAJPEBGPEAPEAG@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x180025D80 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetGameConfigStoreServer(
        ExecutionModel::Internal *this,
        unsigned __int16 *a2,
        struct ExecutionModel::GameConfigStoreServer **a3)
{
  unsigned __int16 **v5; // r8
  __int64 v6; // rsi
  int v7; // ebx
  int v8; // edi
  char *v10; // rbx
  unsigned __int16 **v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // rcx
  struct Common::RegistryKey *lpcSubKeys; // [rsp+20h] [rbp-50h]
  struct Common::RegistryKey *lpcSubKeysa; // [rsp+20h] [rbp-50h]
  _BYTE v17[16]; // [rsp+60h] [rbp-10h] BYREF
  ExecutionModel::Internal *v18; // [rsp+A0h] [rbp+30h] BYREF
  _QWORD *v19; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v20; // [rsp+B8h] [rbp+48h] BYREF

  v18 = this;
  v19 = 0LL;
  utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::_EqualRangeImpl<unsigned short const *>(
    (_DWORD)ExecutionModel::Internal::_sidToGameConfigServer,
    (_DWORD)a2,
    (unsigned int)&v18,
    (unsigned int)&v19,
    (__int64)v17,
    (__int64)&v20);
  if ( v19 == ExecutionModel::Internal::_sidToGameConfigServer )
  {
    v19 = 0LL;
    v8 = ExecutionModel::Internal::CopyWString(this, (const unsigned __int16 *)&v19, v5);
    if ( v8 >= 0 )
    {
      v10 = (char *)malloc(0x28uLL);
      if ( v10 )
      {
        *(_QWORD *)v10 = &ExecutionModel::GameConfigStoreServer::`vftable';
        *((_QWORD *)v10 + 1) = 0LL;
        *((_QWORD *)v10 + 2) = 0LL;
        *((_QWORD *)v10 + 3) = 0LL;
        *((_QWORD *)v10 + 4) = 0LL;
      }
      else
      {
        v10 = 0LL;
      }
      if ( v10 )
      {
        if ( this )
        {
          v12 = ExecutionModel::Internal::CopyWString(this, (const unsigned __int16 *)v10 + 16, v11);
          if ( v12 >= 0 )
          {
            v12 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(
                    *((ExecutionModel::Internal **)v10 + 4),
                    (const unsigned __int16 *)v10 + 12,
                    (struct Common::RegistryKey *)(v10 + 16),
                    (struct Common::RegistryKey *)(v10 + 8),
                    lpcSubKeys);
            if ( v12 >= 0 )
              v12 = StringCchLengthW((const unsigned __int16 *)this, 0x7FFFFFFFLL, &v20);
          }
          v8 = v12;
          if ( v12 >= 0 )
          {
            *(_QWORD *)a2 = v10;
            v20 = (unsigned __int64)v10;
            utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::emplace<unsigned short *,ExecutionModel::GameConfigStoreServer *>(
              v13,
              v17,
              &v19,
              &v20);
            Common::AutoPtrDeallocate<ExecutionModel::GameConfigStoreServer>(0LL);
            v14 = 0LL;
LABEL_17:
            operator delete(v14);
            return (unsigned int)v8;
          }
        }
        else
        {
          v8 = -2147024809;
        }
      }
      else
      {
        v8 = -2147024882;
      }
      Common::AutoPtrDeallocate<ExecutionModel::GameConfigStoreServer>(v10);
    }
    v14 = v19;
    goto LABEL_17;
  }
  v6 = v19[4];
  v7 = 0;
  if ( RegQueryInfoKeyW(*(HKEY *)(v6 + 24), 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL) )
    v7 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(
           *(ExecutionModel::Internal **)(v6 + 32),
           (const unsigned __int16 *)(v6 + 24),
           (struct Common::RegistryKey *)(v6 + 16),
           (struct Common::RegistryKey *)(v6 + 8),
           lpcSubKeysa);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)a2 = v6;
    return (unsigned int)v8;
  }
  return (unsigned int)v7;
}
