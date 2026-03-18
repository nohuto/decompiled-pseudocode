/*
 * XREFs of PoClearBroadcast @ 0x1404F8D9C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PnprWakeDevices @ 0x1403B0D18 (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x14011AB50 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x140126A00 (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x1403A5CA4 (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  _BYTE *v0; // rbx
  __int64 v1; // rdx

  v0 = qword_1402DDC10;
  if ( qword_1402DDC10 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_1402DDC08 = 0LL;
    qword_1402DDC10 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2, v1);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
