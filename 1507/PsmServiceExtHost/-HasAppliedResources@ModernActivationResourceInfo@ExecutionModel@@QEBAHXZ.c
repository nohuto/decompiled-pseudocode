/*
 * XREFs of ?HasAppliedResources@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x18003630C
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036734 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x18003E3A0 (-GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExecutionModel::ModernActivationResourceInfo::HasAppliedResources(
        ExecutionModel::ModernActivationResourceInfo **this)
{
  return this[3] != (ExecutionModel::ModernActivationResourceInfo *)(this + 3)
      || this[6] != (ExecutionModel::ModernActivationResourceInfo *)(this + 6);
}
