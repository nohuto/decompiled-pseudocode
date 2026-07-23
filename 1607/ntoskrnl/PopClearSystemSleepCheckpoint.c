/*
 * XREFs of PopClearSystemSleepCheckpoint @ 0x140676308
 * Callers:
 *     PopCheckShutdownMarker @ 0x1407BA97C (PopCheckShutdownMarker.c)
 * Callees:
 *     ExSetFirmwareEnvironmentVariable @ 0x1406AFFFC (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 PopClearSystemSleepCheckpoint()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( PopCheckpointSystemSleepEnabled )
  {
    v1 = ExSetFirmwareEnvironmentVariable((unsigned int)L"*,", (unsigned int)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, 0, 0, 1);
    if ( v1 == -1073741568 )
      return 0;
    return v1;
  }
  return v0;
}
