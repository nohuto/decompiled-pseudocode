/*
 * XREFs of ?Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z @ 0x18001BB0C
 * Callers:
 *     ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x180007630 (-GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800190A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?CopyWString@Internal@ExecutionModel@@YAJPEBGPEAPEAG@Z @ 0x18001B370 (-CopyWString@Internal@ExecutionModel@@YAJPEBGPEAPEAG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024DA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::Initialize(
        ExecutionModel::GameConfigStoreServer *this,
        ExecutionModel::Internal *a2,
        unsigned __int16 **a3)
{
  void **v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  void *v8; // rsi
  const WCHAR *v9; // rcx
  unsigned int v10; // ebx
  unsigned __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  HKEY v12; // [rsp+58h] [rbp+10h] BYREF
  HKEY v13; // [rsp+60h] [rbp+18h] BYREF
  HKEY v14; // [rsp+68h] [rbp+20h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v4 = (void **)((char *)this + 8);
  result = ExecutionModel::Internal::CopyWString(a2, (unsigned __int16 *)this + 4, a3);
  if ( (int)result >= 0 )
  {
    result = StringCchLengthW((const unsigned __int16 *)a2, 0x7FFFFFFFLL, v11);
    if ( (int)result >= 0 )
    {
      v6 = v11[0] + 1;
      v7 = 2 * (v11[0] + 1);
      if ( !is_mul_ok(v11[0] + 1, 2uLL) )
        v7 = -1LL;
      v8 = operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
      if ( *v4 != v8 )
      {
        operator delete(*v4);
        *v4 = v8;
      }
      if ( *v4 )
      {
        result = StringCchCopyW((char *)*v4, v6, (char *)a2);
        if ( (int)result >= 0 )
        {
          v9 = (const WCHAR *)*v4;
          v14 = 0LL;
          v13 = 0LL;
          v12 = 0LL;
          v10 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v9, &v14, &v13, &v12);
          Common::AutoHandleCloseHKEY<HKEY__ *>(v12);
          Common::AutoHandleCloseHKEY<HKEY__ *>(v13);
          Common::AutoHandleCloseHKEY<HKEY__ *>(v14);
          return v10;
        }
      }
      else
      {
        return 2147942414LL;
      }
    }
  }
  return result;
}
