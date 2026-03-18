/*
 * XREFs of UsbhFdoPower_WaitWake @ 0x1C001C3D0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEtwGetHubInfo @ 0x1C0019020 (UsbhEtwGetHubInfo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhFdoPower_WaitWake(PDEVICE_OBJECT DeviceObject, IRP *Tag)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  int v12; // ecx
  const GUID *v13; // rdx
  NTSTATUS v14; // eax
  unsigned int v15; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v17; // rcx
  _IO_STACK_LOCATION *v19; // rax
  int v20; // [rsp+60h] [rbp-98h] BYREF
  _DWORD v21[4]; // [rsp+68h] [rbp-90h] BYREF
  int v22; // [rsp+78h] [rbp-80h] BYREF
  __int16 v23; // [rsp+7Ch] [rbp-7Ch]
  __int16 v24; // [rsp+7Eh] [rbp-7Ah]
  __int16 v25; // [rsp+80h] [rbp-78h]
  __int16 v26; // [rsp+82h] [rbp-76h]
  _BYTE v27[16]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v28[40]; // [rsp+98h] [rbp-60h] BYREF

  Log((__int64)DeviceObject, 16, 1716999979, 0LL, (__int64)Tag);
  v8 = FdoExt((__int64)DeviceObject, v4, v5, v6);
  v20 = 0;
  v21[0] = 0;
  if ( dword_1C0066650 )
  {
    v11 = FdoExt((__int64)DeviceObject, v7, v9, v10);
    v22 = v11[1298];
    v23 = *((_WORD *)v11 + 2598);
    v12 = v11[1300];
    v24 = v12;
    v21[2] = v12;
    v25 = *((_WORD *)v11 + 2614);
    v26 = *((_WORD *)v11 + 2615);
    UsbhEtwGetHubInfo((__int64)v11, (__int64)v28);
    if ( Tag && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(Tag, v27) >= 0 )
      v13 = (const GUID *)v27;
    else
      v13 = 0LL;
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_DISPATCH,
      v13,
      (unsigned __int64)&v22,
      12LL,
      v28,
      36LL,
      v21,
      4LL,
      &v20,
      4LL,
      0LL);
  }
  v14 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Tag, &File, 1u, 0x20u);
  v15 = v14;
  if ( (v14 & 0xC0000000) == 0xC0000000 )
  {
    Tag->IoStatus.Status = v14;
    Log((__int64)DeviceObject, 16, 1717000050, v14, (__int64)Tag);
    UsbhEtwLogHubIrpEvent((__int64)DeviceObject, (__int64)Tag, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE);
    IofCompleteRequest(Tag, 0);
    return v15;
  }
  else
  {
    *((_QWORD *)v8 + 611) = Tag;
    if ( _InterlockedCompareExchange(v8 + 1221, 4, 2) == 3 )
    {
      v8[1221] = 7;
      Log((__int64)DeviceObject, 16, 1716999985, 0LL, (__int64)Tag);
      UsbhEtwLogHubIrpEvent((__int64)DeviceObject, (__int64)Tag, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE);
      Tag->IoStatus.Status = -1073741536;
      IofCompleteRequest(Tag, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Tag, 0x20u);
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
        v19 = Tag->Tail.Overlay.CurrentStackLocation;
        v19[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoWaitWake_IoCompletion;
        v19[-1].Context = 0LL;
        v19[-1].Control = -32;
      }
      Log((__int64)DeviceObject, 16, 1716999986, 0LL, (__int64)Tag);
      v17 = (struct _DEVICE_OBJECT *)*((_QWORD *)v8 + 151);
      v8[640] &= ~0x20000u;
      PoCallDriver(v17, Tag);
      return 259LL;
    }
  }
}
