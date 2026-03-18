/*
 * XREFs of UsbSleepStudy_LpePowerSettingCallback @ 0x1C0033A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbSleepStudy_LpePowerSettingCallback(
        LPCGUID SettingGuid,
        unsigned __int8 *Value,
        __int64 ValueLength,
        PVOID Context)
{
  __int64 *v5; // rdi
  char v6; // si
  KIRQL v7; // bp
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx

  v5 = &gDevicesListHead;
  DbgPrint("UsbSleepStudy_LpePowerSettingCallback: Enter\r\n", Value, ValueLength, Context);
  v6 = *Value;
  DbgPrint("UsbSleepStudy_LpePowerSettingCallback: enteringLpe %d\r\n", *Value);
  v7 = KeAcquireSpinLockRaiseToDpc(&gDevicesListSpinLock);
  if ( v6 == gIsWithinLpe )
  {
    DbgPrint("UsbSleepStudy_LpePowerSettingCallback: Duplicate LPE event.\r\n");
  }
  else
  {
    gIsWithinLpe = v6;
    if ( &gDevicesListHead != (__int64 *)gDevicesListHead )
    {
      do
      {
        v5 = (__int64 *)*v5;
        if ( v6 )
        {
          DbgPrint("UsbSleepStudy_LpePowerSettingCallback: Entering LPE.\r\n");
          v8 = MEMORY[0xFFFFF78000000008];
          v5[3] = MEMORY[0xFFFFF78000000008];
          DbgPrint("UsbSleepStudy_LpePowerSettingCallback: Context %#p BlockerStartTime %llu\r\n", v5, v8);
        }
        else
        {
          DbgPrint("UsbSleepStudy_LpePowerSettingCallback: Exiting LPE.\r\n");
          if ( *((_BYTE *)v5 + 17) )
          {
            v9 = MEMORY[0xFFFFF78000000008];
            v10 = v5[3];
            v11 = MEMORY[0xFFFFF78000000008] - v10;
            v5[4] += MEMORY[0xFFFFF78000000008] - v10;
            DbgPrint(
              "UsbSleepStudy_LpePowerSettingCallback: Context %#p currentTime %llu BlockerStartTime %llu\r\n",
              v5,
              v9,
              v10);
            DbgPrint(
              "UsbSleepStudy_LpePowerSettingCallback: Context %#p timeSinceLastStateChange %llu BlockerTotalTime %llu\r\n",
              v5,
              v11,
              v5[4]);
          }
        }
      }
      while ( &gDevicesListHead != (__int64 *)*v5 );
    }
  }
  KeReleaseSpinLock(&gDevicesListSpinLock, v7);
  DbgPrint("UsbSleepStudy_LpePowerSettingCallback: Exit\r\n");
  return 0LL;
}
