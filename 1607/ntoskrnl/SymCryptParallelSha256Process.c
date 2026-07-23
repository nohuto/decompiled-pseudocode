/*
 * XREFs of SymCryptParallelSha256Process @ 0x140237160
 * Callers:
 *     KeComputeParallelSha256 @ 0x1401D24A8 (KeComputeParallelSha256.c)
 * Callees:
 *     KeRestoreExtendedAndSupervisorState @ 0x140083914 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSaveExtendedProcessorState @ 0x140083B00 (KeSaveExtendedProcessorState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SymCryptParallelHashProcess @ 0x140237378 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x140237628 (SymCryptParallelHashProcess_serial.c)
 */

__int64 __fastcall SymCryptParallelSha256Process(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  char v5; // al
  struct _XSTATE_SAVE XStateSave; // [rsp+40h] [rbp-78h] BYREF

  v5 = g_SymCryptCpuFeaturesNotPresent;
  if ( (g_SymCryptCpuFeaturesNotPresent & 0x10) == 0 )
  {
    if ( KeSaveExtendedProcessorState(4uLL, &XStateSave) >= 0 )
    {
      SymCryptParallelHashProcess(a1, a1, a2, a3, a4, a5);
      return KeRestoreExtendedAndSupervisorState((__int64)&XStateSave);
    }
    v5 = g_SymCryptCpuFeaturesNotPresent;
  }
  if ( (v5 & 2) != 0 )
    return SymCryptParallelHashProcess_serial(a1, a1, a2, a3, a4, a5);
  else
    return SymCryptParallelHashProcess(a1, a1, a2, a3, a4, a5);
}
