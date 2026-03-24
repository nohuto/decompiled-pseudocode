/*
 * XREFs of MouCreateClassObject @ 0x1C000B850
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000B120 (MouseClassFindMorePorts.c)
 *     MouseAddDevice @ 0x1C000B2F0 (MouseAddDevice.c)
 *     DriverEntry @ 0x1C000E350 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002390 (WPP_RECORDER_SF_S.c)
 *     MouInitializeDataQueue @ 0x1C0002580 (MouInitializeDataQueue.c)
 *     RtlUnicodeStringPrintf @ 0x1C00025F0 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0002990 (__security_check_cookie.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     MouseClassLogError @ 0x1C00044D4 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004EF8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall MouCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        __int128 *a2,
        PDEVICE_OBJECT *a3,
        PWSTR *a4,
        char a5)
{
  __int64 DeviceExtension; // rsi
  __int128 *v8; // rbx
  int v10; // r15d
  unsigned __int16 v11; // cx
  WCHAR *PoolWithTag; // rax
  const wchar_t *v13; // rdx
  __int64 v14; // r9
  int v15; // edx
  NTSTATUS v16; // edi
  PWSTR Buffer; // rcx
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm0
  SIZE_T v21; // rdx
  PVOID v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // ebx
  PDEVICE_OBJECT v27; // rcx
  void *v28; // rcx
  NTSTATUS Device; // eax
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  unsigned int v32; // [rsp+40h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  int v34; // [rsp+58h] [rbp-28h]
  _DWORD v35[4]; // [rsp+60h] [rbp-20h] BYREF

  DeviceExtension = 0LL;
  v34 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v8 = a2;
  v32 = 0;
  v10 = 20000;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a3 = 0LL;
  if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v11 = ::DestinationString.Length + 30;
    DestinationString.MaximumLength = ::DestinationString.Length + 30;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
    {
      v11 = ::DestinationString.Length + 44;
      DestinationString.MaximumLength = ::DestinationString.Length + 44;
    }
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v11, 0x43756F4Du);
    DestinationString.Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.MaximumLength);
      do
      {
        if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
          v13 = L"\\Device\\%wZLegacy%d";
        else
          v13 = L"\\Device\\%wZ%d";
        v14 = (unsigned int)dword_1C00084A8++;
        v16 = RtlUnicodeStringPrintf(&DestinationString, v13, &::DestinationString, v14);
        if ( v16 < 0 )
        {
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            2,
            2,
            69,
            DeviceCharacteristics,
            (__int64)DestinationString.Buffer);
          goto LABEL_42;
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v15) = 5;
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            2,
            70,
            DeviceCharacteristics,
            (__int64)DestinationString.Buffer);
        }
        v16 = IoCreateDevice(DriverObject, 0x160u, &DestinationString, 0xFu, 0, 0, a3);
      }
      while ( v16 == -1073741771 );
      v10 = 20000;
      if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
      {
        DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
        Buffer = DestinationString.Buffer;
        *a4 = DestinationString.Buffer;
        goto LABEL_18;
      }
      v16 = -1073741823;
      v25 = 0;
    }
    else
    {
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 2LL, 2LL);
      v16 = -1073741823;
      v35[0] = DestinationString.MaximumLength;
      v25 = -1073414143;
      v10 = 20006;
      v32 = 1;
    }
    goto LABEL_28;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  Device = IoCreateDevice(DriverObject, 0x160u, 0LL, 0xFu, 0, 0, a3);
  Buffer = DestinationString.Buffer;
  v16 = Device;
  *a4 = 0LL;
LABEL_18:
  if ( v16 < 0 || !*a3 )
  {
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, 2, 2, 71, DeviceCharacteristics, (__int64)Buffer);
LABEL_42:
    v10 = 20006;
    v35[0] = DestinationString.MaximumLength;
    v25 = -1073414131;
    v32 = 1;
LABEL_24:
    if ( !v16 )
      goto LABEL_25;
    goto LABEL_28;
  }
  (*a3)->Flags |= 4u;
  v18 = 2LL;
  DeviceExtension = (__int64)(*a3)->DeviceExtension;
  v19 = (_OWORD *)DeviceExtension;
  do
  {
    v19 += 8;
    v20 = *v8;
    v8 += 8;
    *(v19 - 8) = v20;
    *(v19 - 7) = *(v8 - 7);
    *(v19 - 6) = *(v8 - 6);
    *(v19 - 5) = *(v8 - 5);
    *(v19 - 4) = *(v8 - 4);
    *(v19 - 3) = *(v8 - 3);
    *(v19 - 2) = *(v8 - 2);
    *(v19 - 1) = *(v8 - 1);
    --v18;
  }
  while ( v18 );
  *v19 = *v8;
  v19[1] = v8[1];
  v19[2] = v8[2];
  v19[3] = v8[3];
  v19[4] = v8[4];
  v19[5] = v8[5];
  *(_QWORD *)DeviceExtension = *a3;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x43756F4Du, 0, 0, 0x20u);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 144));
  *(_QWORD *)(DeviceExtension + 160) = DeviceExtension + 152;
  *(_QWORD *)(DeviceExtension + 152) = DeviceExtension + 152;
  v21 = *(unsigned int *)(DeviceExtension + 136);
  *(_DWORD *)(DeviceExtension + 80) = 0;
  v22 = ExAllocatePoolWithTag((POOL_TYPE)512, v21, 0x43756F4Du);
  *(_QWORD *)(DeviceExtension + 104) = v22;
  if ( v22 )
  {
    MouInitializeDataQueue(DeviceExtension, v23);
    v25 = v34;
    goto LABEL_24;
  }
  WPP_RECORDER_SF_S(
    WPP_GLOBAL_Control->DeviceExtension,
    2,
    2,
    72,
    DeviceCharacteristicsa,
    (__int64)DestinationString.Buffer);
  v16 = -1073741670;
  v25 = -1073414142;
  v10 = 20020;
LABEL_28:
  RtlFreeUnicodeString(&DestinationString);
  *a4 = 0LL;
  if ( v25 )
  {
    v27 = *a3;
    if ( !*a3 )
      v27 = (PDEVICE_OBJECT)DriverObject;
    MouseClassLogError(v27, v25, v10, v16, v32, v35, 0);
  }
  if ( DeviceExtension )
  {
    v28 = *(void **)(DeviceExtension + 104);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *(_QWORD *)(DeviceExtension + 104) = 0LL;
    }
  }
  if ( *a3 )
  {
    IoDeleteDevice(*a3);
    *a3 = 0LL;
  }
LABEL_25:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v24) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v24, 2LL);
  }
  return (unsigned int)v16;
}
