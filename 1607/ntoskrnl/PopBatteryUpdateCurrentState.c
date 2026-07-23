/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140548188
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x14054816C (PopCurrentPowerStatePrecise.c)
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14009DC4C (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x140131E08 (PopBatteryQueueWork.c)
 */

__int64 PopBatteryUpdateCurrentState()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v2 = qword_140303738;
    result = qword_140303738 + 50000000;
    if ( qword_140303738 + 50000000 > v0 )
      break;
    PopBatteryQueueWork(1u);
    ExBlockOnAddressPushLock((__int64)&qword_140303740, &qword_140303738, &v2, 8uLL, 0LL);
  }
  return result;
}
