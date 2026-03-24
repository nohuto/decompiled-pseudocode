/*
 * XREFs of DriverEntry @ 0x1C000E350
 * Callers:
 *     GsDriverEntry @ 0x1C000E000 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002310 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00029E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0002B00 (memmove.c)
 *     memset @ 0x1C0002E40 (memset.c)
 *     MouseClassLogError @ 0x1C0004504 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004F28 (WPP_RECORDER_SF_.c)
 *     MouseAddDeviceEx @ 0x1C000B420 (MouseAddDeviceEx.c)
 *     MouDeterminePortsServiced @ 0x1C000B670 (MouDeterminePortsServiced.c)
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 *     WppInitKm @ 0x1C000BB50 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000BBF0 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C000D1FC (WppCleanupKm.c)
 *     MouConfiguration @ 0x1C000E020 (MouConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  PVOID v2; // r14
  PVOID PoolWithTag; // rax
  __int64 v6; // r8
  WCHAR *v7; // rax
  unsigned int v8; // edi
  __int64 *v9; // rax
  NTSTATUS v10; // edi
  __int64 v12; // r8
  PVOID v13; // rdi
  const WCHAR *v14; // rdx
  _BYTE *DeviceExtension; // rcx
  __int64 v16; // r8
  PDEVICE_OBJECT *v17; // rcx
  int v18; // eax
  char *v19; // rsi
  void *v20; // rcx
  const WCHAR *v21; // rdx
  int v22; // r15d
  void *v23; // rcx
  __int64 **v24; // rax
  __int64 *v25; // rsi
  ULONG NumberOfMapRegisters; // ecx
  int v27; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  PDEVICE_OBJECT v29; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v34[512]; // [rsp+90h] [rbp-70h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v29 = 0LL;
  v2 = 0LL;
  P[0] = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MouClassTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 5u, 1u, 0xAu);
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x3F0uLL);
  qword_1C0008488 = (__int64)&qword_1C0008480;
  qword_1C0008480 = (__int64)&qword_1C0008480;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&::DestinationString.Length = 0x2000000;
  ::DestinationString.Buffer = (PWSTR)&unk_1C0008280;
  memset(v34, 0, sizeof(v34));
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)v34;
  word_1C0008260 = RegistryPath->Length;
  word_1C0008262 = RegistryPath->Length + 2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned __int16)word_1C0008262, 0x43756F4Du);
  ::P = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, 0xBu);
    v10 = -1073741823;
    LODWORD(P[0]) = RegistryPath->Length + 2;
    MouseClassLogError(DriverObject, -1073414143, 20002, -1073741823, 1u, P, 0);
    goto LABEL_13;
  }
  memmove(PoolWithTag, RegistryPath->Buffer, RegistryPath->Length);
  *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
  MouConfiguration();
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    v10 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v29, (PWSTR *)P, 1);
    if ( v10 < 0 )
    {
      WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v12, 0xCu, v27);
      v2 = P[0];
      goto LABEL_13;
    }
    v13 = P[0];
    v14 = (const WCHAR *)P[0];
    DeviceExtension = v29->DeviceExtension;
    *(_QWORD *)DeviceExtension = v29;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = DeviceExtension;
    DeviceExtension[64] = 0;
    if ( (int)MouseAddDeviceEx((__int64)DeviceExtension, v14, 0LL) < 0 )
      WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v16, 0xDu, v27);
    ExFreePoolWithTag(v13, 0);
    P[0] = 0LL;
    v29->Flags &= ~0x80u;
  }
  RtlCopyUnicodeString(&Destination, &::DestinationString);
  Destination.Length -= 10;
  RtlAppendUnicodeToString(&Destination, L"Port");
  if ( (int)MouDeterminePortsServiced(&Destination.Length, &v32) < 0 )
    WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v6, 0xEu, v27);
  if ( Destination.MaximumLength < (unsigned __int64)Destination.Length + 2 )
  {
    v10 = -1073741823;
  }
  else
  {
    Destination.Buffer[((unsigned __int64)Destination.Length >> 1) + 1] = 0;
    WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v6, 0xFu, v27);
    DestinationString.MaximumLength = Destination.Length + 24;
    v7 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(Destination.Length + 24), 0x43756F4Du);
    DestinationString.Buffer = v7;
    if ( !v7 )
    {
      WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, 0x10u);
      v10 = -1073741823;
      LODWORD(P[0]) = DestinationString.MaximumLength;
      MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
      DestinationString.MaximumLength = 0;
      goto LABEL_32;
    }
    memset(v7, 0, DestinationString.MaximumLength);
    RtlAppendUnicodeToString(&DestinationString, L"\\Device\\");
    RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
    RtlAppendUnicodeToString(&DestinationString, L"0");
    if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
    {
      v10 = -1073741823;
    }
    else
    {
      v8 = 0;
      for ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
            v8 < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock);
            ++v8 )
      {
        if ( v8 >= v32 )
          break;
        DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] = v8 + 48;
        v18 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v29, (PWSTR *)P, 1);
        if ( v18 >= 0 )
        {
          v19 = (char *)v29->DeviceExtension;
          *(_QWORD *)v19 = v29;
          v19[64] = 0;
          v29->Flags &= ~0x80u;
          if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)v19 + 2) )
          {
            v20 = (void *)*((_QWORD *)v19 + 13);
            if ( v20 )
            {
              ExFreePoolWithTag(v20, 0);
              *((_QWORD *)v19 + 15) = 0LL;
              *((_QWORD *)v19 + 14) = 0LL;
              *((_QWORD *)v19 + 13) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v19);
            v2 = P[0];
          }
          else
          {
            v2 = P[0];
            v21 = (const WCHAR *)P[0];
            v29->StackSize = *(_BYTE *)(*((_QWORD *)v19 + 2) + 76LL) + 1;
            v22 = MouseAddDeviceEx((__int64)v19, v21, (__int64)FileObject);
            if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              *((_QWORD *)v19 + 42) = FileObject;
            if ( v2 )
            {
              ExFreePoolWithTag(v2, 0);
              v2 = 0LL;
              P[0] = 0LL;
            }
            if ( v22 >= 0 )
            {
              v24 = (__int64 **)qword_1C0008488;
              v25 = (__int64 *)(v19 + 320);
              *v25 = (__int64)&qword_1C0008480;
              v25[1] = (__int64)v24;
              if ( *v24 != &qword_1C0008480 )
                __fastfail(3u);
              *v24 = v25;
              qword_1C0008488 = (__int64)v25;
            }
            else
            {
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                           + 3 * *((unsigned int *)v19 + 45));
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v19 + 45)) = 0LL;
                *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v19 + 45) + 19) = 1;
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v19 + 45) + 1) = 0LL;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
              else if ( *((_QWORD *)v19 + 42) )
              {
                FileObject = (PFILE_OBJECT)*((_QWORD *)v19 + 42);
                *((_QWORD *)v19 + 42) = 0LL;
              }
              if ( FileObject )
                ObfDereferenceObject(FileObject);
              v23 = (void *)*((_QWORD *)v19 + 13);
              if ( v23 )
              {
                ExFreePoolWithTag(v23, 0);
                *((_QWORD *)v19 + 15) = 0LL;
                *((_QWORD *)v19 + 14) = 0LL;
                *((_QWORD *)v19 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v19);
            }
          }
        }
        else
        {
          MouseClassLogError(DriverObject, -1073414143, 20008, v18, 0, 0LL, 0);
          v2 = P[0];
        }
      }
      v9 = (__int64 *)qword_1C0008480;
      v10 = 0;
      if ( (__int64 *)qword_1C0008480 != &qword_1C0008480 )
      {
        NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
        do
        {
          WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = ++NumberOfMapRegisters;
          v9 = (__int64 *)*v9;
        }
        while ( v9 != &qword_1C0008480 );
      }
    }
  }
LABEL_13:
  if ( DestinationString.MaximumLength )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v10 >= 0 )
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)MouseClassFindMorePorts, 0LL);
    v10 = 0;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)MouseClassCreate;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)MouseClassClose;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)MouseClassRead;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)MouseClassFlush;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)MouseClassDeviceControl;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)MouseClassPassThrough;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)MouseClassCleanup;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)MousePnP;
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)MouseClassSystemControl;
    DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)MouseClassPower;
    DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)MouseAddDevice;
    goto LABEL_19;
  }
LABEL_32:
  if ( ::P )
  {
    ExFreePoolWithTag(::P, 0);
    ::P = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
  }
  v17 = *(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) )
    {
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL), 0);
      *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
      v17 = *(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    }
    IoDeleteDevice(*v17);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
LABEL_19:
  WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v6, 0x11u, v27);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 5u, 1u, 0x12u);
  if ( v10 < 0 )
    WppCleanupKm((__int64)DriverObject);
  return v10;
}
