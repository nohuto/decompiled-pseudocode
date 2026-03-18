/*
 * XREFs of IopFreeBandwidthContract @ 0x140679EEC
 * Callers:
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpMustSucceed @ 0x1400480B0 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  bool v4; // di
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v6; // rdx
  __int64 MustSucceed; // rax
  IRP *v8; // rbx
  __int64 v9; // rax
  struct _KEVENT *p_Event; // rcx
  _DWORD v11[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-10h]

  v11[0] = 0;
  result = 0LL;
  v11[1] = 0;
  v12 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = (Object->Flags & 2) != 0;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (Object->Flags & 0x4000000) == 0 )
        KeResetEvent(&Object->Event);
      v15[0] = 0LL;
      v15[1] = 0LL;
      v16 = 0;
      RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
      LOBYTE(v6) = RelatedDeviceObject->StackSize;
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, v6);
      v8 = (IRP *)MustSucceed;
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
      *(_QWORD *)(MustSucceed + 72) = v11;
      v9 = *(_QWORD *)(MustSucceed + 184);
      *(_BYTE *)(v9 - 72) = 6;
      *(_QWORD *)(v9 - 24) = Object;
      *(_DWORD *)(v9 - 64) = 20;
      *(_DWORD *)(v9 - 56) = 44;
      v8->UserBuffer = 0LL;
      v8->MdlAddress = 0LL;
      v8->AssociatedIrp.MasterIrp = (struct _IRP *)v15;
      ObfReferenceObject(Object);
      IopQueueThreadIrp((__int64)v8);
      if ( IofCallDriver(RelatedDeviceObject, v8) == 259 )
      {
        p_Event = &Object->Event;
        if ( !v4 )
          p_Event = &Event;
        KeWaitForSingleObject(p_Event, Executive, 0, 0, 0LL);
      }
      result = v11[0];
      if ( v11[0] != -1073741670 && v11[0] != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
