/*
 * XREFs of ?RmpPowerBoostContextInitialize@@YAJPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18001A064
 * Callers:
 *     RmpEnforcerContextInitialize @ 0x180019ED8 (RmpEnforcerContextInitialize.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpPowerBoostContextInitialize(struct _RM_POWERBOOST_CONTEXT *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x20uLL);
  result = TpAllocTimer((char *)a1 + 16, RmpEnforcementPowerBoostWatchdogCallback, (char *)RmSvcGlobals + 176, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
