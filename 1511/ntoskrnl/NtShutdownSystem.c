/*
 * XREFs of NtShutdownSystem @ 0x14066C7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtShutdownSystem(SHUTDOWN_ACTION Action)
{
  __int32 v1; // ecx
  POWER_ACTION v3; // ecx

  if ( Action )
  {
    v1 = Action - 1;
    if ( v1 )
    {
      if ( v1 != 1 )
        return -1073741811;
      v3 = PowerActionShutdownOff;
    }
    else
    {
      v3 = PowerActionShutdownReset;
    }
  }
  else
  {
    v3 = PowerActionShutdown;
  }
  return NtSetSystemPowerState(v3, PowerSystemSleeping3, 0xC0000004);
}
