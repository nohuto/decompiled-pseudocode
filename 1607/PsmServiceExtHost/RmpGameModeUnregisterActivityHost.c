/*
 * XREFs of RmpGameModeUnregisterActivityHost @ 0x180032224
 * Callers:
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004EC0 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     RmpDestroyResourceManagerServer @ 0x180029DB0 (RmpDestroyResourceManagerServer.c)
 *     ?RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002D974 (-RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031B44 (-RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_NAME@@@Z @ 0x180031C20 (-RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_N.c)
 *     ?RmpGameModeUnapplyAllPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031F38 (-RmpGameModeUnapplyAllPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

void __fastcall RmpGameModeUnregisterActivityHost(struct _RM_GAME_MODE_CONTEXT *a1, struct _WNF_STATE_NAME *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  struct _WNF_STATE_NAME v8; // rax
  struct _WNF_STATE_NAME v9; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  struct _WNF_STATE_NAME *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  if ( *((struct _WNF_STATE_NAME **)a1 + 3) == a2 )
  {
    RmpGameModeUnapplyAllPolicies(a1);
    RmpGameModePublishResourceAllotment(0, 0LL, a2 + 136);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  RmpUtilRemoveEntryListAndClear(&a2[134]);
  NtDeleteWnfStateName(&a2[136]);
  a2[136] = 0LL;
  RmpGameModeEvaluateRecipient(a1);
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(v4, 1uLL) )
    {
      v8 = a2[3];
      v13 = 0;
      v9 = v8;
      v11 = &v9;
      v12 = 8;
      TlgWrite(v5, &unk_1800416DD, v6, v7, 3u, &pData);
    }
  }
}
