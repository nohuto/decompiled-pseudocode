/*
 * XREFs of ?SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z @ 0x18001BC50
 * Callers:
 *     GcsSrv_SetGlobalProperty @ 0x18001B2D0 (GcsSrv_SetGlobalProperty.c)
 * Callees:
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ??1RegistryKey@Common@@QEAA@XZ @ 0x180007F44 (--1RegistryKey@Common@@QEAA@XZ.c)
 *     ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x18001C59C (-SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::SetGlobalProperty(
        __int64 a1,
        int a2,
        const void *a3,
        unsigned int a4)
{
  const WCHAR *v4; // rcx
  __int64 v7; // rbp
  int v8; // ebx
  HKEY v10; // [rsp+30h] [rbp-18h] BYREF
  HKEY v11[2]; // [rsp+38h] [rbp-10h] BYREF
  HKEY v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(const WCHAR **)(a1 + 8);
  v12 = 0LL;
  v11[0] = 0LL;
  v10 = 0LL;
  v7 = a2;
  v8 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v4, &v12, v11, &v10);
  if ( v8 >= 0 )
  {
    if ( !(_DWORD)v7 && a3 && a4 )
      v8 = Common::RegistryKey::SetValue(
             (Common::RegistryKey *)&v12,
             (const unsigned __int16 *)*(&ExecutionModel::Data::GlobalPropertyInfo + 2 * v7),
             a3,
             a4,
             *((_DWORD *)&ExecutionModel::Data::GlobalPropertyInfo + 4 * v7 + 2));
    else
      v8 = -2147024809;
  }
  Common::RegistryKey::~RegistryKey(&v10);
  Common::RegistryKey::~RegistryKey(v11);
  Common::RegistryKey::~RegistryKey(&v12);
  return (unsigned int)v8;
}
