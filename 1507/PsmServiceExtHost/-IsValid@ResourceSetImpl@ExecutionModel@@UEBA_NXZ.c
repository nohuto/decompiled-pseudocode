/*
 * XREFs of ?IsValid@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180014C90
 * Callers:
 *     ?ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180014B60 (-ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180015270 (-Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::IsValid(ExecutionModel::ResourceSetImpl *this)
{
  return *((_BYTE *)this + 28) & 1;
}
