/*
 * XREFs of MouCreateClassObject @ 0x1C000B850
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000B120 (MouseClassFindMorePorts.c)
 *     MouseAddDevice @ 0x1C000B2F0 (MouseAddDevice.c)
 *     DriverEntry @ 0x1C000E390 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002210 (WPP_RECORDER_SF_S.c)
 *     MouInitializeDataQueue @ 0x1C0002420 (MouInitializeDataQueue.c)
 *     RtlUnicodeStringPrintf @ 0x1C0002490 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C00029E0 (__security_check_cookie.c)
 *     memset @ 0x1C0002E40 (memset.c)
 *     MouseClassLogError @ 0x1C0004504 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004F28 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall MouCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        __int128 *a2,
        PDEVICE_OBJECT *a3,
        PWSTR *a4,
        char a5)
{
  __int64 DeviceExtension; // rsi
  int v10; // r15d
  unsigned __int16 v11; // cx
  WCHAR *PoolWithTag; // rax
  const wchar_t *v13; // rdx
  __int64 v14; // r9
  NTSTATUS v15; // edi
  const wchar_t *Buffer; // rcx
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm0
  SIZE_T v20; // rdx
  PVOID v21; // rax
  __int64 v22; // rdx
  int v23; // ebx
  PDEVICE_OBJECT v25; // rcx
  void *v26; // rcx
  NTSTATUS Device; // eax
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  unsigned int v30; // [rsp+40h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  int v32; // [rsp+58h] [rbp-28h]
  _DWORD v33[4]; // [rsp+60h] [rbp-20h] BYREF

  DeviceExtension = 0LL;
  v32 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v30 = 0;
  v10 = 20000;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 5u, 2u, 0x43u);
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
        v14 = (unsigned int)dword_1C00084B8++;
        v15 = RtlUnicodeStringPrintf(&DestinationString, v13, &::DestinationString, v14);
        if ( v15 < 0 )
        {
          WPP_RECORDER_SF_S(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            2u,
            0x45u,
            DeviceCharacteristics,
            DestinationString.Buffer);
          goto LABEL_42;
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_S(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x46u,
            DeviceCharacteristics,
            DestinationString.Buffer);
        v15 = IoCreateDevice(DriverObject, 0x160u, &DestinationString, 0xFu, 0, 0, a3);
      }
      while ( v15 == -1073741771 );
      v10 = 20000;
      if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
      {
        DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
        Buffer = DestinationString.Buffer;
        *a4 = DestinationString.Buffer;
        goto LABEL_18;
      }
      v15 = -1073741823;
      v23 = 0;
    }
    else
    {
      WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 2u, 0x44u);
      v15 = -1073741823;
      v33[0] = DestinationString.MaximumLength;
      v23 = -1073414143;
      v10 = 20006;
      v30 = 1;
    }
    goto LABEL_28;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  Device = IoCreateDevice(DriverObject, 0x160u, 0LL, 0xFu, 0, 0, a3);
  Buffer = DestinationString.Buffer;
  v15 = Device;
  *a4 = 0LL;
LABEL_18:
  if ( v15 < 0 || !*a3 )
  {
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 2u, 0x47u, DeviceCharacteristics, Buffer);
LABEL_42:
    v10 = 20006;
    v33[0] = DestinationString.MaximumLength;
    v23 = -1073414131;
    v30 = 1;
LABEL_24:
    if ( !v15 )
      goto LABEL_25;
    goto LABEL_28;
  }
  (*a3)->Flags |= 4u;
  v17 = 2LL;
  DeviceExtension = (__int64)(*a3)->DeviceExtension;
  v18 = (_OWORD *)DeviceExtension;
  do
  {
    v18 += 8;
    v19 = *a2;
    a2 += 8;
    *(v18 - 8) = v19;
    *(v18 - 7) = *(a2 - 7);
    *(v18 - 6) = *(a2 - 6);
    *(v18 - 5) = *(a2 - 5);
    *(v18 - 4) = *(a2 - 4);
    *(v18 - 3) = *(a2 - 3);
    *(v18 - 2) = *(a2 - 2);
    *(v18 - 1) = *(a2 - 1);
    --v17;
  }
  while ( v17 );
  *v18 = *a2;
  v18[1] = a2[1];
  v18[2] = a2[2];
  v18[3] = a2[3];
  v18[4] = a2[4];
  v18[5] = a2[5];
  *(_QWORD *)DeviceExtension = *a3;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x43756F4Du, 0, 0, 0x20u);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 144));
  *(_QWORD *)(DeviceExtension + 160) = DeviceExtension + 152;
  *(_QWORD *)(DeviceExtension + 152) = DeviceExtension + 152;
  v20 = *(unsigned int *)(DeviceExtension + 136);
  *(_DWORD *)(DeviceExtension + 80) = 0;
  v21 = ExAllocatePoolWithTag((POOL_TYPE)512, v20, 0x43756F4Du);
  *(_QWORD *)(DeviceExtension + 104) = v21;
  if ( v21 )
  {
    MouInitializeDataQueue(DeviceExtension, v22);
    v23 = v32;
    goto LABEL_24;
  }
  WPP_RECORDER_SF_S(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    2u,
    0x48u,
    DeviceCharacteristicsa,
    DestinationString.Buffer);
  v15 = -1073741670;
  v23 = -1073414142;
  v10 = 20020;
LABEL_28:
  RtlFreeUnicodeString(&DestinationString);
  *a4 = 0LL;
  if ( v23 )
  {
    v25 = *a3;
    if ( !*a3 )
      v25 = (PDEVICE_OBJECT)DriverObject;
    MouseClassLogError(v25, v23, v10, v15, v30, v33, 0);
  }
  if ( DeviceExtension )
  {
    v26 = *(void **)(DeviceExtension + 104);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
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
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 5u, 2u, 0x49u);
  return (unsigned int)v15;
}
