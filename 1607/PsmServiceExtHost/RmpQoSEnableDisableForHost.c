/*
 * XREFs of RmpQoSEnableDisableForHost @ 0x180001414
 * Callers:
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 * Callees:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x1800014A0 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001554 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180001708 (-RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180001730 (-RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall RmpQoSEnableDisableForHost(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  struct _RM_QOS_CONTEXT *v3; // rdi
  int v5; // eax
  unsigned int v6; // ebp
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RM_QOS_CONTEXT *)(*((_QWORD *)a1 + 5) + 192LL);
  RtlQueryUnbiasedInterruptTime(&v8);
  v5 = RmpQoSSetForHost(v3, a1, a2);
  v6 = v5;
  if ( !a2 )
  {
    RmpQoSDisableWatchdogForHost(a1);
    goto LABEL_4;
  }
  if ( v5 >= 0 )
  {
    RmpQoSEnableWatchdogForHost(v3, a1, v8);
LABEL_4:
    RmpQoSCheckHostsSetTimer(v3, v8);
  }
  return v6;
}
