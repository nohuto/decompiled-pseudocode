/*
 * XREFs of MouseClassFindMorePorts @ 0x1C000B120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00029E0 (__security_check_cookie.c)
 *     memset @ 0x1C0002E40 (memset.c)
 *     MouseClassLogError @ 0x1C0004504 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004F28 (WPP_RECORDER_SF_.c)
 *     MouseAddDeviceEx @ 0x1C000B420 (MouseAddDeviceEx.c)
 *     MouDeterminePortsServiced @ 0x1C000B670 (MouDeterminePortsServiced.c)
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 */

void __fastcall MouseClassFindMorePorts(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  PVOID v4; // rsi
  WCHAR *PoolWithTag; // rax
  ULONG NumberOfMapRegisters; // ebx
  int i; // edi
  int ClassObject; // eax
  __int64 v9; // r15
  void *v10; // rcx
  PVOID v11; // rdx
  int v12; // r12d
  void *v13; // rcx
  __int64 **v14; // rax
  __int64 *v15; // r15
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  ULONG v20; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v22[512]; // [rsp+90h] [rbp-70h] BYREF

  v19 = 0LL;
  P[0] = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v4 = 0LL;
  memset(v22, 0, sizeof(v22));
  *(_DWORD *)&DestinationString.Length = 0x2000000;
  DestinationString.Buffer = (PWSTR)v22;
  RtlCopyUnicodeString(&DestinationString, &::DestinationString);
  DestinationString.Length -= 10;
  RtlAppendUnicodeToString(&DestinationString, L"Port");
  if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
  {
    DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
    RtlInitUnicodeString(&Destination, 0LL);
    Destination.MaximumLength = DestinationString.Length + 20;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(
                             PagedPool,
                             (unsigned __int16)(DestinationString.Length + 20),
                             0x43756F4Du);
    Destination.Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, Destination.MaximumLength);
      RtlAppendUnicodeToString(&Destination, L"\\Device\\");
      RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
      RtlAppendUnicodeToString(&Destination, L"0");
      MouDeterminePortsServiced(&DestinationString, &v20);
      NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      for ( i = 0; NumberOfMapRegisters < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock); ++NumberOfMapRegisters )
      {
        if ( NumberOfMapRegisters >= v20 )
          break;
        Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = NumberOfMapRegisters + 48;
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          P[0] = 0LL;
        }
        ClassObject = MouCreateClassObject(DriverObject, 1);
        if ( ClassObject >= 0 )
        {
          v9 = *(_QWORD *)(v19 + 64);
          *(_QWORD *)v9 = v19;
          *(_BYTE *)(v9 + 64) = 0;
          if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)(v9 + 16)) )
          {
            v10 = *(void **)(v9 + 104);
            if ( v10 )
            {
              ExFreePoolWithTag(v10, 0);
              *(_QWORD *)(v9 + 120) = 0LL;
              *(_QWORD *)(v9 + 112) = 0LL;
              *(_QWORD *)(v9 + 104) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v9);
            v4 = P[0];
          }
          else
          {
            v4 = P[0];
            v11 = P[0];
            *(_BYTE *)(v19 + 76) = *(_BYTE *)(*(_QWORD *)(v9 + 16) + 76LL) + 1;
            v12 = MouseAddDeviceEx(v9, v11, FileObject);
            *(_DWORD *)(v19 + 48) &= ~0x80u;
            if ( v4 )
            {
              ExFreePoolWithTag(v4, 0);
              v4 = 0LL;
              P[0] = 0LL;
            }
            if ( v12 >= 0 )
            {
              v14 = (__int64 **)qword_1C0008488;
              v15 = (__int64 *)(v9 + 320);
              *v15 = (__int64)&qword_1C0008480;
              v15[1] = (__int64)v14;
              if ( *v14 != &qword_1C0008480 )
                __fastfail(3u);
              *v14 = v15;
              ++i;
              qword_1C0008488 = (__int64)v15;
            }
            else
            {
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                           + 3 * *(unsigned int *)(v9 + 180));
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v9 + 180)) = 0LL;
                *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v9 + 180) + 19) = 1;
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v9 + 180) + 1) = 0LL;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
              else if ( *(_QWORD *)(v9 + 336) )
              {
                FileObject = *(PFILE_OBJECT *)(v9 + 336);
                *(_QWORD *)(v9 + 336) = 0LL;
              }
              if ( FileObject )
                ObfDereferenceObject(FileObject);
              v13 = *(void **)(v9 + 104);
              if ( v13 )
              {
                ExFreePoolWithTag(v13, 0);
                *(_QWORD *)(v9 + 120) = 0LL;
                *(_QWORD *)(v9 + 112) = 0LL;
                *(_QWORD *)(v9 + 104) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v9);
            }
          }
        }
        else
        {
          MouseClassLogError(DriverObject, -1073414143, 20008, ClassObject, 0, 0LL, 0);
          v4 = P[0];
        }
      }
      WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters += i;
    }
    else
    {
      WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 2u, 0x53u);
      LODWORD(P[0]) = Destination.MaximumLength;
      MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
