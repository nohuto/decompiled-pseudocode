/*
 * XREFs of ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001FB3C
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001F898 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpGameModePublishRecipientProcessId@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001FBE0 (-RmpGameModePublishRecipientProcessId@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemQueryGpuMemoryBudget@@YAJPEAK0@Z @ 0x18001FC4C (-RmpSystemQueryGpuMemoryBudget@@YAJPEAK0@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpGameModeInitialize(struct _RM_SERVICE_GLOBALS *a1, struct _RM_GAME_MODE_CONTEXT *a2)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]

  memset_0(a2, 0, 0x50uLL);
  *(_QWORD *)a2 = a1;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v4 = 16LL;
  v5 = 0LL;
  if ( (int)D3DKMTGetYieldPercentage(&v4) < 0
    || (*((_DWORD *)a2 + 15) = HIDWORD(v5),
        *((_DWORD *)a2 + 18) = v5,
        (int)RmpSystemQueryGpuMemoryBudget((unsigned int *)a2 + 16, (unsigned int *)a2 + 17) < 0) )
  {
    *((_BYTE *)a2 + 76) |= 1u;
  }
  RmpGameModePublishRecipientProcessId(a2);
}
