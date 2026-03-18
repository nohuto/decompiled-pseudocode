/*
 * XREFs of PoClearBroadcast @ 0x140565E40
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PnprWakeDevices @ 0x1404013F4 (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x1401486A0 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x14015A1D0 (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x1403ED0AC (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  _BYTE *v0; // rbx
  __int64 v1; // rdx

  v0 = qword_14032E1F0;
  if ( qword_14032E1F0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_14032E1E8 = 0LL;
    qword_14032E1F0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2, v1);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
