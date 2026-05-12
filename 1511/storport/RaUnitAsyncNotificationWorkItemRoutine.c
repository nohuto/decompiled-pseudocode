/*
 * XREFs of RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0031A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C002786C (WPP_SF_q.c)
 */

void __fastcall RaUnitAsyncNotificationWorkItemRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  __int64 v5; // rax
  IRP *v6; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp+17h] BYREF
  int InputBuffer; // [rsp+78h] [rbp+2Fh] BYREF
  int v10; // [rsp+7Ch] [rbp+33h]
  __int64 v11; // [rsp+80h] [rbp+37h]

  v2 = *((_QWORD *)Context + 1);
  InputBuffer = 0;
  v10 = 0;
  v11 = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  _InterlockedExchange((volatile __int32 *)Context + 4, 0);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  if ( AttachedDeviceReference )
  {
    InputBuffer = 1;
    v10 = 16;
    if ( v2 )
    {
      v5 = v11;
      if ( (v2 & 1) != 0 )
      {
        v5 = v11 | 1;
        v11 |= 1uLL;
      }
      if ( (v2 & 2) != 0 )
      {
        v5 |= 2uLL;
        v11 = v5;
      }
      if ( (v2 & 4) != 0 )
        v11 = v5 | 4;
    }
    else
    {
      v11 = 7LL;
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
        0x49u,
        (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
        DeviceObject);
    }
    ObfDereferenceObject(AttachedDeviceReference);
  }
}
