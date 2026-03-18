/*
 * XREFs of UsbhFdoPower_WaitWake @ 0x1C000A640
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwGetHubInfo @ 0x1C000BDE0 (UsbhEtwGetHubInfo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhFdoPower_WaitWake(PDEVICE_OBJECT DeviceObject, IRP *Tag)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  const GUID *v6; // rdx
  NTSTATUS v7; // eax
  unsigned int v8; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v10; // rcx
  _IO_STACK_LOCATION *v12; // rax
  _BYTE v13[16]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v14[40]; // [rsp+98h] [rbp-60h] BYREF

  Log((_DWORD)DeviceObject, 16, 1716999979, 0, (__int64)Tag);
  v4 = FdoExt(DeviceObject);
  if ( dword_1C0067650 )
  {
    v5 = FdoExt(DeviceObject);
    UsbhEtwGetHubInfo(v5, v14);
    if ( Tag && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(Tag, v13) >= 0 )
      v6 = (const GUID *)v13;
    else
      v6 = 0LL;
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_WAIT_WAKE_DISPATCH, v6);
  }
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 1224), Tag, &File, 1u, 0x20u);
  v8 = v7;
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Tag->IoStatus.Status = v7;
    Log((_DWORD)DeviceObject, 16, 1717000050, v7, (__int64)Tag);
    UsbhEtwLogHubIrpEvent(DeviceObject, Tag, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, 0, v8);
    IofCompleteRequest(Tag, 0);
    return v8;
  }
  else
  {
    *(_QWORD *)(v4 + 4888) = Tag;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4884), 4, 2) == 3 )
    {
      *(_DWORD *)(v4 + 4884) = 7;
      Log((_DWORD)DeviceObject, 16, 1716999985, 0, (__int64)Tag);
      UsbhEtwLogHubIrpEvent(DeviceObject, Tag, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, 0, -1073741536);
      Tag->IoStatus.Status = -1073741536;
      IofCompleteRequest(Tag, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 1224), Tag, 0x20u);
      return 3221225760LL;
    }
    else
    {
      Tag->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      CurrentStackLocation = Tag->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                             + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      if ( IoSetCompletionRoutineEx(DeviceObject, Tag, UsbhFdoWaitWake_IoCompletion, 0LL, 1u, 1u, 1u) < 0 )
      {
        v12 = Tag->Tail.Overlay.CurrentStackLocation;
        v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoWaitWake_IoCompletion;
        v12[-1].Context = 0LL;
        v12[-1].Control = -32;
      }
      Log((_DWORD)DeviceObject, 16, 1716999986, 0, (__int64)Tag);
      v10 = *(struct _DEVICE_OBJECT **)(v4 + 1208);
      *(_DWORD *)(v4 + 2560) &= ~0x20000u;
      PoCallDriver(v10, Tag);
      return 259LL;
    }
  }
}
