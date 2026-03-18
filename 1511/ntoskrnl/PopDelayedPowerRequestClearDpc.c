/*
 * XREFs of PopDelayedPowerRequestClearDpc @ 0x140127228
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDelayedPowerRequestClearDpc(__int64 a1, __int64 a2)
{
  return PoClearPowerRequestInternal(*(_QWORD *)(a2 + 128), *(_DWORD *)(a2 + 136));
}
