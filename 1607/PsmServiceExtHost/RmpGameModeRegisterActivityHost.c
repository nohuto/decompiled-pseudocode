/*
 * XREFs of RmpGameModeRegisterActivityHost @ 0x180032168
 * Callers:
 *     ?RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002DB54 (-RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     RmpUtilCreateWnfStateNameForApplicationClient @ 0x180002454 (RmpUtilCreateWnfStateNameForApplicationClient.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpGameModeAddActivityHostToList@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180031744 (-RmpGameModeAddActivityHostToList@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031B44 (-RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_NAME@@@Z @ 0x180031C20 (-RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_N.c)
 */

__int64 __fastcall RmpGameModeRegisterActivityHost(struct _RM_GAME_MODE_CONTEXT *a1, struct _WNF_STATE_NAME *a2)
{
  int WnfStateNameForApplicationClient; // ebp
  struct _WNF_STATE_NAME v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  WnfStateNameForApplicationClient = RmpUtilCreateWnfStateNameForApplicationClient(&a2[65], 2060LL, (__int64)&v6);
  if ( WnfStateNameForApplicationClient >= 0 )
  {
    a2[136] = v6;
    v6 = 0LL;
    RmpGameModeAddActivityHostToList(a1, (struct _RM_ACTIVITY_HOST *)a2);
    RmpGameModeEvaluateRecipient(a1);
    if ( *((struct _WNF_STATE_NAME **)a1 + 3) != a2 )
      RmpGameModePublishResourceAllotment(0, 0LL, a2 + 136);
  }
  if ( v6 )
    NtDeleteWnfStateName(&v6);
  return (unsigned int)WnfStateNameForApplicationClient;
}
