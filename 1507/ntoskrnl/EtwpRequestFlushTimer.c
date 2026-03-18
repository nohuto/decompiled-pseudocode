/*
 * XREFs of EtwpRequestFlushTimer @ 0x1400637C4
 * Callers:
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x14013A218 (EtwpLoggerDpc.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x1404A1BD0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, char a2)
{
  __int64 v2; // r8
  unsigned int v4; // ecx
  ULONG v5; // r9d
  __int64 v6; // rdx
  unsigned int v7; // ecx

  v2 = a1;
  if ( (*(_DWORD *)(a1 + 836) & 0x400) != 0 )
    return 0;
  if ( a2 || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v2 + 836), 9u) )
      KiInsertQueueDpc(v2 + 584, 0, 0, 0, 0);
  }
  else
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(v2 + 836), 0xAu) )
      return 0;
    v4 = *(_DWORD *)(v2 + 224);
    if ( (*(_DWORD *)(v2 + 12) & 0x10) == 0 )
      v4 *= 1000;
    v5 = 500;
    v6 = EtwpOneMs * v4;
    v7 = v4 >> 2;
    if ( v7 < 0x1F4 )
      v5 = v7;
    KeSetCoalescableTimer((PKTIMER)(v2 + 520), (LARGE_INTEGER)v6, 0, v5, 0LL);
  }
  return 1;
}
