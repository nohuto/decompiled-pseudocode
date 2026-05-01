/*
 * XREFs of ?FindOrCreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000AB64
 * Callers:
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000A838 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 * Callees:
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000ABDC (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000ACD8 (-FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@.c)
 */

struct EnforcerApplicationState *__fastcall ModernResourceEnforcer::FindOrCreateApplicationState(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  struct EnforcerApplicationState *result; // rax

  result = ModernResourceEnforcer::FindApplicationState(this, a2, a3, a4, a5, a6);
  if ( !result )
    return ModernResourceEnforcer::CreateApplicationState(this, a2, a3, a4, a5, a6);
  return result;
}
