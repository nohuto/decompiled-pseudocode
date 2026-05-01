/*
 * XREFs of ?GetTierNameMaxLength@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z @ 0x180022328
 * Callers:
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180022070 (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 * Callees:
 *     ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z @ 0x18001C284 (-Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z.c)
 */

char __fastcall ExecutionModel::Internal::GetTierNameMaxLength(HKEY *this, DWORD *a2, unsigned int *a3)
{
  if ( Common::RegistryKey::Open(this, HKEY_LOCAL_MACHINE, L"System\\ResourcePolicyStore\\TierThresholds", 0x20019u) < 0
    || RegQueryInfoKeyW(*this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, a2, 0LL, 0LL, 0LL) < 0 )
  {
    return 0;
  }
  ++*a2;
  return 1;
}
