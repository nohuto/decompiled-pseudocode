/*
 * XREFs of ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18002965C
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B990 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x1800283E4 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 */

ModernResourceEnforcer::ModernResourceEnforcerWorkItem *__fastcall tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(
        ModernResourceEnforcer::ModernResourceEnforcerWorkItem *a1)
{
  ModernResourceEnforcer::ModernResourceEnforcerWorkItem *result; // rax

  if ( a1 )
    return ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(a1);
  return result;
}
