/*
 * XREFs of DitClose @ 0x1C01D68C0
 * Callers:
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0119964 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 * Callees:
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D5768 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 */

__int64 DitClose()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterCrit(0LL, 1LL);
  EnterDeviceInfoListCrit_(v0);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(i + 96) & 0x10) != 0 )
    {
      CloseDevice((struct DEVICEINFO *)i, v1, v2, v3);
      *(_DWORD *)(i + 96) &= 0xFFFFFFEB;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v6, v5);
  UserSessionSwitchLeaveCrit(v8, v7);
  return 1LL;
}
