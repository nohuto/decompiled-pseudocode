/*
 * XREFs of ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01D5F4C
 * Callers:
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D5768 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01D5C1C (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     DitStopRead @ 0x1C01D6A50 (DitStopRead.c)
 *     StartDeviceRead @ 0x1C01D6BC0 (StartDeviceRead.c)
 * Callees:
 *     WakeDIT @ 0x1C00E1684 (WakeDIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RitWakeDITAndWaitForResponse(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  gbRITBlockedOnDIT = 1;
  if ( (unsigned int)WakeDIT(a1) )
  {
    LeaveDeviceInfoListCrit_(v2, v1);
    UserSessionSwitchLeaveCrit(v4, v3);
    KeWaitForSingleObject(gpkeDITResponseEvent, UserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
    EnterDeviceInfoListCrit_(v5);
  }
  gbRITBlockedOnDIT = 0;
}
