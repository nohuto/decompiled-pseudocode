/*
 * XREFs of ?IsApplied@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180014C70
 * Callers:
 *     ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180015270 (-Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSetImpl::IsApplied(ExecutionModel::ResourceSetImpl *this)
{
  return (*((_BYTE *)this + 28) & 0x18) == 8;
}
