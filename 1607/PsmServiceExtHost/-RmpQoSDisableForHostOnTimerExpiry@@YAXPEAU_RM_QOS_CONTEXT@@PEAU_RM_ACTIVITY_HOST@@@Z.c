/*
 * XREFs of ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035118
 * Callers:
 *     ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180001050 (-RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x1800014A0 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     RmpEnforcerContextRundown @ 0x18002B560 (RmpEnforcerContextRundown.c)
 * Callees:
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001554 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpQoSDisableForHostOnTimerExpiry(struct _RM_QOS_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2)
{
  __int64 v3; // rdx

  *((_DWORD *)a2 + 204) |= 0x10u;
  RmpQoSSetForHost(a1, a2, 0);
  RmpQoSDisableWatchdogForHost(a2, v3);
}
