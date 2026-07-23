/*
 * XREFs of PiDrvDbLoadNodeWorkerCallback @ 0x14055A084
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwSetEvent @ 0x14017F1B0 (ZwSetEvent.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwResetEvent @ 0x140181BB0 (ZwResetEvent.c)
 *     ZwUnloadKey2 @ 0x140182550 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x140182570 (ZwUnloadKeyEx.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PiDrvDbLoadHive @ 0x14055A2B0 (PiDrvDbLoadHive.c)
 */

char __fastcall PiDrvDbLoadNodeWorkerCallback(__int64 a1)
{
  REGHANDLE v1; // rbx
  int v3; // ebx
  __int64 v4; // rax
  void *v5; // rdx
  NTSTATUS v6; // eax
  char result; // al
  REGHANDLE v8; // rsi
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  _WORD v13[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v14; // [rsp+64h] [rbp-25h] BYREF
  int v15; // [rsp+68h] [rbp-21h] BYREF
  int v16; // [rsp+70h] [rbp-19h] BYREF
  int v17; // [rsp+74h] [rbp-15h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+80h] [rbp-9h] BYREF

  v1 = PnpEtwHandle;
  Handle = 0LL;
  v17 = 1;
  v16 = 0;
  v14 = 0;
  if ( PnpEtwHandle )
  {
    if ( EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverDatabaseLoad_Start) )
    {
      v9 = *(_WORD *)(a1 + 16);
      TargetKey.Attributes = v9;
      v13[0] = v9 >> 1;
      TargetKey.RootDirectory = (HANDLE)2;
      *(_QWORD *)&TargetKey.Length = v13;
      TargetKey.ObjectName = *(PUNICODE_STRING *)(a1 + 24);
      *(&TargetKey.Attributes + 1) = 0;
      EtwWrite(v1, &KMPnPEvt_DriverDatabaseLoad_Start, 0LL, 2u, (PEVENT_DATA_DESCRIPTOR)&TargetKey);
      v1 = PnpEtwHandle;
    }
    if ( v1 && EtwEventEnabled(v1, &KMPnPEvt_DriverDatabaseLoaded_Start) )
    {
      v10 = *(_WORD *)(a1 + 16);
      TargetKey.Attributes = v10;
      v13[0] = v10 >> 1;
      TargetKey.RootDirectory = (HANDLE)2;
      *(_QWORD *)&TargetKey.Length = v13;
      TargetKey.ObjectName = *(PUNICODE_STRING *)(a1 + 24);
      *(&TargetKey.Attributes + 1) = 0;
      EtwWrite(v1, &KMPnPEvt_DriverDatabaseLoaded_Start, 0LL, 2u, (PEVENT_DATA_DESCRIPTOR)&TargetKey);
    }
  }
  v3 = PiDrvDbLoadHive(a1 + 32, a1 + 48, &Handle);
  if ( v3 >= 0 )
  {
    if ( (int)SysCtxRegOpenKey(0LL, (char *)Handle, L"DriverDatabase", 0, 0x2000000u, (HANDLE *)(a1 + 72)) < 0 )
    {
      *(_BYTE *)(a1 + 80) = 1;
    }
    else if ( *(_QWORD *)(a1 + 480) == 0xFFFFFFFFLL )
    {
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 24),
                  6u,
                  *(_QWORD *)(a1 + 72),
                  0LL,
                  (__int64)&DEVPKEY_DriverDatabase_UnloadTimeout,
                  (__int64)&v17,
                  (__int64)&v14,
                  4,
                  (__int64)&v16,
                  0) >= 0
        && v17 == 7
        && v16 == 4 )
      {
        v4 = v14;
      }
      else
      {
        v4 = 120000LL;
        v14 = 120000;
      }
      if ( (_DWORD)v4 != -1 )
        *(_QWORD *)(a1 + 480) = -10000 * v4;
    }
    ZwClose(Handle);
    ZwResetEvent(*(HANDLE *)(a1 + 472), 0LL);
    v5 = *(void **)(a1 + 472);
    TargetKey.Length = 48;
    TargetKey.RootDirectory = 0LL;
    TargetKey.Attributes = 576;
    TargetKey.ObjectName = (PUNICODE_STRING)(a1 + 32);
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    if ( v5 )
      v6 = ZwUnloadKeyEx(&TargetKey, v5);
    else
      v6 = ZwUnloadKey2(&TargetKey, 0);
    v3 = v6;
    if ( v6 == 259 )
    {
      v3 = 0;
      goto LABEL_18;
    }
    if ( v6 < 0 )
      v3 = 0;
    ZwSetEvent(*(HANDLE *)(a1 + 472), 0LL);
  }
  if ( v3 == -1073741431 )
    v3 = -1073741077;
LABEL_18:
  *(_DWORD *)(a1 + 256) = v3;
  result = KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
  v8 = PnpEtwHandle;
  v15 = v3;
  if ( PnpEtwHandle )
  {
    result = EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverDatabaseLoad_Stop);
    if ( result )
    {
      v11 = *(_WORD *)(a1 + 16);
      TargetKey.Attributes = v11;
      v13[0] = v11 >> 1;
      TargetKey.RootDirectory = (HANDLE)2;
      *(_QWORD *)&TargetKey.Length = v13;
      TargetKey.ObjectName = *(PUNICODE_STRING *)(a1 + 24);
      TargetKey.SecurityDescriptor = &v15;
      *(&TargetKey.Attributes + 1) = 0;
      TargetKey.SecurityQualityOfService = (PVOID)4;
      result = EtwWrite(v8, &KMPnPEvt_DriverDatabaseLoad_Stop, 0LL, 3u, (PEVENT_DATA_DESCRIPTOR)&TargetKey);
      v8 = PnpEtwHandle;
    }
  }
  if ( v3 < 0 )
  {
    v15 = v3;
    if ( v8 )
    {
      result = EtwEventEnabled(v8, &KMPnPEvt_DriverDatabaseLoaded_Stop);
      if ( result )
      {
        v12 = *(_WORD *)(a1 + 16);
        TargetKey.Attributes = v12;
        v13[0] = v12 >> 1;
        TargetKey.RootDirectory = (HANDLE)2;
        *(_QWORD *)&TargetKey.Length = v13;
        TargetKey.ObjectName = *(PUNICODE_STRING *)(a1 + 24);
        TargetKey.SecurityDescriptor = &v15;
        *(&TargetKey.Attributes + 1) = 0;
        TargetKey.SecurityQualityOfService = (PVOID)4;
        return EtwWrite(v8, &KMPnPEvt_DriverDatabaseLoaded_Stop, 0LL, 3u, (PEVENT_DATA_DESCRIPTOR)&TargetKey);
      }
    }
  }
  return result;
}
