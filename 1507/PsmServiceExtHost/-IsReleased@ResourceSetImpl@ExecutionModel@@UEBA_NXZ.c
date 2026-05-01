/*
 * XREFs of ?IsReleased@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180014CA0
 * Callers:
 *     ?ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180014B60 (-ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::IsReleased(ExecutionModel::ResourceSetImpl *this)
{
  return (*((unsigned __int8 *)this + 28) >> 4) & 1;
}
