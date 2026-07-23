/*
 * XREFs of PopInitializeTimer @ 0x14057A7BC
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140149E60 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     PopNetInitialize @ 0x140795FD0 (PopNetInitialize.c)
 *     PopThermalInit @ 0x1407B8060 (PopThermalInit.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopInitializeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax

  KeInitializeTimer2(a1, a2, a3, a6);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  return result;
}
