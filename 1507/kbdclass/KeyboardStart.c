/*
 * XREFs of KeyboardStart @ 0x1C00023F0
 * Callers:
 *     KeyboardPnP @ 0x1C0001C50 (KeyboardPnP.c)
 *     KeyboardStartWorker @ 0x1C0002380 (KeyboardStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002910 (__security_check_cookie.c)
 *     KbdEnableDisablePort @ 0x1C000CE50 (KbdEnableDisablePort.c)
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C000CF90 (KeyboardClassCreateWaitWakeIrp.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000CFD0 (KeyboardClassGetWaitWakeEnableState.c)
 *     KeyboardSendIrpSynchronously @ 0x1C000D1E0 (KeyboardSendIrpSynchronously.c)
 */

__int64 __fastcall KeyboardStart(__int64 a1, __int64 a2)
{
  IRP *v2; // r14
  int *v3; // rbx
  int Status; // edi
  ULONG_PTR Information; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v7; // r15d
  struct _DEVICE_OBJECT *v8; // rcx
  KIRQL v9; // al
  bool v10; // di
  KIRQL v11; // al
  char v12; // di
  char v14; // di
  char *v15; // rsi
  struct _IO_STACK_LOCATION *v16; // rcx
  ULONG_PTR v17; // rbp
  struct _IRP *MasterIrp; // rdi
  NTSTATUS v19; // esi
  _DWORD v20[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int128 v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+58h] [rbp-40h]

  v2 = *(IRP **)(a2 + 8);
  v3 = *(int **)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status < 0 )
    return (unsigned int)Status;
  v2->IoStatus.Status = -1073741637;
  Information = v2->IoStatus.Information;
  v2->IoStatus.Information = 0LL;
  v20[1] = 0;
  v22 = 0uLL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v20[0] = 65600;
  v21 = -1LL;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v20;
  if ( (int)KeyboardSendIrpSynchronously(*((PDEVICE_OBJECT *)v3 + 2), v2) >= 0 && v2->IoStatus.Status >= 0 )
  {
    v3[71] = v25;
    v3[72] = HIDWORD(v24);
    *(_OWORD *)(v3 + 66) = v22;
    v3[70] = v23;
  }
  v2->IoStatus.Status = Status;
  v7 = 0;
  v2->IoStatus.Information = Information;
  *((_BYTE *)v3 + 65) = 1;
  if ( v3[71] <= 1 || v3[72] <= 1 )
  {
    v3[50] = 1;
  }
  else
  {
    v3[50] = 2;
    KeyboardClassGetWaitWakeEnableState(v3);
  }
  v8 = *(struct _DEVICE_OBJECT **)v3;
  *((_QWORD *)v3 + 26) = &KeyboardClassWmiGuidList;
  *((_QWORD *)v3 + 31) = 0LL;
  *((_QWORD *)v3 + 27) = KeyboardClassQueryWmiRegInfo;
  *((_QWORD *)v3 + 28) = KeyboardClassQueryWmiDataBlock;
  *((_QWORD *)v3 + 29) = KeyboardClassSetWmiDataBlock;
  *((_QWORD *)v3 + 30) = KeyboardClassSetWmiDataItem;
  *((_QWORD *)v3 + 32) = 0LL;
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
      v14 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[49] + 16);
      v15 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[49];
      v15[16] = 1;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v14 )
      {
        v7 = KbdEnableDisablePort(1LL, v2, v3, v15);
        if ( v7 >= 0 )
        {
          v16 = v2->Tail.Overlay.CurrentStackLocation;
          v16[-1].MajorFunction = 15;
          v16[-1].Parameters.Read.ByteOffset.LowPart = 720904;
          v16[-1].FileObject = *(PFILE_OBJECT *)v15;
          v16[-1].Parameters.Read.Length = 0;
          v16[-1].Parameters.Create.Options = 4;
          v17 = v2->IoStatus.Information;
          MasterIrp = v2->AssociatedIrp.MasterIrp;
          v19 = v2->IoStatus.Status;
          v2->IoStatus.Information = 0LL;
          v2->AssociatedIrp.MasterIrp = (struct _IRP *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL);
          KeyboardSendIrpSynchronously(*((PDEVICE_OBJECT *)v3 + 2), v2);
          v7 = 0;
          v2->IoStatus.Status = v19;
          v2->IoStatus.Information = v17;
          v2->AssociatedIrp.MasterIrp = MasterIrp;
        }
        else
        {
          v15[16] = 0;
        }
      }
    }
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v7 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 22), 1u);
  }
  if ( v3[71] > 1 && v3[72] > 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 9);
    v10 = *((_QWORD *)v3 + 37) && !*((_BYTE *)v3 + 304);
    KeReleaseSpinLock((PKSPIN_LOCK)v3 + 9, v9);
    if ( !v10 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 9);
      v12 = *((_BYTE *)v3 + 362);
      KeReleaseSpinLock((PKSPIN_LOCK)v3 + 9, v11);
      if ( v12 )
        KeyboardClassCreateWaitWakeIrp(v3);
    }
  }
  return (unsigned int)v7;
}
