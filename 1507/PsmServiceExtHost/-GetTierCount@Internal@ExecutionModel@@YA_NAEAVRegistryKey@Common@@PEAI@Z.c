/*
 * XREFs of ?GetTierCount@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z @ 0x18002240C
 * Callers:
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180022070 (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::Internal::GetTierCount(HKEY *this, DWORD *a2, unsigned int *a3)
{
  *a2 = 0;
  return RegQueryInfoKeyW(*this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, a2, 0LL, 0LL, 0LL, 0LL) >= 0;
}
