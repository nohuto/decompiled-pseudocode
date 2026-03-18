/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x1404FA018
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x1404F9FFC (PopCurrentPowerStatePrecise.c)
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400D26F0 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x14011B90C (PopBatteryQueueWork.c)
 */

__int64 PopBatteryUpdateCurrentState()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v2 = qword_1402DE558;
    result = qword_1402DE558 + 50000000;
    if ( qword_1402DE558 + 50000000 > v0 )
      break;
    PopBatteryQueueWork(1u);
    ExBlockOnAddressPushLock((__int64)&qword_1402DE560, &qword_1402DE558, &v2, 8uLL, 0LL);
  }
  return result;
}
