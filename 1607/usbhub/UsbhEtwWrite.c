/*
 * XREFs of UsbhEtwWrite @ 0x1C001D860
 * Callers:
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002520 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhHubProcessIsr @ 0x1C0013B50 (UsbhHubProcessIsr.c)
 *     UsbhQueryBusRelations @ 0x1C0017A30 (UsbhQueryBusRelations.c)
 *     UsbhEtwLogHubInformation @ 0x1C001BAA8 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001BBA0 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C001BD40 (UsbhDmTimerDpc.c)
 *     UsbhDisableTimerObject @ 0x1C001C6C0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001C9F0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwLogPortInformation @ 0x1C001D1D0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C001DC1C (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001DD90 (UsbhEtwLogDeviceDescription.c)
 *     UsbhFdoPower_WaitWake @ 0x1C001DF80 (UsbhFdoPower_WaitWake.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C001E330 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C001E6C8 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C0057BD4 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C0057CC0 (UsbhEtwLogHubException.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

NTSTATUS UsbhEtwWrite(PCEVENT_DESCRIPTOR EventDescriptor, LPCGUID ActivityId, unsigned __int64 a3, ...)
{
  va_list v5; // rcx
  ULONG v6; // r9d
  unsigned __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+30h] [rbp-C8h] BYREF
  va_list va; // [rsp+118h] [rbp+20h] BYREF

  va_start(va, a3);
  memset(UserData, 0, sizeof(UserData));
  va_copy(v5, va);
  v6 = 0;
  v7 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v5;
      if ( !*(_DWORD *)v5 )
        break;
      if ( v6 >= 0xA )
        break;
      v9 = v6++;
      v9 *= 2LL;
      *(&UserData[0].Ptr + v9) = v7;
      *(&UserData[0].Size + 2 * v9) = v8;
      *(&UserData[0].Reserved + 2 * v9) = 0;
      v7 = *((_QWORD *)v5 + 1);
      if ( !v7 )
        break;
      v5 += 16;
    }
  }
  return EtwWrite(RegHandle, EventDescriptor, ActivityId, v6, UserData);
}
