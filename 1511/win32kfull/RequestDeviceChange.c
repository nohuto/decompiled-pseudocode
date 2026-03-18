/*
 * XREFs of RequestDeviceChange @ 0x1C01E0784
 * Callers:
 *     NlsKbdSendIMENotification @ 0x1C0085B00 (NlsKbdSendIMENotification.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C0089F88 (-HidDeviceStartStop@@YAXXZ.c)
 *     RemoveInputDevices @ 0x1C009A070 (RemoveInputDevices.c)
 *     ProcessMouseInput @ 0x1C01DA5F0 (ProcessMouseInput.c)
 *     CreateDeviceInfo @ 0x1C01DEF4C (CreateDeviceInfo.c)
 *     DeviceNotify @ 0x1C01DFD90 (DeviceNotify.c)
 * Callees:
 *     ?RequestDeviceChangeHelper@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE788 (-RequestDeviceChangeHelper@@YAPEAUDEVICEINFO@@PEAU1@@Z.c)
 *     ?SetDeviceEvent@@YAHPEAUtagDEVICE_TEMPLATE@@@Z @ 0x1C01DE874 (-SetDeviceEvent@@YAHPEAUtagDEVICE_TEMPLATE@@@Z.c)
 */

struct DEVICEINFO *__fastcall RequestDeviceChange(struct DEVICEINFO *a1, __int16 a2, int a3)
{
  unsigned __int8 v3; // al
  struct DEVICEINFO *v6; // rdi
  struct tagDEVICE_TEMPLATE *v7; // rbx
  __int64 v8; // rcx
  int IsResourceAcquiredExclusiveLite; // esi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v3 = *((_BYTE *)a1 + 48);
  v6 = a1;
  if ( v3 == 3 )
    v7 = (struct tagDEVICE_TEMPLATE *)&aDeviceTemplate[142];
  else
    v7 = (struct tagDEVICE_TEMPLATE *)&aDeviceTemplate[71 * v3];
  if ( !a3 )
    EnterDeviceInfoListCrit_(a1);
  *((_WORD *)v6 + 33) |= a2;
  v8 = *((unsigned __int16 *)v6 + 33);
  if ( (v8 & 0x1800) == 0x1800 )
  {
    LOWORD(v8) = v8 & 0xE7FF;
    *((_WORD *)v6 + 33) = v8;
  }
  if ( !a3 )
    LeaveDeviceInfoListCrit_(v8);
  if ( (a2 & 0x100) != 0 )
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
    *((_QWORD *)v6 + 39) = KeGetCurrentThread();
    v10 = SetDeviceEvent(v7);
    LeaveDeviceInfoListCrit_(v11);
    if ( v10 )
    {
      if ( IsResourceAcquiredExclusiveLite )
      {
        UserSessionSwitchLeaveCrit(v13, v12);
        KeWaitForSingleObject(*((PVOID *)v6 + 9), WrUserRequest, 0, 0, 0LL);
        EnterCrit(0LL, 1LL);
      }
      else
      {
        KeWaitForSingleObject(*((PVOID *)v6 + 9), WrUserRequest, 0, 0, 0LL);
      }
    }
    if ( *((char *)v6 + 66) >= 0 || ExIsResourceAcquiredExclusiveLite(gpresUser) )
    {
      return RequestDeviceChangeHelper(v6);
    }
    else
    {
      EnterCrit(0LL, 1LL);
      v6 = RequestDeviceChangeHelper(v6);
      LeaveDeviceInfoListCrit_(v14);
      UserSessionSwitchLeaveCrit(v16, v15);
      EnterDeviceInfoListCrit_(v17);
    }
  }
  else
  {
    *((_QWORD *)v6 + 39) = 0LL;
    SetDeviceEvent(v7);
  }
  return v6;
}
