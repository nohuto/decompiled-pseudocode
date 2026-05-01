/*
 * XREFs of ?RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180031A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeUnapplySystemExtensionPolicy(struct _RM_GAME_MODE_CONTEXT *a1, void **a2)
{
  RmpSystemNotifyGameModeExtensionStateChange(a2[5], 0);
}
