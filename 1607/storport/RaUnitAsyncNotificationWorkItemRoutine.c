/*
 * XREFs of RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0034C10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C002AF28 (WPP_SF_q.c)
 */

void __fastcall RaUnitAsyncNotificationWorkItemRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  __int64 v5; // rax
  IRP *v6; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp+17h] BYREF
  __int128 InputBuffer; // [rsp+78h] [rbp+2Fh] BYREF

  v2 = *((_QWORD *)Context + 1);
  LODWORD(InputBuffer) = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset((char *)&InputBuffer + 4, 0, 12);
  _InterlockedExchange((volatile __int32 *)Context + 4, 0);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  if ( AttachedDeviceReference )
  {
    *(_QWORD *)&InputBuffer = 0x1000000001LL;
    if ( v2 )
    {
      v5 = *((_QWORD *)&InputBuffer + 1);
      if ( (v2 & 1) != 0 )
      {
        v5 = *((_QWORD *)&InputBuffer + 1) | 1LL;
        *((_QWORD *)&InputBuffer + 1) |= 1uLL;
      }
      if ( (v2 & 2) != 0 )
      {
        v5 |= 2uLL;
        *((_QWORD *)&InputBuffer + 1) = v5;
      }
      if ( (v2 & 4) != 0 )
        *((_QWORD *)&InputBuffer + 1) = v5 | 4;
    }
    else
    {
      *((_QWORD *)&InputBuffer + 1) = 7LL;
    }
    v6 = IoBuildDeviceIoControlRequest(
           0x2D1C90u,
           AttachedDeviceReference,
           &InputBuffer,
           0x10u,
           0LL,
           0,
           0,
           &Event,
           &IoStatusBlock);
    if ( v6 )
    {
      if ( IofCallDriver(AttachedDeviceReference, v6) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x4Eu,
        (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
        DeviceObject);
    }
    ObfDereferenceObject(AttachedDeviceReference);
  }
}
