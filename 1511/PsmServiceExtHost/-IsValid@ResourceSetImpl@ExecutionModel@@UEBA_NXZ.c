/*
 * XREFs of ?IsValid@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180013B50
 * Callers:
 *     ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x180013280 (-HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z.c)
 *     ?ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180013A20 (-ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::IsValid(ExecutionModel::ResourceSetImpl *this)
{
  return *((_BYTE *)this + 28) & 1;
}
