/*
 * XREFs of ?RmpGameModeUnapplyHighGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT@@@Z @ 0x1800320A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeUnapplyHighGraphicsPriority(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE *a2)
{
  RmpSystemSetProcessHighGraphicsPriority(*a2);
}
