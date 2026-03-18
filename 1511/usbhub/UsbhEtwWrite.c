/*
 * XREFs of UsbhEtwWrite @ 0x1C000F240
 * Callers:
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002320 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C00096A0 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhFdoPower_WaitWake @ 0x1C000A640 (UsbhFdoPower_WaitWake.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C000B4F0 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C000B5F4 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C000B6FC (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogHubInformation @ 0x1C000BE7C (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000D190 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C000D720 (UsbhDmTimerDpc.c)
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogPortInformation @ 0x1C000E9A0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhQueryBusRelations @ 0x1C0012300 (UsbhQueryBusRelations.c)
 *     UsbhHubProcessIsr @ 0x1C0012AD0 (UsbhHubProcessIsr.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C0057610 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C00576FC (UsbhEtwLogHubException.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     memset @ 0x1C0029180 (memset.c)
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
