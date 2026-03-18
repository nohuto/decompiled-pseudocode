/*
 * XREFs of PnpStartDeviceNode @ 0x14045E860
 * Callers:
 *     PipProcessStartPhase1 @ 0x14045E75C (PipProcessStartPhase1.c)
 *     PnpReallocateResources @ 0x140695AF8 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x140697318 (PipProcessRestartPhase1.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PnpStartDevice @ 0x140026678 (PnpStartDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140026EF0 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140027140 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14012B9FC (PpMarkDeviceStackExtensionFlag.c)
 *     PnpTraceStartDevice @ 0x14012D2F0 (PnpTraceStartDevice.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     IopGetSessionIdFromPDO @ 0x14045E7E8 (IopGetSessionIdFromPDO.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140461A8C (PnpDeviceCompletionRequestCreate.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404E3D54 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PiSwProcessParentStartIrp @ 0x140538988 (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpStartDeviceNode(__int64 a1, int a2, int a3)
{
  int v5; // r14d
  __int64 *v6; // rsi
  REGHANDLE v7; // rdi
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int started; // edi
  REGHANDLE v13; // rsi
  unsigned __int16 v14; // ax
  REGHANDLE v15; // rdi
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // r8
  __int16 v22; // [rsp+58h] [rbp-19h] BYREF
  __int64 v23; // [rsp+60h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-9h] BYREF
  int v25; // [rsp+80h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp+17h] BYREF
  __int64 v27; // [rsp+98h] [rbp+27h]
  int v28; // [rsp+A0h] [rbp+2Fh]
  int v29; // [rsp+A4h] [rbp+33h]

  v5 = a2 != 0 ? 5 : 0;
  if ( !a2 && (unsigned int)IopGetSessionIdFromPDO(*(struct _DEVICE_OBJECT **)(a1 + 32)) != -1 )
    PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 1024, 1);
  if ( a3
    || (PnpAsyncOptions & 1) == 0
    || (*(_DWORD *)(a1 + 396) & 0x400000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x4000) != 0
    || InitSafeBootMode
    || (v6 = (__int64 *)PnpDeviceCompletionRequestCreate(a1, (unsigned int)(v5 + 774))) == 0LL )
  {
    v15 = PnpEtwHandle;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceStart_Start) )
    {
      v16 = *(_WORD *)(a1 + 40);
      v28 = v16;
      v22 = v16 >> 1;
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v22;
      v27 = *(_QWORD *)(a1 + 48);
      v29 = 0;
      EtwWrite(v15, &KMPnPEvt_DeviceStart_Start, 0LL, 2u, &UserData);
    }
    v25 = -1073741823;
    v23 = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDiagnosticCompletionRoutine, (__int64)&v23);
    if ( started == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      started = v25;
    }
    if ( started >= 0 )
    {
      v17 = *(_QWORD *)(a1 + 32);
      v18 = 0;
      v19 = v17;
      if ( v17 )
      {
        do
        {
          v20 = *(_DWORD *)(v19 + 52);
          v19 = *(_QWORD *)(v19 + 24);
          v18 |= v20 & 0x40000;
        }
        while ( v19 );
        if ( v18 )
        {
          do
          {
            *(_DWORD *)(v17 + 52) |= v18;
            v17 = *(_QWORD *)(v17 + 24);
          }
          while ( v17 );
        }
      }
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(a1 + 32));
    }
    v21 = v23;
    *(_DWORD *)(a1 + 392) = started;
    PnpTraceStartDevice(a1, started, v21);
    PipSetDevNodeState(a1, v5 + 774);
  }
  else
  {
    v7 = PnpEtwHandle;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceStart_Start) )
    {
      v8 = *(_WORD *)(a1 + 40);
      v28 = v8;
      v22 = v8 >> 1;
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v22;
      v27 = *(_QWORD *)(a1 + 48);
      v29 = 0;
      EtwWrite(v7, &KMPnPEvt_DeviceStart_Start, 0LL, 2u, &UserData);
    }
    PipSetDevNodeState(a1, 773);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v9, v6);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDeviceCompletionRoutine, (__int64)v6);
    if ( started == 259 )
    {
      v13 = PnpEtwHandle;
      if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceStart_Pend) )
      {
        v14 = *(_WORD *)(a1 + 40);
        v28 = v14;
        v22 = v14 >> 1;
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v22;
        v27 = *(_QWORD *)(a1 + 48);
        v29 = 0;
        EtwWrite(v13, &KMPnPEvt_DeviceStart_Pend, 0LL, 2u, &UserData);
      }
    }
    else
    {
      PnpDeviceCompletionQueueRemoveCompletedRequest(v10, v6);
      return (unsigned int)PnpDeviceCompletionProcessCompletedRequest(v6);
    }
  }
  return (unsigned int)started;
}
