/*
 * XREFs of Etw_StartDeviceFail @ 0x1C0032F0C
 * Callers:
 *     Register_BiosHandoff @ 0x1C0003A68 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0003B40 (Register_ControllerReset.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Template_pqzr1q @ 0x1C00335C0 (Template_pqzr1q.c)
 */

__int64 __fastcall Etw_StartDeviceFail(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  struct _DEVICE_OBJECT *v6; // rax
  int v7; // edx
  int v8; // r8d
  unsigned __int16 Length; // cx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[512]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *a1;
  DestinationString.Buffer = (unsigned __int16 *)v13;
  *(_DWORD *)&DestinationString.Length = 33423360;
  v6 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 264))(
                                  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                                  v3);
  if ( IoGetDeviceProperty(v6, DevicePropertyDeviceDescription, 0x1FCu, v13, ResultLength) < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"USB eXtensible Host Controller");
    Length = DestinationString.Length;
  }
  else
  {
    Length = LOWORD(ResultLength[0]) - 2;
    DestinationString.Length = LOWORD(ResultLength[0]) - 2;
  }
  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 4) != 0 )
    return Template_pqzr1q(
             ((unsigned __int64)Length + 2) >> 1,
             v7,
             v8,
             a1[1],
             ((unsigned __int64)Length + 2) >> 1,
             (__int64)DestinationString.Buffer,
             a3);
  return result;
}
