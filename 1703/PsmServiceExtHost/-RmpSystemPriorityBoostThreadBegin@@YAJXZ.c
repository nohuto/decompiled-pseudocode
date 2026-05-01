/*
 * XREFs of ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x180002070
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180003034 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     <none>
 */

__int64 RmpSystemPriorityBoostThreadBegin(void)
{
  _BYTE ThreadInformation[44]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v2; // [rsp+5Ch] [rbp-Ch]
  int v3; // [rsp+70h] [rbp+8h] BYREF

  NtQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
  v3 = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &v3, 4u);
  return v2;
}
