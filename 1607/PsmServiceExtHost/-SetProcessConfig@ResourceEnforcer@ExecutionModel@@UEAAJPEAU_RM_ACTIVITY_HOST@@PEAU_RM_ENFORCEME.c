/*
 * XREFs of ?SetProcessConfig@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18002AA90
 * Callers:
 *     <none>
 * Callees:
 *     RmpEnforcementApplyLimitsProcessHost @ 0x18002B048 (RmpEnforcementApplyLimitsProcessHost.c)
 */

int __fastcall ExecutionModel::ResourceEnforcer::SetProcessConfig(
        ExecutionModel::ResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        struct _RM_ENFORCEMENT_SETTINGS *a3)
{
  return RmpEnforcementApplyLimitsProcessHost(a2, a3) | 0x10000000;
}
