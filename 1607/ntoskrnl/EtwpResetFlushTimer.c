/*
 * XREFs of EtwpResetFlushTimer @ 0x140086F10
 * Callers:
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 * Callees:
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 */

char __fastcall EtwpResetFlushTimer(__int64 a1, char a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 820);
  if ( (v2 & 0x400) != 0 )
  {
    if ( a2 )
      LOBYTE(v2) = KeCancelTimer((PKTIMER)(a1 + 504));
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 820), 0xAu);
  }
  return v2;
}
