/*
 * XREFs of IopFreeBandwidthContract @ 0x1405FF3C8
 * Callers:
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpMustSucceed @ 0x140043AC0 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v8; // rdx
  __int64 MustSucceed; // rax
  IRP *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KEVENT *p_Event; // rcx
  _DWORD v15[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h]
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-20h] BYREF
  int v20; // [rsp+70h] [rbp-10h]

  v15[0] = 0;
  result = 0LL;
  v15[1] = 0;
  v16 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = (Object->Flags & 2) != 0;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)Object, v5, v6);
      v19[0] = 0LL;
      v19[1] = 0LL;
      v20 = 0;
      RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
      LOBYTE(v8) = RelatedDeviceObject->StackSize;
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, v8);
      v10 = (IRP *)MustSucceed;
      *(_QWORD *)(MustSucceed + 192) = Object;
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      *(_BYTE *)(MustSucceed + 64) = 0;
      if ( v4 )
      {
        *(_QWORD *)(MustSucceed + 80) = 0LL;
      }
      else
      {
        *(_DWORD *)(MustSucceed + 16) = 4;
        *(_QWORD *)(MustSucceed + 80) = &Event;
      }
      *(_QWORD *)(MustSucceed + 88) = 0LL;
      *(_QWORD *)(MustSucceed + 72) = v15;
      v11 = *(_QWORD *)(MustSucceed + 184);
      *(_BYTE *)(v11 - 72) = 6;
      *(_QWORD *)(v11 - 24) = Object;
      *(_DWORD *)(v11 - 64) = 20;
      *(_DWORD *)(v11 - 56) = 44;
      v10->UserBuffer = 0LL;
      v10->MdlAddress = 0LL;
      v10->AssociatedIrp.MasterIrp = (struct _IRP *)v19;
      ObfReferenceObject(Object);
      IopQueueThreadIrp((__int64)v10, v12, v13);
      if ( IofCallDriver(RelatedDeviceObject, v10) == 259 )
      {
        p_Event = &Object->Event;
        if ( !v4 )
          p_Event = &Event;
        KeWaitForSingleObject(p_Event, Executive, 0, 0, 0LL);
      }
      result = v15[0];
      if ( v15[0] != -1073741670 && v15[0] != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
