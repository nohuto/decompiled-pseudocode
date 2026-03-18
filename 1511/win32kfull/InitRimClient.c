/*
 * XREFs of InitRimClient @ 0x1C0105050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 InitRimClient()
{
  const WCHAR *v0; // rdx
  int v1; // r8d
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // r14d
  __int64 i; // rsi
  __int64 v6; // r15
  NTSTATUS Event; // ebx
  NTSTATUS v8; // edi
  NTSTATUS Timer; // r12d
  NTSTATUS v10; // r13d
  NTSTATUS v11; // edi
  NTSTATUS v12; // eax
  int v13; // r12d
  NTSTATUS v14; // r13d
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // ebx
  NTSTATUS v20; // edi
  NTSTATUS v21; // r12d
  NTSTATUS v22; // r13d
  NTSTATUS v23; // eax
  NTSTATUS v25; // [rsp+48h] [rbp-C0h]
  int v26; // [rsp+48h] [rbp-C0h]
  NTSTATUS v27; // [rsp+48h] [rbp-C0h]
  NTSTATUS v28; // [rsp+4Ch] [rbp-BCh]
  int v29; // [rsp+4Ch] [rbp-BCh]
  NTSTATUS v30; // [rsp+4Ch] [rbp-BCh]
  NTSTATUS v31; // [rsp+50h] [rbp-B8h]
  int v32; // [rsp+50h] [rbp-B8h]
  void *KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v35; // [rsp+70h] [rbp-98h] BYREF
  PVOID v36; // [rsp+78h] [rbp-90h] BYREF
  PVOID v37; // [rsp+80h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp-80h] BYREF
  PVOID v39; // [rsp+90h] [rbp-78h] BYREF
  PVOID v40; // [rsp+98h] [rbp-70h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v46; // [rsp+ECh] [rbp-1Ch]
  int v47; // [rsp+F4h] [rbp-14h]

  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v0 = L"DisableRimInputProcessing";
    if ( !gbEnableRim )
      v0 = L"EnableRimInputProcessing";
    RtlInitUnicodeString(&DestinationString, v0);
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
      gbEnableRim = gbEnableRim == 0;
    }
    ZwClose(KeyHandle);
  }
  v1 = gbEnableRim;
  v2 = 0LL;
  v3 = 3LL;
  do
  {
    v2 += 568LL;
    *(_DWORD *)(v2 + aDeviceTemplate[0] - 472) = v1;
    --v3;
  }
  while ( v3 );
  gpRimDevBackedDeviceInfoListLock = 0LL;
  v4 = 0;
  for ( i = 0LL; ; i += 568LL )
  {
    v6 = 71LL * v4;
    *(_QWORD *)(i + aDeviceTemplate[0] + 496) = &aDeviceTemplate[v6 + 63];
    Event = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v6 + 15], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v8 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v6 + 20], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    Timer = ZwCreateTimer((PHANDLE)&aDeviceTemplate[v6 + 25], 0x1F0003u, 0LL, SynchronizationTimer);
    v10 = ZwCreateTimer((PHANDLE)&aDeviceTemplate[v6 + 30], 0x1F0003u, 0LL, SynchronizationTimer);
    v31 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v6 + 38], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v28 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v6 + 44], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v25 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v6 + 50], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    *(_QWORD *)(i + aDeviceTemplate[0] + 280) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 288) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 344) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 392) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 440) = CreateKernelEvent(1LL, 0LL);
    v43 = aDeviceTemplate[0];
    if ( Event < 0 )
      break;
    if ( v8 < 0 )
      break;
    if ( Timer < 0 )
      break;
    if ( v10 < 0 )
      break;
    if ( v31 < 0 )
      break;
    if ( v28 < 0 )
      break;
    if ( v25 < 0 )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 280) )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 288) )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 344) )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 392) )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 440) )
      break;
    v11 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 120),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &Object,
            0LL);
    *(_QWORD *)(i + v43 + 136) = Object;
    v12 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 160),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v35,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 176) = v35;
    v13 = v12;
    v14 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 200),
            0x1F0003u,
            ExTimerObjectType,
            1,
            &v42,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 216) = v42;
    v15 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 240),
            0x1F0003u,
            ExTimerObjectType,
            1,
            &v40,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 256) = v40;
    v26 = v15;
    v16 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 304),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v36,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 320) = v36;
    v29 = v16;
    v17 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 352),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v37,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 368) = v37;
    v32 = v17;
    v18 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 400),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v39,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 416) = v39;
    if ( v11 < 0 )
      break;
    if ( v13 < 0 )
      break;
    if ( v14 < 0 )
      break;
    if ( v26 < 0 )
      break;
    if ( v29 < 0 )
      break;
    if ( v32 < 0 )
      break;
    if ( v18 < 0 )
      break;
    v19 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 136),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v6 + 16]);
    v20 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 176),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v6 + 21]);
    v21 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 216),
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v6 + 26]);
    v22 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 256),
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v6 + 31]);
    v27 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 320),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v6 + 39]);
    v30 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 368),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v6 + 45]);
    v23 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 416),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v6 + 51]);
    if ( v19 < 0 || v20 < 0 || v21 < 0 || v22 < 0 || v27 < 0 || v30 < 0 || v23 < 0 )
      break;
    if ( ++v4 > 2 )
      return 0LL;
  }
  return 3221225473LL;
}
