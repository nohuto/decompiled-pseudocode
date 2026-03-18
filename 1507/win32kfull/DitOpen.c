/*
 * XREFs of DitOpen @ 0x1C01DF91C
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F1FE0 (UserProcessDwmInput.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0155600 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 * Callees:
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DDDDC (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     SetupIoCompletion @ 0x1C01E02FC (SetupIoCompletion.c)
 */

__int64 DitOpen()
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
    if ( (*(_DWORD *)(i + 96) & 8) != 0 )
    {
      if ( (unsigned int)OpenDevice((struct DEVICEINFO *)i) && (unsigned int)SetupIoCompletion(i) )
        *(_DWORD *)(i + 96) |= 4u;
      *(_DWORD *)(i + 96) &= ~8u;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v2);
  UserSessionSwitchLeaveCrit(v4, v3);
  return 0LL;
}
