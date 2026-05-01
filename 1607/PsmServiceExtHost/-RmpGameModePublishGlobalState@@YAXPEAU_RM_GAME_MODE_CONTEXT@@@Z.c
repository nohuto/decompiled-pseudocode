/*
 * XREFs of ?RmpGameModePublishGlobalState@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001E37C
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001E19C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031B44 (-RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     RmpSystemPublishGlobalGameModeState @ 0x180037ADC (RmpSystemPublishGlobalGameModeState.c)
 */

void __fastcall RmpGameModePublishGlobalState(struct _RM_GAME_MODE_CONTEXT *a1)
{
  BOOL v2; // edi

  v2 = *((_QWORD *)a1 + 3) != 0LL;
  if ( v2 != ((*((_DWORD *)a1 + 18) >> 1) & 1) )
  {
    RmpSystemPublishGlobalGameModeState();
    *((_DWORD *)a1 + 18) ^= (*((_DWORD *)a1 + 18) ^ (2 * v2)) & 2;
  }
}
