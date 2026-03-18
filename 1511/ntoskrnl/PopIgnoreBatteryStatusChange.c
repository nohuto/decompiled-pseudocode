/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x140119F3C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_1402DE440, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_1402DE448);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_1402DE4C8, Executive, 0, 0, 0LL);
  }
  byte_1402DE4E0 = 1;
  return v0;
}
