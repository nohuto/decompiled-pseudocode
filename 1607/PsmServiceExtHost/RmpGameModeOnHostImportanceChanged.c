/*
 * XREFs of RmpGameModeOnHostImportanceChanged @ 0x1800320B0
 * Callers:
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014270 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 *     ?RmpGameModeAddActivityHostToList@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180031744 (-RmpGameModeAddActivityHostToList@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031B44 (-RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_NAME@@@Z @ 0x180031C20 (-RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_N.c)
 *     ?RmpGameModeUnapplyAllPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031F38 (-RmpGameModeUnapplyAllPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

void __fastcall RmpGameModeOnHostImportanceChanged(struct _RM_GAME_MODE_CONTEXT *a1, struct _WNF_STATE_NAME *a2)
{
  char v4; // r8

  if ( *((struct _WNF_STATE_NAME **)a1 + 3) == a2 )
  {
    RmpGameModeUnapplyAllPolicies(a1);
    RmpGameModePublishResourceAllotment(0, 0LL, a2 + 136);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  RmpUtilRemoveEntryListAndClear(&a2[134]);
  RmpGameModeAddActivityHostToList(a1, (struct _RM_ACTIVITY_HOST *)a2);
  if ( v4 )
    RmpGameModeEvaluateRecipient(a1);
}
