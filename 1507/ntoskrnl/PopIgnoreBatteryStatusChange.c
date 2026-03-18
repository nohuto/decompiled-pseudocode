/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x140147FB0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_14032EA00, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_14032EA08);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_14032EA88, Executive, 0, 0, 0LL);
  }
  byte_14032EAA0 = 1;
  return v0;
}
