/*
 * XREFs of DitClose @ 0x1C01DF8B4
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F1FE0 (UserProcessDwmInput.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0155600 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 * Callees:
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DD854 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 */

__int64 DitClose()
{
  __int64 v0; // rcx
  __int64 i; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterCrit(1LL);
  EnterDeviceInfoListCrit_(v0);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(i + 96) & 0x10) != 0 )
    {
      CloseDevice((struct DEVICEINFO *)i);
      *(_DWORD *)(i + 96) &= 0xFFFFFFEB;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v2);
  UserSessionSwitchLeaveCrit(v4, v3);
  return 1LL;
}
