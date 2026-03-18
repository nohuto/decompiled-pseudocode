/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x1401397E4
 * Callers:
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x140632C00 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
