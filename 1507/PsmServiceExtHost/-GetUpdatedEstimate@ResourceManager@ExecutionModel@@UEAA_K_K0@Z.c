/*
 * XREFs of ?GetUpdatedEstimate@ResourceManager@ExecutionModel@@UEAA_K_K0@Z @ 0x1800362E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExecutionModel::ResourceManager::GetUpdatedEstimate(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned int v3; // ecx
  unsigned __int64 result; // rax

  v3 = 0;
  do
    result = (a3 >> 2) * ++v3;
  while ( result <= a2 && v3 < 4 );
  if ( result >= a3 )
    return a3;
  return result;
}
