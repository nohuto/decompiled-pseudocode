/*
 * XREFs of DriverEntry @ 0x1C000F020
 * Callers:
 *     GsDriverEntry @ 0x1C000F000 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019F0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0002D20 (__security_check_cookie.c)
 *     memmove @ 0x1C0002E00 (memmove.c)
 *     memset @ 0x1C0003140 (memset.c)
 *     KeyboardClassLogError @ 0x1C0004904 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005338 (WPP_RECORDER_SF_.c)
 *     KeyboardAddDeviceEx @ 0x1C000C540 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000C6E0 (KbdDeterminePortsServiced.c)
 *     KbdCreateClassObject @ 0x1C000CAE0 (KbdCreateClassObject.c)
 *     WppInitKm @ 0x1C000CDB0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000CE50 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C000E8DC (WppCleanupKm.c)
 *     KbdConfiguration @ 0x1C000F420 (KbdConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v2; // edi
  PVOID v3; // r14
  __int64 v6; // rdx
  PVOID PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 Length; // rdx
  int v10; // edx
  int v11; // r8d
  WCHAR *v12; // rax
  __int64 v13; // rdx
  unsigned int i; // edi
  __int64 *v15; // rax
  const WCHAR *v17; // rdx
  _BYTE *DeviceExtension; // rcx
  int v19; // eax
  char *v20; // rsi
  void *v21; // rcx
  const WCHAR *v22; // rdx
  int v23; // r15d
  void *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  ULONG NumberOfMapRegisters; // ecx
  PDEVICE_OBJECT *v28; // rcx
  char v29[4]; // [rsp+20h] [rbp-E0h]
  PDEVICE_OBJECT v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v36[512]; // [rsp+90h] [rbp-70h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v30 = 0LL;
  v2 = 0;
  P[0] = 0LL;
  v3 = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_KbdClassTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 1LL);
  }
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x418uLL);
  Destination.MaximumLength = 0;
  Destination.Buffer = 0LL;
  qword_1C00094B0 = (__int64)&qword_1C00094A8;
  qword_1C00094A8 = (__int64)&qword_1C00094A8;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&::DestinationString.Length = 0x2000000;
  ::DestinationString.Buffer = (PWSTR)&unk_1C00092A8;
  memset(v36, 0, sizeof(v36));
  *(_DWORD *)&DestinationString.Length = 0x2000000;
  DestinationString.Buffer = (PWSTR)v36;
  word_1C0009288 = RegistryPath->Length;
  word_1C000928A = RegistryPath->Length + 2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned __int16)word_1C000928A, 0x4364624Bu);
  ::P = PoolWithTag;
  if ( !PoolWithTag )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v8, 1LL);
    LODWORD(P[0]) = RegistryPath->Length + 2;
    KeyboardClassLogError(DriverObject, -1073414143, 10002, -1073741823, 1u, P, 0);
    goto LABEL_10;
  }
  memmove(PoolWithTag, RegistryPath->Buffer, RegistryPath->Length);
  *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
  KbdConfiguration();
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    v2 = KbdCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.Dpc, &v30, (__int64 *)P, 1);
    if ( v2 < 0 )
    {
      v3 = P[0];
      goto LABEL_10;
    }
    v17 = (const WCHAR *)P[0];
    DeviceExtension = v30->DeviceExtension;
    *(_QWORD *)DeviceExtension = v30;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = DeviceExtension;
    DeviceExtension[64] = 0;
    KeyboardAddDeviceEx((__int64)DeviceExtension, v17, 0LL);
    ExFreePoolWithTag(P[0], 0);
    P[0] = 0LL;
    v30->Flags &= ~0x80u;
  }
  RtlCopyUnicodeString(&DestinationString, &::DestinationString);
  DestinationString.Length -= 10;
  RtlAppendUnicodeToString(&DestinationString, L"Port");
  Length = DestinationString.Length;
  if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
  {
    v2 = -1073741823;
  }
  else
  {
    DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
    KbdDeterminePortsServiced(&DestinationString.Length, &v33);
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 12, *(_DWORD *)v29, v33);
    RtlInitUnicodeString(&Destination, 0LL);
    Destination.MaximumLength = DestinationString.Length + 20;
    v12 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(DestinationString.Length + 20), 0x4364624Bu);
    Destination.Buffer = v12;
    if ( v12 )
    {
      memset(v12, 0, Destination.MaximumLength);
      RtlAppendUnicodeToString(&Destination, L"\\Device\\");
      RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
      RtlAppendUnicodeToString(&Destination, L"0");
      for ( i = 0; i < *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy; ++i )
      {
        if ( i >= v33 )
          break;
        Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = i + 48;
        v19 = KbdCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.Dpc, &v30, (__int64 *)P, 1);
        if ( v19 >= 0 )
        {
          v20 = (char *)v30->DeviceExtension;
          *(_QWORD *)v20 = v30;
          v20[64] = 0;
          v30->Flags &= ~0x80u;
          if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)v20 + 2) >= 0 )
          {
            v3 = P[0];
            v22 = (const WCHAR *)P[0];
            v30->StackSize = *(_BYTE *)(*((_QWORD *)v20 + 2) + 76LL) + 1;
            v23 = KeyboardAddDeviceEx((__int64)v20, v22, (__int64)FileObject);
            if ( v3 )
            {
              ExFreePoolWithTag(v3, 0);
              v3 = 0LL;
              P[0] = 0LL;
            }
            if ( v23 >= 0 )
            {
              v25 = (_QWORD *)qword_1C00094B0;
              v26 = v20 + 336;
              if ( *(__int64 **)qword_1C00094B0 != &qword_1C00094A8 )
                __fastfail(3u);
              *v26 = &qword_1C00094A8;
              v26[1] = v25;
              *v25 = v26;
              qword_1C00094B0 = (__int64)v26;
            }
            else
            {
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                           + 3 * *((unsigned int *)v20 + 49));
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v20 + 49)) = 0LL;
                *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v20 + 49) + 19) = 1;
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v20 + 49) + 1) = 0LL;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
              else if ( *((_QWORD *)v20 + 44) )
              {
                FileObject = (PFILE_OBJECT)*((_QWORD *)v20 + 44);
                *((_QWORD *)v20 + 44) = 0LL;
              }
              if ( FileObject )
                ObfDereferenceObject(FileObject);
              v24 = (void *)*((_QWORD *)v20 + 13);
              if ( v24 )
              {
                ExFreePoolWithTag(v24, 0);
                *((_QWORD *)v20 + 15) = 0LL;
                *((_QWORD *)v20 + 14) = 0LL;
                *((_QWORD *)v20 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v20);
            }
          }
          else
          {
            v21 = (void *)*((_QWORD *)v20 + 13);
            if ( v21 )
            {
              ExFreePoolWithTag(v21, 0);
              *((_QWORD *)v20 + 15) = 0LL;
              *((_QWORD *)v20 + 14) = 0LL;
              *((_QWORD *)v20 + 13) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v20);
            v3 = P[0];
          }
        }
        else
        {
          KeyboardClassLogError(DriverEntry, -1073414143, 10008, v19, 0, 0LL, 0);
          v3 = P[0];
        }
      }
      v15 = (__int64 *)qword_1C00094A8;
      v2 = 0;
      if ( (__int64 *)qword_1C00094A8 != &qword_1C00094A8 )
      {
        NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
        do
        {
          WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = ++NumberOfMapRegisters;
          v15 = (__int64 *)*v15;
        }
        while ( v15 != &qword_1C00094A8 );
      }
    }
    else
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 1LL);
      v2 = -1073741823;
      LODWORD(P[0]) = Destination.MaximumLength;
      KeyboardClassLogError(DriverObject, -1073414143, 10006, -1073741823, 1u, P, 0);
    }
  }
LABEL_10:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v2 < 0 )
  {
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
    v28 = *(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) )
      {
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL), 0);
        *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
        *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
        v28 = *(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
      }
      IoDeleteDevice(*v28);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    }
  }
  else
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)KeyboardClassFindMorePorts, 0LL);
    v2 = 0;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)KeyboardClassCreate;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)KeyboardClassClose;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)KeyboardClassRead;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)KeyboardClassFlush;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)KeyboardClassDeviceControl;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)KeyboardClassPassThrough;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)KeyboardClassCleanup;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)KeyboardPnP;
    DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)KeyboardClassPower;
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)KeyboardClassSystemControl;
    DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)KeyboardAddDevice;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(Length) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, Length, 1LL);
  }
  if ( v2 < 0 )
    WppCleanupKm((__int64)DriverObject);
  return v2;
}
