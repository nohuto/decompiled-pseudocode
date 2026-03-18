/*
 * XREFs of PsGetCurrentProcessWow64Process @ 0x14010FB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentProcessWow64Process()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
}
