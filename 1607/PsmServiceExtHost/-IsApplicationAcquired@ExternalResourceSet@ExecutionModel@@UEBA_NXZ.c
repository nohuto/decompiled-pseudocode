/*
 * XREFs of ?IsApplicationAcquired@ExternalResourceSet@ExecutionModel@@UEBA_NXZ @ 0x1800369D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::IsApplicationAcquired(
        ExecutionModel::ExternalResourceSet *this)
{
  return *((_BYTE *)this + 1424) & 1;
}
