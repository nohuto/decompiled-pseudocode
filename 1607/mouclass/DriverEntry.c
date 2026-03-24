/*
 * XREFs of DriverEntry @ 0x1C000E350
 * Callers:
 *     GsDriverEntry @ 0x1C000E000 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002470 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0002990 (__security_check_cookie.c)
 *     memmove @ 0x1C0002A80 (memmove.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     MouseClassLogError @ 0x1C00044D4 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004EF8 (WPP_RECORDER_SF_.c)
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
  __int64 v5; // rdx
  PVOID PoolWithTag; // rax
  __int64 v7; // rdx
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  WCHAR *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 *v16; // rax
  int v17; // edi
  __int64 v18; // rdx
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  PVOID v23; // rdi
  const WCHAR *v24; // rdx
  _BYTE *DeviceExtension; // rcx
  int v26; // eax
  int v27; // edx
  int v28; // r8d
  PDEVICE_OBJECT *v29; // rcx
  int v30; // eax
  char *v31; // rsi
  void *v32; // rcx
  const WCHAR *v33; // rdx
  int v34; // r15d
  void *v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  ULONG NumberOfMapRegisters; // ecx
  char v39[4]; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  PDEVICE_OBJECT v41; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v46[512]; // [rsp+90h] [rbp-70h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v41 = 0LL;
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
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 1LL);
  }
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
  memset(v46, 0, sizeof(v46));
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)v46;
  word_1C0008260 = RegistryPath->Length;
  word_1C0008262 = RegistryPath->Length + 2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned __int16)word_1C0008262, 0x43756F4Du);
  ::P = PoolWithTag;
  if ( !PoolWithTag )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v7, 1LL);
    v17 = -1073741823;
    LODWORD(P[0]) = RegistryPath->Length + 2;
    MouseClassLogError(DriverObject, -1073414143, 20002, -1073741823, 1u, P, 0);
    goto LABEL_13;
  }
  memmove(PoolWithTag, RegistryPath->Buffer, RegistryPath->Length);
  *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
  MouConfiguration();
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    v20 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v41, (PWSTR *)P, 1);
    v17 = v20;
    if ( v20 < 0 )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v21, v22, 12, *(_DWORD *)v39, v20);
      v2 = P[0];
      goto LABEL_13;
    }
    v23 = P[0];
    v24 = (const WCHAR *)P[0];
    DeviceExtension = v41->DeviceExtension;
    *(_QWORD *)DeviceExtension = v41;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = DeviceExtension;
    DeviceExtension[64] = 0;
    v26 = MouseAddDeviceEx((__int64)DeviceExtension, v24, 0LL);
    if ( v26 < 0 )
    {
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v27, v28, 13, *(_DWORD *)v39, v26);
    }
    ExFreePoolWithTag(v23, 0);
    P[0] = 0LL;
    v41->Flags &= ~0x80u;
  }
  RtlCopyUnicodeString(&Destination, &::DestinationString);
  Destination.Length -= 10;
  RtlAppendUnicodeToString(&Destination, L"Port");
  v8 = MouDeterminePortsServiced(&Destination.Length, &v43);
  if ( v8 < 0 )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 14, *(_DWORD *)v39, v8);
  }
  LODWORD(v11) = Destination.Length;
  if ( Destination.MaximumLength < (unsigned __int64)Destination.Length + 2 )
  {
    v17 = -1073741823;
  }
  else
  {
    v12 = (unsigned __int64)Destination.Length >> 1;
    Destination.Buffer[v12 + 1] = 0;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v12, v10, 15, *(_DWORD *)v39, v43);
    DestinationString.MaximumLength = Destination.Length + 24;
    v13 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(Destination.Length + 24), 0x43756F4Du);
    DestinationString.Buffer = v13;
    if ( !v13 )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v14, 1LL);
      v17 = -1073741823;
      LODWORD(P[0]) = DestinationString.MaximumLength;
      MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
      DestinationString.MaximumLength = 0;
      goto LABEL_32;
    }
    memset(v13, 0, DestinationString.MaximumLength);
    RtlAppendUnicodeToString(&DestinationString, L"\\Device\\");
    RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
    RtlAppendUnicodeToString(&DestinationString, L"0");
    LODWORD(v11) = DestinationString.Length;
    if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
    {
      v17 = -1073741823;
    }
    else
    {
      v15 = 0;
      v11 = (unsigned __int64)DestinationString.Length >> 1;
      for ( DestinationString.Buffer[v11 + 1] = 0; v15 < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock); ++v15 )
      {
        if ( v15 >= v43 )
          break;
        DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] = v15 + 48;
        v30 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v41, (PWSTR *)P, 1);
        if ( v30 >= 0 )
        {
          v31 = (char *)v41->DeviceExtension;
          *(_QWORD *)v31 = v41;
          v31[64] = 0;
          v41->Flags &= ~0x80u;
          if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)v31 + 2) )
          {
            v32 = (void *)*((_QWORD *)v31 + 13);
            if ( v32 )
            {
              ExFreePoolWithTag(v32, 0);
              *((_QWORD *)v31 + 15) = 0LL;
              *((_QWORD *)v31 + 14) = 0LL;
              *((_QWORD *)v31 + 13) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v31);
            v2 = P[0];
          }
          else
          {
            v2 = P[0];
            v33 = (const WCHAR *)P[0];
            v41->StackSize = *(_BYTE *)(*((_QWORD *)v31 + 2) + 76LL) + 1;
            v34 = MouseAddDeviceEx((__int64)v31, v33, (__int64)FileObject);
            if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              *((_QWORD *)v31 + 42) = FileObject;
            if ( v2 )
            {
              ExFreePoolWithTag(v2, 0);
              v2 = 0LL;
              P[0] = 0LL;
            }
            if ( v34 >= 0 )
            {
              v36 = (_QWORD *)qword_1C0008488;
              v37 = v31 + 320;
              if ( *(__int64 **)qword_1C0008488 != &qword_1C0008480 )
                __fastfail(3u);
              *v37 = &qword_1C0008480;
              v37[1] = v36;
              *v36 = v37;
              qword_1C0008488 = (__int64)v37;
            }
            else
            {
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                           + 3 * *((unsigned int *)v31 + 45));
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v31 + 45)) = 0LL;
                *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v31 + 45) + 19) = 1;
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v31 + 45) + 1) = 0LL;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
              else if ( *((_QWORD *)v31 + 42) )
              {
                FileObject = (PFILE_OBJECT)*((_QWORD *)v31 + 42);
                *((_QWORD *)v31 + 42) = 0LL;
              }
              if ( FileObject )
                ObfDereferenceObject(FileObject);
              v35 = (void *)*((_QWORD *)v31 + 13);
              if ( v35 )
              {
                ExFreePoolWithTag(v35, 0);
                *((_QWORD *)v31 + 15) = 0LL;
                *((_QWORD *)v31 + 14) = 0LL;
                *((_QWORD *)v31 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v31);
            }
          }
        }
        else
        {
          MouseClassLogError(DriverObject, -1073414143, 20008, v30, 0, 0LL, 0);
          v2 = P[0];
        }
      }
      v16 = (__int64 *)qword_1C0008480;
      v17 = 0;
      if ( (__int64 *)qword_1C0008480 != &qword_1C0008480 )
      {
        NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
        do
        {
          WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = ++NumberOfMapRegisters;
          v16 = (__int64 *)*v16;
        }
        while ( v16 != &qword_1C0008480 );
      }
    }
  }
LABEL_13:
  if ( DestinationString.MaximumLength )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v17 >= 0 )
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)MouseClassFindMorePorts, 0LL);
    v17 = 0;
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
  v29 = *(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) )
    {
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL), 0);
      *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
      v29 = *(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    }
    IoDeleteDevice(*v29);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
LABEL_19:
  LOBYTE(v11) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v11, v10, 17, *(_DWORD *)v39, v17);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v18) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v18, 1LL);
  }
  if ( v17 < 0 )
    WppCleanupKm((__int64)DriverObject);
  return v17;
}
