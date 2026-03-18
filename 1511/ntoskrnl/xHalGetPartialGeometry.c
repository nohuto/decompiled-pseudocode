/*
 * XREFs of xHalGetPartialGeometry @ 0x1401AE034
 * Callers:
 *     IoWritePartitionTable @ 0x1405F5BF8 (IoWritePartitionTable.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140073DD0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

int __fastcall xHalGetPartialGeometry(PDEVICE_OBJECT DeviceObject, ULONG *a2)
{
  IRP *v4; // rax
  struct _KEVENT Object; // [rsp+58h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK v7; // [rsp+70h] [rbp+1Fh] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp+2Fh] BYREF

  *a2 = 0;
  Object.Header.SignalState = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  LOWORD(Object.Header.Lock) = 0;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  Object.Header.Size = 6;
  v4 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, &Timeout, 0x18u, 0, &Object, &v7);
  if ( v4 )
  {
    LODWORD(v4) = IofCallDriver(DeviceObject, v4);
    if ( (_DWORD)v4 == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LODWORD(v4) = v7.Status;
    }
    if ( (int)v4 >= 0 )
    {
      LODWORD(v4) = Timeout.LowPart;
      *a2 = Timeout.LowPart;
    }
  }
  return (int)v4;
}
