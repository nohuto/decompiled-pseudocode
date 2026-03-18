/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x140144374
 * Callers:
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x14066B0C8 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140030FF0 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
