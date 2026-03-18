/*
 * XREFs of UsbhEtwWrite @ 0x1C001B750
 * Callers:
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002320 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhHubProcessIsr @ 0x1C00127E0 (UsbhHubProcessIsr.c)
 *     UsbhQueryBusRelations @ 0x1C00158F0 (UsbhQueryBusRelations.c)
 *     UsbhEtwLogHubInformation @ 0x1C0019A0C (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0019B00 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C0019C30 (UsbhDmTimerDpc.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogPortInformation @ 0x1C001AEB0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C001BF04 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C001C020 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001C128 (UsbhEtwLogDeviceDescription.c)
 *     UsbhFdoPower_WaitWake @ 0x1C001C3D0 (UsbhFdoPower_WaitWake.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C001E054 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C00574A0 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005758C (UsbhEtwLogHubException.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

NTSTATUS UsbhEtwWrite(PCEVENT_DESCRIPTOR EventDescriptor, LPCGUID ActivityId, unsigned __int64 a3, ...)
{
  ULONG v5; // r9d
  va_list v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+30h] [rbp-C8h] BYREF
  va_list va; // [rsp+118h] [rbp+20h] BYREF

  va_start(va, a3);
  memset(UserData, 0, sizeof(UserData));
  v5 = 0;
  va_copy(v6, va);
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)v6;
      if ( !*(_DWORD *)v6 )
        break;
      if ( v5 >= 0xA )
        break;
      v8 = v5++;
      v8 *= 2LL;
      *(&UserData[0].Ptr + v8) = a3;
      *(&UserData[0].Size + 2 * v8) = v7;
      *(&UserData[0].Reserved + 2 * v8) = 0;
      a3 = *((_QWORD *)v6 + 1);
      if ( !a3 )
        break;
      v6 += 16;
    }
  }
  return EtwWrite(RegHandle, EventDescriptor, ActivityId, v5, UserData);
}
