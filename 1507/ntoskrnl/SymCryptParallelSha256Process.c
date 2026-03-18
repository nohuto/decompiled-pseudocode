/*
 * XREFs of SymCryptParallelSha256Process @ 0x14026C770
 * Callers:
 *     KeComputeParallelSha256 @ 0x1401FFB64 (KeComputeParallelSha256.c)
 * Callees:
 *     KeSaveExtendedProcessorState @ 0x140124FA8 (KeSaveExtendedProcessorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1401265C8 (KeRestoreExtendedAndSupervisorState.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SymCryptParallelHashProcess @ 0x14026C988 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x14026CC38 (SymCryptParallelHashProcess_serial.c)
 */

void __fastcall SymCryptParallelSha256Process(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  char v5; // al
  struct _XSTATE_SAVE XStateSave; // [rsp+40h] [rbp-78h] BYREF

  v5 = g_SymCryptCpuFeaturesNotPresent;
  if ( (g_SymCryptCpuFeaturesNotPresent & 0x20) == 0 )
  {
    if ( KeSaveExtendedProcessorState(4uLL, &XStateSave) >= 0 )
    {
      SymCryptParallelHashProcess(a1, a1, a2, a3, a4, a5);
      KeRestoreExtendedAndSupervisorState((__int64)&XStateSave);
      return;
    }
    v5 = g_SymCryptCpuFeaturesNotPresent;
  }
  if ( (v5 & 2) != 0 )
    SymCryptParallelHashProcess_serial(a1, a1, a2, a3, a4, a5);
  else
    SymCryptParallelHashProcess(a1, a1, a2, a3, a4, a5);
}
