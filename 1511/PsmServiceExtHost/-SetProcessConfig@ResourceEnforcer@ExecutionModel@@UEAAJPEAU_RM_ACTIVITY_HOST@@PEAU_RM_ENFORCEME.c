/*
 * XREFs of ?SetProcessConfig@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18003FA00
 * Callers:
 *     <none>
 * Callees:
 *     RmpEnforcementApplyLimits @ 0x1800400B4 (RmpEnforcementApplyLimits.c)
 */

int __fastcall ExecutionModel::ResourceEnforcer::SetProcessConfig(
        ExecutionModel::ResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        struct _RM_ENFORCEMENT_SETTINGS *a3)
{
  return RmpEnforcementApplyLimits(a2, a3) | 0x10000000;
}
