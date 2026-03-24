/*
 * XREFs of KeyboardAddDeviceEx @ 0x1C000C540
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000C000 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDevice @ 0x1C000C2B0 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C000F020 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00019A0 (WPP_RECORDER_SF_S.c)
 *     memmove @ 0x1C0002EC0 (memmove.c)
 *     memset @ 0x1C0003200 (memset.c)
 *     KeyboardClassLogError @ 0x1C0004954 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005388 (WPP_RECORDER_SF_.c)
 *     KbdSendConnectRequest @ 0x1C000E4CC (KbdSendConnectRequest.c)
 */

__int64 __fastcall KeyboardAddDeviceEx(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS Status; // edi
  __int64 v7; // rdx
  __int64 v8; // rsi
  struct _DEVICE_OBJECT *v9; // rdx
  IRP *v10; // rax
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  int v13; // edx
  int v14; // r8d
  int DeviceContext; // eax
  unsigned int v17; // r15d
  PVOID PoolWithTag; // r12
  int v19; // eax
  __int64 v20; // rcx
  char v21; // al
  int OutputBuffer; // [rsp+20h] [rbp-A8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-78h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-58h] BYREF

  Status = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v8 = a1;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)v8;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == a1 )
    goto LABEL_14;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels != v8 )
  {
    if ( a1 != v8 )
      return (unsigned int)Status;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v7, 3LL);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v9 = *(struct _DEVICE_OBJECT **)(a1 + 16);
    InputBuffer[0] = *(_QWORD *)(a1 + 8);
    InputBuffer[1] = KeyboardClassServiceCallback;
    v10 = IoBuildDeviceIoControlRequest(0xB0203u, v9, InputBuffer, 0x10u, 0LL, 0, 1u, &Event, &IoStatusBlock);
    if ( v10 )
    {
      v12 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 16), v10);
      if ( v12 == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      else
        IoStatusBlock.Status = v12;
    }
    else
    {
      IoStatusBlock.Status = -1073741670;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v11, 3LL);
    }
    Status = IoStatusBlock.Status;
LABEL_14:
    if ( a1 == v8 )
    {
      Status = RtlWriteRegistryValue(4u, DestinationString.Buffer, a2, 1u, P, (unsigned __int16)word_1C0009288 + 2);
      if ( Status < 0 )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 15, OutputBuffer, (__int64)a2);
        KeyboardClassLogError((void *)a1, -2147155963, 10014, Status, 0, 0LL, 0);
      }
      else
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 16, OutputBuffer, (__int64)a2);
      }
    }
    return (unsigned int)Status;
  }
  Status = KbdSendConnectRequest(a1);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  DeviceContext = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  v17 = 0;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v17 + 19) )
    {
      if ( ++v17 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_23;
    }
    *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v17 + 19) = 0;
    DeviceContext = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  }
LABEL_23:
  if ( v17 != DeviceContext )
  {
LABEL_29:
    *(_DWORD *)(a1 + 196) = v17;
    v20 = 3LL * v17;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v20 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v20) = a3;
    v21 = *(_BYTE *)(*(_QWORD *)a1 + 76LL);
    if ( *(char *)(*(_QWORD *)v8 + 76LL) >= v21 )
      v21 = *(_BYTE *)(*(_QWORD *)v8 + 76LL);
    *(_BYTE *)(*(_QWORD *)v8 + 76LL) = v21;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_14;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * (unsigned int)(DeviceContext + 1), 0x4364624Bu);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1));
    v19 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      memmove(PoolWithTag, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
      ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
      v19 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    }
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)PoolWithTag;
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = v19 + 1;
    goto LABEL_29;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  return 3221225626LL;
}
