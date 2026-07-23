/*
 * XREFs of PoClearBroadcast @ 0x140531E44
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PnprWakeDevices @ 0x1403DCE3C (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x140114E58 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x140131ACC (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x1403D08F8 (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  _BYTE *v0; // rbx
  __int64 v1; // rdx

  v0 = qword_140303330;
  if ( qword_140303330 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140303328 = 0LL;
    qword_140303330 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2, v1);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
