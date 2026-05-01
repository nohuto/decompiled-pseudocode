/*
 * XREFs of ?IsApplied@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180013B30
 * Callers:
 *     ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x180013280 (-HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSetImpl::IsApplied(ExecutionModel::ResourceSetImpl *this)
{
  return (*((_BYTE *)this + 28) & 0x18) == 8;
}
