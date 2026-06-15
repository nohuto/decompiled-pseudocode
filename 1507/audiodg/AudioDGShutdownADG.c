/*
 * XREFs of AudioDGShutdownADG @ 0x140017CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGShutdownADG()
{
  return CAudioDGModule::InitiateShutdownW((CAudioDGModule *)&_AtlModule);
}
