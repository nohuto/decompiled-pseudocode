/*
 * XREFs of ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x18000153C
 * Callers:
 *     ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180001050 (-RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x1800014A0 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     RmpEnforcerContextRundown @ 0x18002B560 (RmpEnforcerContextRundown.c)
 * Callees:
 *     <none>
 */

struct _RM_ACTIVITY_ENFORCEMENT_INFO *__fastcall RmpQoSGetEarliestHostInfo(struct _RM_QOS_CONTEXT *a1)
{
  if ( *(struct _RM_QOS_CONTEXT **)a1 == a1 )
    return 0LL;
  else
    return (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)(*(_QWORD *)a1 - 168LL);
}
