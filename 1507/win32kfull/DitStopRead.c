/*
 * XREFs of DitStopRead @ 0x1C01DFA00
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F1FE0 (UserProcessDwmInput.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0155600 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 * Callees:
 *     ?StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE2A0 (-StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z.c)
 */

__int64 DitStopRead()
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
    if ( (*(_DWORD *)(i + 96) & 0x40) != 0 )
    {
      StopDeviceRead((struct DEVICEINFO *)i);
      *(_DWORD *)(i + 96) &= ~0x40u;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v2);
  UserSessionSwitchLeaveCrit(v4, v3);
  return 1LL;
}
