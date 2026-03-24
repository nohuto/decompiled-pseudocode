/*
 * XREFs of MouseStart @ 0x1C00025B0
 * Callers:
 *     MousePnP @ 0x1C00013E0 (MousePnP.c)
 *     MouseStartWorker @ 0x1C0002540 (MouseStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00029E0 (__security_check_cookie.c)
 *     MouEnableDisablePort @ 0x1C000B000 (MouEnableDisablePort.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000BCF4 (MouseClassCreateWaitWakeIrp.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000BD40 (MouseClassGetWaitWakeEnableState.c)
 *     MouseSendIrpSynchronously @ 0x1C000BF80 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MouseStart(__int64 a1, __int64 a2)
{
  IRP *v2; // rdi
  int *v3; // rbx
  int Status; // esi
  NTSTATUS v5; // ebp
  ULONG_PTR Information; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  KIRQL v9; // al
  bool v10; // di
  KIRQL v11; // al
  char v12; // di
  char v14; // di
  char *v15; // rsi
  __int64 v16; // rcx
  _DWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-70h]
  __int128 v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]

  v2 = *(IRP **)(a2 + 8);
  v3 = *(int **)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status < 0 )
    return (unsigned int)Status;
  v2->IoStatus.Status = -1073741637;
  v5 = 0;
  Information = v2->IoStatus.Information;
  v2->IoStatus.Information = 0LL;
  v17[1] = 0;
  v19 = 0uLL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v17[0] = 65600;
  v18 = -1LL;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v17;
  if ( (int)MouseSendIrpSynchronously(*((PDEVICE_OBJECT *)v3 + 2), v2) >= 0 && v2->IoStatus.Status >= 0 )
  {
    v3[67] = v22;
    v3[68] = HIDWORD(v21);
    *(_OWORD *)(v3 + 62) = v19;
    v3[66] = v20;
  }
  v2->IoStatus.Information = Information;
  v2->IoStatus.Status = Status;
  *((_BYTE *)v3 + 65) = 1;
  if ( v3[67] <= 1 || v3[68] <= 1 )
  {
    v3[46] = 1;
  }
  else
  {
    v3[46] = 2;
    MouseClassGetWaitWakeEnableState(v3);
  }
  v8 = *(struct _DEVICE_OBJECT **)v3;
  *((_QWORD *)v3 + 24) = &MouseClassWmiGuidList;
  *((_QWORD *)v3 + 29) = 0LL;
  *((_QWORD *)v3 + 25) = MouseClassQueryWmiRegInfo;
  *((_QWORD *)v3 + 26) = MouseClassQueryWmiDataBlock;
  *((_QWORD *)v3 + 27) = MouseClassSetWmiDataBlock;
  *((_QWORD *)v3 + 28) = MouseClassSetWmiDataItem;
  *((_QWORD *)v3 + 30) = 0LL;
  IoWMIRegistrationControl(v8, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    }
    else
    {
      v14 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[45] + 16);
      v15 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[45];
      v15[16] = 1;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v14 )
      {
        LOBYTE(v16) = 1;
        v5 = MouEnableDisablePort(v16, 0LL, v3, v15);
        if ( v5 < 0 )
          v15[16] = 0;
      }
    }
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 22), 1u);
  }
  if ( v3[67] > 1 && v3[68] > 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 9);
    v10 = *((_QWORD *)v3 + 35) && !*((_BYTE *)v3 + 288);
    KeReleaseSpinLock((PKSPIN_LOCK)v3 + 9, v9);
    if ( !v10 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 9);
      v12 = *((_BYTE *)v3 + 345);
      KeReleaseSpinLock((PKSPIN_LOCK)v3 + 9, v11);
      if ( v12 )
        MouseClassCreateWaitWakeIrp(v3);
    }
  }
  return (unsigned int)v5;
}
