/*
 * XREFs of RmpGameModeReapplyCurrentResourceAllotment @ 0x180032144
 * Callers:
 *     RmpActivityHostNewProcessNotification @ 0x180003578 (RmpActivityHostNewProcessNotification.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002DB54 (-RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ?RmpGameModeUnapplyAllPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031F38 (-RmpGameModeUnapplyAllPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

void __fastcall RmpGameModeReapplyCurrentResourceAllotment(struct _RM_GAME_MODE_CONTEXT *a1)
{
  RmpGameModeUnapplyAllPolicies(a1);
  RmpGameModeApplyPoliciesToRecipient(a1);
}
