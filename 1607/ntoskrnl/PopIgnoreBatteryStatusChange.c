/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x140126C3C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_1403036E0, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_1403036E8);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140303768, Executive, 0, 0, 0LL);
  }
  byte_140303780 = 1;
  return v0;
}
