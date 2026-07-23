/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x1401271AC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140303620, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140303628);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_1403036A8, Executive, 0, 0, 0LL);
  }
  byte_1403036C0 = 1;
  return v0;
}
