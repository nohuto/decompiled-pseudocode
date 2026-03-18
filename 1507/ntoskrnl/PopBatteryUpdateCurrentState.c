/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x14056C220
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x14056C204 (PopCurrentPowerStatePrecise.c)
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x14014FB80 (PopBatteryQueueWork.c)
 */

__int64 PopBatteryUpdateCurrentState()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v2 = qword_14032EB18;
    result = qword_14032EB18 + 50000000;
    if ( qword_14032EB18 + 50000000 > v0 )
      break;
    PopBatteryQueueWork(1u);
    ExBlockOnAddressPushLock((__int64)&qword_14032EB20, &qword_14032EB18, &v2, 8uLL, 0LL);
  }
  return result;
}
