/*
 * XREFs of PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x1400084E8 (PnpDiagnosticTraceObject.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400B1388 (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwSetEvent @ 0x140159E40 (ZwSetEvent.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwResetEvent @ 0x14015C920 (ZwResetEvent.c)
 *     ZwUnloadKey2 @ 0x14015D300 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x14015D320 (ZwUnloadKeyEx.c)
 *     PiDrvDbLoadHive @ 0x1404ECFBC (PiDrvDbLoadHive.c)
 *     _SysCtxRegOpenKey @ 0x1404FDB8C (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x1404FE7B0 (_PnpGetObjectProperty.c)
 */

NTSTATUS __fastcall PiDrvDbLoadNodeWorkerCallback(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  int v3; // eax
  int v4; // ebx
  __int64 v5; // r8
  void *v6; // rdx
  int v7; // eax
  NTSTATUS result; // eax
  __int64 v9; // rax
  OBJECT_ATTRIBUTES TargetKey; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v11; // [rsp+D0h] [rbp+67h] BYREF
  int v12; // [rsp+D8h] [rbp+6Fh] BYREF
  int v13; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = (unsigned __int16 *)(a1 + 16);
  v12 = 1;
  Handle = 0LL;
  v13 = 0;
  v11 = 0;
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
                  (__int64)&v12,
                  (__int64)&v11,
                  4,
                  (__int64)&v13,
                  0) >= 0
        && v12 == 7
        && v13 == 4 )
      {
        v9 = v11;
      }
      else
      {
        v9 = 120000LL;
        v11 = 120000;
      }
      if ( (_DWORD)v9 != -1 )
        *(_QWORD *)(a1 + 480) = -10000 * v9;
    }
    ZwClose(Handle);
    ZwResetEvent(*(HANDLE *)(a1 + 472), 0LL);
    v6 = *(void **)(a1 + 472);
    TargetKey.Length = 48;
    TargetKey.RootDirectory = 0LL;
    TargetKey.Attributes = 576;
    TargetKey.ObjectName = (PUNICODE_STRING)(a1 + 32);
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    if ( v6 )
      v7 = ZwUnloadKeyEx(&TargetKey, v6);
    else
      v7 = ZwUnloadKey2((__int64)&TargetKey, 0LL, v5);
    v4 = v7;
    if ( v7 == 259 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    if ( v7 < 0 )
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
