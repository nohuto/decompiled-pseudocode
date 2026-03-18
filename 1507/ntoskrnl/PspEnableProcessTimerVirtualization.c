/*
 * XREFs of PspEnableProcessTimerVirtualization @ 0x1405C74D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnableProcessTimerVirtualization(__int64 a1)
{
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 4u);
  return 0LL;
}
