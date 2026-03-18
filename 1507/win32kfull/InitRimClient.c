/*
 * XREFs of InitRimClient @ 0x1C014D260
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 InitRimClient()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rdx
  unsigned int v3; // r14d
  __int64 i; // rsi
  __int64 v5; // r15
  NTSTATUS Event; // ebx
  NTSTATUS v7; // edi
  NTSTATUS Timer; // r12d
  NTSTATUS v9; // r13d
  NTSTATUS v10; // edi
  NTSTATUS v11; // eax
  int v12; // r12d
  NTSTATUS v13; // r13d
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // ebx
  NTSTATUS v19; // edi
  NTSTATUS v20; // r12d
  NTSTATUS v21; // r13d
  NTSTATUS v22; // eax
  __int64 v24; // rcx
  NTSTATUS v25; // [rsp+48h] [rbp-C0h]
  int v26; // [rsp+48h] [rbp-C0h]
  NTSTATUS v27; // [rsp+48h] [rbp-C0h]
  NTSTATUS v28; // [rsp+4Ch] [rbp-BCh]
  int v29; // [rsp+4Ch] [rbp-BCh]
  NTSTATUS v30; // [rsp+4Ch] [rbp-BCh]
  NTSTATUS v31; // [rsp+50h] [rbp-B8h]
  int v32; // [rsp+50h] [rbp-B8h]
  void *KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v34; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v35; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  PVOID v37; // [rsp+78h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-88h] BYREF
  PVOID v39; // [rsp+88h] [rbp-80h] BYREF
  PVOID v40; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  PVOID v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v46; // [rsp+ECh] [rbp-1Ch]
  int v47; // [rsp+F4h] [rbp-14h]

  v0 = 0LL;
  v1 = 3LL;
  v2 = 3LL;
  do
  {
    *(_DWORD *)(v0 + aDeviceTemplate[0] + 96) = 1;
    v0 += 568LL;
    --v2;
  }
  while ( v2 );
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"DisableRimInputProcessing");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v46 == 4
      && v47 )
    {
      v24 = 0LL;
      do
      {
        *(_DWORD *)(v24 + aDeviceTemplate[0] + 96) = 0;
        v24 += 568LL;
        --v1;
      }
      while ( v1 );
    }
    ZwClose(KeyHandle);
  }
  gpRimDevBackedDeviceInfoListLock = 0LL;
  v3 = 0;
  for ( i = 0LL; ; i += 568LL )
  {
    v5 = 71LL * v3;
    *(_QWORD *)(aDeviceTemplate[0] + i + 496) = &aDeviceTemplate[v5 + 63];
    Event = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v5 + 15], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v7 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v5 + 20], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    Timer = ZwCreateTimer((PHANDLE)&aDeviceTemplate[v5 + 25], 0x1F0003u, 0LL, SynchronizationTimer);
    v9 = ZwCreateTimer((PHANDLE)&aDeviceTemplate[v5 + 30], 0x1F0003u, 0LL, SynchronizationTimer);
    v31 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v5 + 38], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v25 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v5 + 44], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v28 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v5 + 50], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    *(_QWORD *)(aDeviceTemplate[0] + i + 280) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 288) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 344) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 392) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 440) = CreateKernelEvent(1LL, 0LL);
    v43 = aDeviceTemplate[0];
    if ( Event < 0 )
      break;
    if ( v7 < 0 )
      break;
    if ( Timer < 0 )
      break;
    if ( v9 < 0 )
      break;
    if ( v31 < 0 )
      break;
    if ( v25 < 0 )
      break;
    if ( v28 < 0 )
      break;
    if ( !*(_QWORD *)(aDeviceTemplate[0] + i + 280) )
      break;
    if ( !*(_QWORD *)(aDeviceTemplate[0] + i + 288) )
      break;
    if ( !*(_QWORD *)(aDeviceTemplate[0] + i + 344) )
      break;
    if ( !*(_QWORD *)(aDeviceTemplate[0] + i + 392) )
      break;
    if ( !*(_QWORD *)(aDeviceTemplate[0] + i + 440) )
      break;
    v10 = ObReferenceObjectByHandle(
            *(HANDLE *)(aDeviceTemplate[0] + i + 120),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &Object,
            0LL);
    *(_QWORD *)(v43 + i + 136) = Object;
    v11 = ObReferenceObjectByHandle(
            *(HANDLE *)(aDeviceTemplate[0] + i + 160),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v34,
            0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 176) = v34;
    v12 = v11;
    v13 = ObReferenceObjectByHandle(
            *(HANDLE *)(aDeviceTemplate[0] + i + 200),
            0x1F0003u,
            ExTimerObjectType,
            1,
            &v42,
            0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 216) = v42;
    v14 = ObReferenceObjectByHandle(
            *(HANDLE *)(aDeviceTemplate[0] + i + 240),
            0x1F0003u,
            ExTimerObjectType,
            1,
            &v40,
            0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 256) = v40;
    v29 = v14;
    v15 = ObReferenceObjectByHandle(
            *(HANDLE *)(aDeviceTemplate[0] + i + 304),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v35,
            0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 320) = v35;
    v26 = v15;
    v16 = ObReferenceObjectByHandle(
            *(HANDLE *)(aDeviceTemplate[0] + i + 352),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v37,
            0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 368) = v37;
    v32 = v16;
    v17 = ObReferenceObjectByHandle(
            *(HANDLE *)(aDeviceTemplate[0] + i + 400),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v39,
            0LL);
    *(_QWORD *)(aDeviceTemplate[0] + i + 416) = v39;
    if ( v10 < 0 )
      break;
    if ( v12 < 0 )
      break;
    if ( v13 < 0 )
      break;
    if ( v29 < 0 )
      break;
    if ( v26 < 0 )
      break;
    if ( v32 < 0 )
      break;
    if ( v17 < 0 )
      break;
    v18 = ObOpenObjectByPointer(
            *(PVOID *)(aDeviceTemplate[0] + i + 136),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v5 + 16]);
    v19 = ObOpenObjectByPointer(
            *(PVOID *)(aDeviceTemplate[0] + i + 176),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v5 + 21]);
    v20 = ObOpenObjectByPointer(
            *(PVOID *)(aDeviceTemplate[0] + i + 216),
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v5 + 26]);
    v21 = ObOpenObjectByPointer(
            *(PVOID *)(aDeviceTemplate[0] + i + 256),
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v5 + 31]);
    v30 = ObOpenObjectByPointer(
            *(PVOID *)(aDeviceTemplate[0] + i + 320),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v5 + 39]);
    v27 = ObOpenObjectByPointer(
            *(PVOID *)(aDeviceTemplate[0] + i + 368),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v5 + 45]);
    v22 = ObOpenObjectByPointer(
            *(PVOID *)(aDeviceTemplate[0] + i + 416),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v5 + 51]);
    if ( v18 < 0 || v19 < 0 || v20 < 0 || v21 < 0 || v30 < 0 || v27 < 0 || v22 < 0 )
      break;
    if ( ++v3 > 2 )
      return 0LL;
  }
  return 3221225473LL;
}
