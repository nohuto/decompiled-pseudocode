/*
 * XREFs of PipEnumerateDevice @ 0x1403F1CBC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140008010 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PoFxActivateDevice @ 0x140008080 (PoFxActivateDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1400083C4 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PoFxIdleDevice @ 0x14000842C (PoFxIdleDevice.c)
 *     PnpDiagnosticTraceObject @ 0x1400084E8 (PnpDiagnosticTraceObject.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14000890C (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PipSetDevNodeState @ 0x14000962C (PipSetDevNodeState.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1403F1AE4 (PnpDeviceCompletionRequestCreate.c)
 *     PnpQueryDeviceRelations @ 0x1403F1B44 (PnpQueryDeviceRelations.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1403F2B90 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 */

__int64 __fastcall PipEnumerateDevice(__int64 a1, int a2, int a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int DeviceRelations; // ebx

  if ( a2
    || (PnpAsyncOptions & 2) == 0
    || (*(_DWORD *)(a1 + 396) & 0x800000) != 0
    || InitSafeBootMode
    || (v5 = PnpDeviceCompletionRequestCreate(a1, 781)) == 0LL )
  {
    if ( a3 && (*(_DWORD *)(a1 + 396) & 0x800000) != 0 )
      return (unsigned int)-1073741267;
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Start, (unsigned __int16 *)(a1 + 40));
    PipClearDevNodeFlags(a1, 8LL);
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v13 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x80u;
    DeviceRelations = PnpQueryDeviceRelations(v13, 0, 0LL, a1 + 528);
    PoFxIdleDevice(*(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 704) &= ~0x80u;
    *(_DWORD *)(a1 + 392) = DeviceRelations;
    PipSetDevNodeState(a1, 781);
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop, (unsigned __int16 *)(a1 + 40));
  }
  else
  {
    PipSetDevNodeState(a1, 780);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v6, v5);
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Start, (unsigned __int16 *)(a1 + 40));
    PipClearDevNodeFlags(a1, 8LL);
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v7 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x80u;
    v8 = PnpQueryDeviceRelations(v7, 0, (__int64)PnpDeviceCompletionRoutine, (__int64)v5);
    v10 = v8;
    if ( v8 == 259 )
    {
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Pend, (unsigned __int16 *)(a1 + 40));
      return v10;
    }
    if ( *((_DWORD *)v5 + 10) != v8 )
    {
      *((_DWORD *)v5 + 10) = v8;
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop, (unsigned __int16 *)(a1 + 40));
      PnpDeviceCompletionQueueDispatchedEntryCompleted(v12, v5);
    }
    PnpDeviceCompletionQueueRemoveCompletedRequest(v9, v5);
    PnpDeviceCompletionProcessCompletedRequest(v5);
  }
  return 0;
}
