/*
 * XREFs of PnpDeviceCompletionRoutine @ 0x1400CFE20
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1400CFF6C (PnpDeviceCompletionRequestDestroy.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1400CFF8C (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PnpTraceStartDevice @ 0x14012D2F0 (PnpTraceStartDevice.c)
 *     IoFindDeviceThatFailedIrp @ 0x14012FCCC (IoFindDeviceThatFailedIrp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDeviceCompletionRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  REGHANDLE v6; // rbp
  __int64 v7; // rsi
  int v8; // ecx
  __int64 DeviceThatFailedIrp; // rax
  __int16 v11; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]

  v3 = 0LL;
  *(_QWORD *)(*(_QWORD *)(a3 + 16) + 72LL) = 0LL;
  if ( *(_BYTE *)(a2 + 65) )
    *(_DWORD *)(a3 + 36) = 1;
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(a3 + 40) = *(_DWORD *)(a2 + 48);
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 56));
  if ( *(int *)(a3 + 40) < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2);
    if ( DeviceThatFailedIrp )
      v3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  PnpDeviceCompletionQueueDispatchedEntryCompleted(a1, a3);
  if ( *(_DWORD *)(a3 + 32) == 781 )
  {
    v6 = PnpEtwHandle;
    v7 = *(_QWORD *)(a3 + 16);
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceEnum_Stop) )
    {
      v8 = *(unsigned __int16 *)(v7 + 40);
      UserData.Reserved = 0;
      v15 = 0;
      v11 = (unsigned __int16)v8 >> 1;
      UserData.Ptr = (ULONGLONG)&v11;
      v13 = *(_QWORD *)(v7 + 48);
      v14 = v8;
      UserData.Size = 2;
      EtwWrite(v6, &KMPnPEvt_DeviceEnum_Stop, 0LL, 2u, &UserData);
    }
  }
  else
  {
    PnpTraceStartDevice(*(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 40), v3);
  }
  PnpDeviceCompletionRequestDestroy(a3);
  pIoFreeIrp(a2);
  return 3221225494LL;
}
