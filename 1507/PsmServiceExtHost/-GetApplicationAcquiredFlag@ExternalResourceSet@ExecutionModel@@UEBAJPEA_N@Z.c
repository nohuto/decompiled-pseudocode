/*
 * XREFs of ?GetApplicationAcquiredFlag@ExternalResourceSet@ExecutionModel@@UEBAJPEA_N@Z @ 0x18003F6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::GetApplicationAcquiredFlag(
        ExecutionModel::ExternalResourceSet *this,
        bool *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147942487LL;
  *a2 = *((_BYTE *)this + 1392);
  return result;
}
