/*
 * XREFs of AudioDGShutdownADG @ 0x140026920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGShutdownADG()
{
  return CAudioDGModule::InitiateShutdownW((CAudioDGModule *)&_AtlModule);
}
