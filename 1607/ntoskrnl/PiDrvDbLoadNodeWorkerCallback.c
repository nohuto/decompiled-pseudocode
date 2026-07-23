/*
 * XREFs of PiDrvDbLoadNodeWorkerCallback @ 0x1403F0C88
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14000805C (PnpDiagnosticTraceObject.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400AF2C8 (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwSetEvent @ 0x14015A3B0 (ZwSetEvent.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwResetEvent @ 0x14015CE90 (ZwResetEvent.c)
 *     ZwUnloadKey2 @ 0x14015D870 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x14015D890 (ZwUnloadKeyEx.c)
 *     PiDrvDbLoadHive @ 0x1404CF128 (PiDrvDbLoadHive.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 */

NTSTATUS __fastcall PiDrvDbLoadNodeWorkerCallback(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  int v3; // eax
  int v4; // ebx
  void *v5; // rdx
  NTSTATUS v6; // eax
  NTSTATUS result; // eax
  __int64 v8; // rax
  OBJECT_ATTRIBUTES TargetKey; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v10; // [rsp+D0h] [rbp+67h] BYREF
  int v11; // [rsp+D8h] [rbp+6Fh] BYREF
  int v12; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = (unsigned __int16 *)(a1 + 16);
  v11 = 1;
  Handle = 0LL;
  v12 = 0;
  v10 = 0;
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoad_Start, (unsigned __int16 *)(a1 + 16));
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoaded_Start, v1);
  v3 = PiDrvDbLoadHive(a1 + 32, a1 + 48, &Handle);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 || v3 == -1073741766 )
      *(_BYTE *)(a1 + 80) = 1;
  }
  else
  {
    if ( (int)SysCtxRegOpenKey(0, (_DWORD)Handle, (unsigned int)L"DriverDatabase", 0, 0x2000000, a1 + 72) < 0 )
    {
      *(_BYTE *)(a1 + 80) = 1;
    }
    else if ( *(_QWORD *)(a1 + 480) == 0xFFFFFFFFLL )
    {
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 24),
                  6,
                  *(_QWORD *)(a1 + 72),
                  0LL,
                  (__int64)&DEVPKEY_DriverDatabase_UnloadTimeout,
                  (__int64)&v11,
                  (__int64)&v10,
                  4,
                  (__int64)&v12,
                  0) >= 0
        && v11 == 7
        && v12 == 4 )
      {
        v8 = v10;
      }
      else
      {
        v8 = 120000LL;
        v10 = 120000;
      }
      if ( (_DWORD)v8 != -1 )
        *(_QWORD *)(a1 + 480) = -10000 * v8;
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
    v4 = v6;
    if ( v6 == 259 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    if ( v6 < 0 )
      v4 = 0;
    ZwSetEvent(*(HANDLE *)(a1 + 472), 0LL);
  }
  if ( v4 == -1073741431 )
    v4 = -1073741077;
LABEL_8:
  *(_DWORD *)(a1 + 256) = v4;
  KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
  result = PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoad_Stop, v1, v4);
  if ( v4 < 0 )
    return PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, v1, v4);
  return result;
}
