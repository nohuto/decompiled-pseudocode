/*
 * XREFs of ?HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x180034BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18002B5C8 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::HasLowerPrecedenceThan(
        ExecutionModel::ExternalResourceSet *this,
        struct ExecutionModel::_ResourceInfo *a2,
        unsigned int a3)
{
  int v5; // eax
  bool v6; // di

  v5 = *((_DWORD *)this + 6 * *(int *)a2 + 52);
  v6 = *((_DWORD *)a2 + 4) < v5;
  if ( *((_DWORD *)a2 + 4) >= v5
    && v5 == *((_DWORD *)a2 + 4)
    && ExecutionModel::ResourceManager::IsForegroundProcess(*((ExecutionModel::ResourceManager **)this + 3), a3)
    && ((*((_BYTE *)this + 1424) & 4) != 0 || *((_DWORD *)this + 2) != a3) )
  {
    return 1;
  }
  return v6;
}
