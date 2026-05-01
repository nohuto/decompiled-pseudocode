/*
 * XREFs of ?RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180001708
 * Callers:
 *     RmpQoSEnableDisableForHost @ 0x180001414 (RmpQoSEnableDisableForHost.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035118 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 */

void __fastcall RmpQoSDisableWatchdogForHost(struct _RM_ACTIVITY_HOST *a1, __int64 a2)
{
  PVOID v2; // r8

  RmpUtilRemoveEntryListAndClear((char *)a1 + 840, a2, a1);
  RmpObjectRelease(v2);
}
