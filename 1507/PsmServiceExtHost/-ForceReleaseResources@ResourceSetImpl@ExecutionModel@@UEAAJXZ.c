/*
 * XREFs of ?ForceReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180047A40
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::ForceReleaseResources(ExecutionModel::ResourceSetImpl *this)
{
  return (*(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 120LL))(this);
}
