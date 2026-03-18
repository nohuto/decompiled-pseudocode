/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140547C48
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x140547C2C (PopCurrentPowerStatePrecise.c)
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400872BC (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x140131898 (PopBatteryQueueWork.c)
 */

__int64 PopBatteryUpdateCurrentState()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v2 = qword_1403037F8;
    result = qword_1403037F8 + 50000000;
    if ( qword_1403037F8 + 50000000 > v0 )
      break;
    PopBatteryQueueWork(1u);
    ExBlockOnAddressPushLock((__int64)&qword_140303800, &qword_1403037F8, &v2, 8uLL, 0LL);
  }
  return result;
}
