/*
 * XREFs of ?RmpSystemQueryGpuMemoryBudget@@YAJPEAK0@Z @ 0x18001FC4C
 * Callers:
 *     ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001FB3C (-RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemQueryGpuMemoryBudget(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]

  v5[1] = 0;
  v6 = 0LL;
  v5[0] = 16;
  result = D3DKMTGetMemoryBudgetTarget(v5);
  if ( (int)result >= 0 )
  {
    *a1 = v6;
    *a2 = HIDWORD(v6);
    return 0LL;
  }
  return result;
}
