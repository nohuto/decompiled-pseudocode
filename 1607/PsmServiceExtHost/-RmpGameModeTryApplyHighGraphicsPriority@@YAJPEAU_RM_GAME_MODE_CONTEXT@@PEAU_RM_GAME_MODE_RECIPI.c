/*
 * XREFs of ?RmpGameModeTryApplyHighGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT@@@Z @ 0x180031E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGameModeTryApplyHighGraphicsPriority(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE *a2)
{
  return RmpSystemSetProcessHighGraphicsPriority(*a2);
}
