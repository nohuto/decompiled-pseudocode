/*
 * XREFs of PoClearBroadcast @ 0x140531904
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PnprWakeDevices @ 0x1403DCE3C (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x1401148E8 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x14013155C (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x1403D08F8 (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  _BYTE *v0; // rbx
  __int64 v1; // rdx

  v0 = qword_1403033F0;
  if ( qword_1403033F0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_1403033E8 = 0LL;
    qword_1403033F0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2, v1);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
