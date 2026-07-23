/*
 * XREFs of TtmNotifyDeviceDeparture @ 0x140676E00
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmiAcquireCurrentSession @ 0x140547078 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x1406774F0 (TtmpFindDeviceByToken.c)
 *     TtmiScheduleSessionWorker @ 0x140678DEC (TtmiScheduleSessionWorker.c)
 */

__int64 __fastcall TtmNotifyDeviceDeparture(unsigned int a1, __int64 a2)
{
  char DeviceByToken; // bl
  int v5; // eax
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  DeviceByToken = 0;
  v5 = TtmiAcquireCurrentSession((__int64)&v13);
  if ( v5 >= 0 )
  {
    DeviceByToken = TtmpFindDeviceByToken(v13, a1, a2, &v14);
    if ( DeviceByToken )
    {
      v7 = *(_DWORD *)(v14 + 600);
      if ( (v7 & 4) == 0 )
      {
        v8 = v13;
        *(_DWORD *)(v14 + 600) = v7 | 4;
        TtmiScheduleSessionWorker(v8, 1LL);
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  }
  else
  {
    TtmiLogError("TtmNotifyDeviceDeparture", 602, v5, v5);
  }
  LOBYTE(v6) = DeviceByToken;
  return TtmiLogDeviceDepartureNotified(a1, a2, v6);
}
