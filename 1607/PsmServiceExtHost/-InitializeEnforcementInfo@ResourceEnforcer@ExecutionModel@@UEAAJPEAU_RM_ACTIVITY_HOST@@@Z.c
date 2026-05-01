/*
 * XREFs of ?InitializeEnforcementInfo@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A220
 * Callers:
 *     <none>
 * Callees:
 *     RmpEnforcementInfoInitializeProcess @ 0x18002B260 (RmpEnforcementInfoInitializeProcess.c)
 */

int __fastcall ExecutionModel::ResourceEnforcer::InitializeEnforcementInfo(
        ExecutionModel::ResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  return RmpEnforcementInfoInitializeProcess(a2) | 0x10000000;
}
