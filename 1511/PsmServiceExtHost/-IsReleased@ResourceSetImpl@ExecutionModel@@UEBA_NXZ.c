/*
 * XREFs of ?IsReleased@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180013B60
 * Callers:
 *     ?ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180013A20 (-ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::IsReleased(ExecutionModel::ResourceSetImpl *this)
{
  return (*((unsigned __int8 *)this + 28) >> 4) & 1;
}
