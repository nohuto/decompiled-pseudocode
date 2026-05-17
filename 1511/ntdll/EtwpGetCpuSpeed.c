/*
 * XREFs of EtwpGetCpuSpeed @ 0x180045B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall EtwpGetCpuSpeed(__int64 a1)
{
  return EtwpGetCpuSpeedFromRegistry(a1);
}
