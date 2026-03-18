/*
 * XREFs of InitRimClient @ 0x1C0126870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitRimClient()
{
  unsigned int v0; // r14d
  __int64 i; // rsi
  __int64 v2; // r15
  NTSTATUS Event; // ebx
  NTSTATUS v4; // edi
  NTSTATUS Timer; // r12d
  NTSTATUS v6; // r13d
  NTSTATUS v7; // edi
  NTSTATUS v8; // r12d
  NTSTATUS v9; // r13d
  NTSTATUS v10; // ecx
  NTSTATUS v11; // ebx
  NTSTATUS v12; // edi
  NTSTATUS v13; // r12d
  NTSTATUS v14; // r13d
  NTSTATUS v15; // eax
  PVOID v17; // [rsp+48h] [rbp-21h] BYREF
  PVOID v18; // [rsp+50h] [rbp-19h] BYREF
  PVOID v19; // [rsp+58h] [rbp-11h] BYREF
  PVOID v20; // [rsp+60h] [rbp-9h] BYREF
  PVOID v21; // [rsp+68h] [rbp-1h] BYREF
  PVOID v22; // [rsp+70h] [rbp+7h] BYREF
  NTSTATUS v23; // [rsp+D0h] [rbp+67h]
  NTSTATUS v24; // [rsp+D0h] [rbp+67h]
  NTSTATUS v25; // [rsp+D0h] [rbp+67h]
  NTSTATUS v26; // [rsp+D8h] [rbp+6Fh]
  NTSTATUS v27; // [rsp+D8h] [rbp+6Fh]
  NTSTATUS v28; // [rsp+D8h] [rbp+6Fh]
  NTSTATUS v29; // [rsp+E0h] [rbp+77h]
  NTSTATUS v30; // [rsp+E0h] [rbp+77h]
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  gpRimDevBackedDeviceInfoListLock = 0LL;
  v0 = 0;
  for ( i = 0LL; ; i += 560LL )
  {
    v2 = 70LL * v0;
    *(_QWORD *)(i + aDeviceTemplate[0] + 488) = &aDeviceTemplate[v2 + 62];
    Event = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 14], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v4 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 19], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    Timer = ZwCreateTimer((PHANDLE)&aDeviceTemplate[v2 + 24], 0x1F0003u, 0LL, SynchronizationTimer);
    v6 = ZwCreateTimer((PHANDLE)&aDeviceTemplate[v2 + 29], 0x1F0003u, 0LL, SynchronizationTimer);
    v23 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 37], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v26 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 43], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v29 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 49], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    *(_QWORD *)(i + aDeviceTemplate[0] + 272) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 280) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 336) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 384) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 432) = CreateKernelEvent(1LL, 0LL);
    if ( Event < 0 )
      break;
    if ( v4 < 0 )
      break;
    if ( Timer < 0 )
      break;
    if ( v6 < 0 )
      break;
    if ( v23 < 0 )
      break;
    if ( v26 < 0 )
      break;
    if ( v29 < 0 )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 272) )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 280) )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 336) )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 384) )
      break;
    if ( !*(_QWORD *)(i + aDeviceTemplate[0] + 432) )
      break;
    v7 = ObReferenceObjectByHandle(
           *(HANDLE *)(i + aDeviceTemplate[0] + 112),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Object,
           0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 128) = Object;
    v8 = ObReferenceObjectByHandle(
           *(HANDLE *)(i + aDeviceTemplate[0] + 152),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &v17,
           0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 168) = v17;
    v9 = ObReferenceObjectByHandle(
           *(HANDLE *)(i + aDeviceTemplate[0] + 192),
           0x1F0003u,
           ExTimerObjectType,
           1,
           &v18,
           0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 208) = v18;
    v24 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 232),
            0x1F0003u,
            ExTimerObjectType,
            1,
            &v19,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 248) = v19;
    v27 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 296),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v20,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 312) = v20;
    v30 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 344),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v21,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 360) = v21;
    v10 = ObReferenceObjectByHandle(
            *(HANDLE *)(i + aDeviceTemplate[0] + 392),
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v22,
            0LL);
    *(_QWORD *)(i + aDeviceTemplate[0] + 408) = v22;
    if ( v7 < 0 )
      break;
    if ( v8 < 0 )
      break;
    if ( v9 < 0 )
      break;
    if ( v24 < 0 )
      break;
    if ( v27 < 0 )
      break;
    if ( v30 < 0 )
      break;
    if ( v10 < 0 )
      break;
    v11 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 128),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 15]);
    v12 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 168),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 20]);
    v13 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 208),
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 25]);
    v14 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 248),
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 30]);
    v25 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 312),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 38]);
    v28 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 360),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 44]);
    v15 = ObOpenObjectByPointer(
            *(PVOID *)(i + aDeviceTemplate[0] + 408),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 50]);
    if ( v11 < 0 || v12 < 0 || v13 < 0 || v14 < 0 || v25 < 0 || v28 < 0 || v15 < 0 )
      break;
    if ( ++v0 > 2 )
      return 0LL;
  }
  return 3221225473LL;
}
