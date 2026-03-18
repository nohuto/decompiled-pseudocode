/*
 * XREFs of PipEnumerateDevice @ 0x1404616A8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PoFxIdleDevice @ 0x140026DEC (PoFxIdleDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140026EF0 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PoFxActivateDevice @ 0x140026F90 (PoFxActivateDevice.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140027140 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1400CFF8C (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PnpQueryDeviceRelations @ 0x140461830 (PnpQueryDeviceRelations.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140461A8C (PnpDeviceCompletionRequestCreate.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404E3D54 (PnpDeviceCompletionProcessCompletedRequest.c)
 */

__int64 __fastcall PipEnumerateDevice(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  REGHANDLE v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  int v15; // r8d
  REGHANDLE v16; // rbx
  int v17; // r8d
  REGHANDLE v18; // rsi
  int v19; // r8d
  REGHANDLE v20; // rbx
  int v21; // edx
  __int64 v22; // rcx
  int DeviceRelations; // ebx
  REGHANDLE v24; // rbx
  int v25; // edx
  __int16 v26; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h]
  int v29; // [rsp+50h] [rbp-10h]
  int v30; // [rsp+54h] [rbp-Ch]

  if ( a2
    || (PnpAsyncOptions & 2) == 0
    || (*(_DWORD *)(a1 + 396) & 0x800000) != 0
    || InitSafeBootMode
    || (v5 = PnpDeviceCompletionRequestCreate(a1, 781LL)) == 0 )
  {
    if ( a3 && (*(_DWORD *)(a1 + 396) & 0x800000) != 0 )
      return (unsigned int)-1073741267;
    v20 = PnpEtwHandle;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceEnum_Start) )
    {
      v21 = *(unsigned __int16 *)(a1 + 40);
      UserData.Reserved = 0;
      v30 = 0;
      v26 = (unsigned __int16)v21 >> 1;
      UserData.Ptr = (ULONGLONG)&v26;
      v28 = *(_QWORD *)(a1 + 48);
      v29 = v21;
      UserData.Size = 2;
      EtwWrite(v20, &KMPnPEvt_DeviceEnum_Start, 0LL, 2u, &UserData);
    }
    PipClearDevNodeFlags(a1, 8LL);
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v22 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x80u;
    DeviceRelations = PnpQueryDeviceRelations(v22, 0LL, 0LL, a1 + 528);
    PoFxIdleDevice(*(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 704) &= ~0x80u;
    *(_DWORD *)(a1 + 392) = DeviceRelations;
    PipSetDevNodeState(a1, 781);
    v24 = PnpEtwHandle;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceEnum_Stop) )
    {
      v25 = *(unsigned __int16 *)(a1 + 40);
      UserData.Reserved = 0;
      v30 = 0;
      v26 = (unsigned __int16)v25 >> 1;
      UserData.Ptr = (ULONGLONG)&v26;
      v28 = *(_QWORD *)(a1 + 48);
      v29 = v25;
      UserData.Size = 2;
      EtwWrite(v24, &KMPnPEvt_DeviceEnum_Stop, 0LL, 2u, &UserData);
    }
    return 0;
  }
  PipSetDevNodeState(a1, 780);
  *(_DWORD *)(a1 + 392) = 259;
  PnpDeviceCompletionQueueAddDispatchedRequest(v6, (__int64 *)v5);
  v7 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceEnum_Start) )
  {
    v15 = *(unsigned __int16 *)(a1 + 40);
    UserData.Reserved = 0;
    v30 = 0;
    v26 = (unsigned __int16)v15 >> 1;
    UserData.Ptr = (ULONGLONG)&v26;
    v28 = *(_QWORD *)(a1 + 48);
    v29 = v15;
    UserData.Size = 2;
    EtwWrite(v7, &KMPnPEvt_DeviceEnum_Start, 0LL, 2u, &UserData);
  }
  PipClearDevNodeFlags(a1, 8LL);
  PoFxActivateDevice(*(_QWORD *)(a1 + 32));
  v8 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 704) |= 0x80u;
  v9 = PnpQueryDeviceRelations(v8, 0LL, PnpDeviceCompletionRoutine, v5);
  v13 = v9;
  if ( v9 != 259 )
  {
    if ( *(_DWORD *)(v5 + 40) != v9 )
    {
      v18 = PnpEtwHandle;
      *(_DWORD *)(v5 + 40) = v9;
      if ( v18 && EtwEventEnabled(v18, &KMPnPEvt_DeviceEnum_Stop) )
      {
        v19 = *(unsigned __int16 *)(a1 + 40);
        UserData.Reserved = 0;
        v30 = 0;
        v26 = (unsigned __int16)v19 >> 1;
        UserData.Ptr = (ULONGLONG)&v26;
        v28 = *(_QWORD *)(a1 + 48);
        v29 = v19;
        UserData.Size = 2;
        EtwWrite(v18, &KMPnPEvt_DeviceEnum_Stop, 0LL, 2u, &UserData);
      }
      PnpDeviceCompletionQueueDispatchedEntryCompleted(v10, (__int64 *)v5, v11, v12);
    }
    PnpDeviceCompletionQueueRemoveCompletedRequest(v10, (_QWORD *)v5);
    PnpDeviceCompletionProcessCompletedRequest(v5);
    return 0;
  }
  v16 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceEnum_Pend) )
  {
    v17 = *(unsigned __int16 *)(a1 + 40);
    UserData.Reserved = 0;
    v30 = 0;
    v26 = (unsigned __int16)v17 >> 1;
    UserData.Ptr = (ULONGLONG)&v26;
    v28 = *(_QWORD *)(a1 + 48);
    v29 = v17;
    UserData.Size = 2;
    EtwWrite(v16, &KMPnPEvt_DeviceEnum_Pend, 0LL, 2u, &UserData);
  }
  return v13;
}
