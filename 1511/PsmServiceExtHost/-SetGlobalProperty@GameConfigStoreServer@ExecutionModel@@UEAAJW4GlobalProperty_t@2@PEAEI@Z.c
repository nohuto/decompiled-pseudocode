/*
 * XREFs of ?SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEAAJW4GlobalProperty_t@2@PEAEI@Z @ 0x180025C30
 * Callers:
 *     GcsSrv_SetGlobalProperty @ 0x180025B90 (GcsSrv_SetGlobalProperty.c)
 * Callees:
 *     ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x180027CC4 (-SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z.c)
 */

int __fastcall ExecutionModel::GameConfigStoreServer::SetGlobalProperty(
        __int64 a1,
        int a2,
        const void *a3,
        unsigned int a4)
{
  if ( a2 < 1 && a3 && a2 >= 0 )
    return Common::RegistryKey::SetValue(
             (Common::RegistryKey *)(a1 + 24),
             (const unsigned __int16 *)*(&ExecutionModel::Data::GlobalPropertyInfo + 2 * a2),
             a3,
             a4,
             *((_DWORD *)&ExecutionModel::Data::GlobalPropertyInfo + 4 * a2 + 2));
  else
    return -2147024809;
}
