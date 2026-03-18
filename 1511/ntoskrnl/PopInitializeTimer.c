/*
 * XREFs of PopInitializeTimer @ 0x14052F670
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1401367D8 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopThermalInit @ 0x140762D90 (PopThermalInit.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x140093234 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopInitializeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  KeInitializeTimer2(a1, a2, a3, 8);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  return result;
}
