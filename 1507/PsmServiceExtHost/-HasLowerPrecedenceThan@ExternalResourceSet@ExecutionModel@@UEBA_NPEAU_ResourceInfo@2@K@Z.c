/*
 * XREFs of ?HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x18003F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x1800364B0 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::HasLowerPrecedenceThan(
        ExecutionModel::ExternalResourceSet *this,
        struct ExecutionModel::_ResourceInfo *a2,
        unsigned int a3)
{
  int v5; // eax
  char v6; // bl

  v5 = *((_DWORD *)this + 6 * *(int *)a2 + 52);
  if ( *((_DWORD *)a2 + 4) < v5 )
    return 1;
  v6 = 0;
  if ( v5 == *((_DWORD *)a2 + 4)
    && (unsigned int)ExecutionModel::ResourceManager::IsForegroundProcess(
                       *((ExecutionModel::ResourceManager **)this + 3),
                       a3)
    && (*((_BYTE *)this + 1394) || *((_DWORD *)this + 2) != a3) )
  {
    return 1;
  }
  return v6;
}
