/*
 * XREFs of ?GetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z @ 0x180007E10
 * Callers:
 *     GcsSrv_GetGlobalProperty @ 0x180006E90 (GcsSrv_GetGlobalProperty.c)
 * Callees:
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ??1RegistryKey@Common@@QEAA@XZ @ 0x180007F44 (--1RegistryKey@Common@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGlobalProperty(__int64 a1, int a2, BYTE *a3, DWORD *a4)
{
  const WCHAR *v4; // rcx
  __int64 v7; // rdi
  int v8; // ebx
  struct ExecutionModel::Data::GlobalPropertyInfoEntry near **v9; // rdi
  LSTATUS v10; // eax
  HKEY hKey; // [rsp+30h] [rbp-20h] BYREF
  HKEY v13; // [rsp+38h] [rbp-18h] BYREF
  HKEY v14[2]; // [rsp+40h] [rbp-10h] BYREF
  DWORD Type; // [rsp+70h] [rbp+20h] BYREF

  v4 = *(const WCHAR **)(a1 + 8);
  hKey = 0LL;
  v14[0] = 0LL;
  v13 = 0LL;
  v7 = a2;
  v8 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v4, &hKey, v14, &v13);
  if ( v8 >= 0 )
  {
    if ( (_DWORD)v7 || !a4 )
    {
      v8 = -2147024809;
    }
    else
    {
      v9 = &ExecutionModel::Data::GlobalPropertyInfo + 2 * v7;
      v10 = RegQueryValueExW(hKey, (LPCWSTR)*v9, 0LL, &Type, a3, a4);
      v8 = v10;
      if ( v10 > 0 )
        v8 = (unsigned __int16)v10 | 0x80070000;
      if ( v8 >= 0 && Type != *((_DWORD *)v9 + 2) )
        v8 = -2147418113;
    }
  }
  Common::RegistryKey::~RegistryKey((Common::RegistryKey *)&v13);
  Common::RegistryKey::~RegistryKey((Common::RegistryKey *)v14);
  Common::RegistryKey::~RegistryKey((Common::RegistryKey *)&hKey);
  return (unsigned int)v8;
}
