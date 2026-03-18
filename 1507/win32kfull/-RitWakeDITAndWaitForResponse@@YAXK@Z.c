/*
 * XREFs of ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01DE20C
 * Callers:
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DD854 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DDDDC (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     ?StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE2A0 (-StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z.c)
 *     StartDeviceRead @ 0x1C01E0354 (StartDeviceRead.c)
 * Callees:
 *     WakeDIT @ 0x1C0007B04 (WakeDIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RitWakeDITAndWaitForResponse(unsigned int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  gbRITBlockedOnDIT = 1;
  if ( (unsigned int)WakeDIT(a1) )
  {
    LeaveDeviceInfoListCrit_(v1);
    UserSessionSwitchLeaveCrit(v3, v2);
    KeWaitForSingleObject(gpkeDITResponseEvent, UserRequest, 0, 0, 0LL);
    EnterCrit(1LL);
    EnterDeviceInfoListCrit_(v4);
  }
  gbRITBlockedOnDIT = 0;
}
