/*
 * XREFs of EtwpRequestFlushTimer @ 0x140090BA4
 * Callers:
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x14011B614 (EtwpLoggerDpc.c)
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x140471024 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, char a2)
{
  unsigned int v4; // ecx
  ULONG v5; // r9d
  __int64 v6; // rdx
  unsigned int v7; // ecx

  if ( (*(_DWORD *)(a1 + 836) & 0x400) != 0 )
    return 0;
  if ( a2 || (unsigned __int8)KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 9u) )
      KiInsertQueueDpc(a1 + 584, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 0xAu) )
      return 0;
    v4 = *(_DWORD *)(a1 + 224);
    if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
      v4 *= 1000;
    v5 = 500;
    v6 = EtwpOneMs * v4;
    v7 = v4 >> 2;
    if ( v7 < 0x1F4 )
      v5 = v7;
    KeSetCoalescableTimer((PKTIMER)(a1 + 520), (LARGE_INTEGER)v6, 0, v5, 0LL);
  }
  return 1;
}
