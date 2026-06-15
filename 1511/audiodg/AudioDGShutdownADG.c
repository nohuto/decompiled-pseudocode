/*
 * XREFs of AudioDGShutdownADG @ 0x140027D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGShutdownADG()
{
  return CAudioDGModule::InitiateShutdownW((CAudioDGModule *)&_AtlModule);
}
