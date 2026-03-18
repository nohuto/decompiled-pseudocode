/*
 * XREFs of Endpoint_Create @ 0x1C004FC0C
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0050230 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C0050420 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0003980 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     TR_GetWdfQueue @ 0x1C000807C (TR_GetWdfQueue.c)
 *     Endpoint_CreateClearStallContext @ 0x1C00175A0 (Endpoint_CreateClearStallContext.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C001C5D8 (WPP_RECORDER_SF_DDX.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C001C720 (WPP_RECORDER_SF_ddqDdd.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C002E700 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C0032C00 (Etw_EndpointCreate.c)
 *     Endpoint_SetType @ 0x1C00501E8 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C0050C08 (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v8; // r14
  int v9; // ebx
  int ClearStallContext; // edi
  int v11; // ebx
  __int64 v12; // rax
  unsigned __int16 v13; // r9
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // ebx
  struct _DEVICE_OBJECT *v18; // rax
  PIO_WORKITEM WorkItem; // rax
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  int v27; // ebx
  __int64 WdfQueue; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v32; // [rsp+20h] [rbp-89h]
  __int64 v33; // [rsp+28h] [rbp-81h]
  __int64 v34; // [rsp+30h] [rbp-79h]
  __int64 v35; // [rsp+38h] [rbp-71h]
  _QWORD v36[5]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v37[13]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v38; // [rsp+110h] [rbp+67h] BYREF
  __int64 v39; // [rsp+118h] [rbp+6Fh] BYREF

  v38 = a3;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   a1,
                   off_1C00400B8);
  v9 = *(unsigned __int8 *)(a4 + 2) >> 7;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a2,
    off_1C00402E8);
  HIDWORD(v35) = HIDWORD(a4);
  WPP_RECORDER_SF_ddqDdd(
    v8[8],
    v9 + 2 * (*(_BYTE *)(a4 + 2) & 0x7Fu),
    *(_BYTE *)(a4 + 3) & 3,
    *(_WORD *)(a4 + 4) & 0x7FF,
    v32);
  memset(v37, 0, 0x38uLL);
  LODWORD(v37[0]) = 56;
  v37[3] = 0x100000001LL;
  v37[6] = off_1C0040108;
  v37[1] = Endpoint_EvtEndpointCleanupCallback;
  ClearStallContext = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD *, __int64 *))qword_1C0041550)(
                        UcxGlobals,
                        a2,
                        &v38,
                        v37,
                        &v39);
  if ( ClearStallContext < 0 )
  {
    v11 = *(unsigned __int8 *)(a4 + 2) >> 7;
    v12 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            a2,
            off_1C00402E8);
    LODWORD(v35) = ClearStallContext;
    v13 = 14;
    LODWORD(v34) = v11 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
LABEL_3:
    LODWORD(v33) = *(unsigned __int8 *)(v12 + 135);
    WPP_RECORDER_SF_ddd(v8[8], 2u, 0xCu, v13, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v33, v34, v35);
    return (unsigned int)ClearStallContext;
  }
  v14 = *(unsigned __int8 *)(a4 + 2) >> 7;
  v15 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          a2,
          off_1C00402E8);
  WPP_RECORDER_SF_DDX(
    v8[8],
    4u,
    0xCu,
    0xFu,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    *(unsigned __int8 *)(v15 + 135),
    v14 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
    v39);
  v16 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          v39,
          off_1C0040108);
  KeInitializeEvent((PRKEVENT)(v16 + 40), NotificationEvent, 0);
  memset(v36, 0, sizeof(v36));
  LODWORD(v36[2]) = 0;
  LODWORD(v36[3]) = 0;
  LODWORD(v36[0]) = 40;
  v36[1] = Endpoint_WdfEvtStateMachineTimer;
  BYTE4(v36[2]) = 1;
  memset(v37, 0, 0x38uLL);
  v37[4] = v39;
  LODWORD(v37[0]) = 56;
  v37[3] = 0x100000001LL;
  ClearStallContext = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
                        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                        v36,
                        v37,
                        v16 + 1280);
  if ( ClearStallContext < 0 )
  {
    v17 = *(unsigned __int8 *)(a4 + 2) >> 7;
    v12 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            a2,
            off_1C00402E8);
    v13 = 16;
    LODWORD(v35) = ClearStallContext;
    LODWORD(v34) = v17 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    goto LABEL_3;
  }
  v18 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 248))(
                                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                                   *v8);
  WorkItem = IoAllocateWorkItem(v18);
  *(_QWORD *)(v16 + 1256) = WorkItem;
  if ( !WorkItem )
  {
    v20 = *(unsigned __int8 *)(a4 + 2) >> 7;
    v21 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            a2,
            off_1C00402E8);
    LODWORD(v34) = v20 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v33) = *(unsigned __int8 *)(v21 + 135);
    WPP_RECORDER_SF_dd(v8[8], 2u, 0xCu, 0x11u, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v33, v34);
    return (unsigned int)-1073741670;
  }
  *(_DWORD *)(v16 + 1124) = 2000;
  *(_DWORD *)(v16 + 1152) = 0;
  *(_QWORD *)(v16 + 1240) = &ESMStateTable;
  *(_DWORD *)(v16 + 1248) = 2000;
  *(_QWORD *)(v16 + 1232) = v16;
  *(_QWORD *)v16 = v8;
  *(_QWORD *)(v16 + 8) = a2;
  v22 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          a2,
          off_1C00402E8);
  v23 = a5;
  *(_QWORD *)(v16 + 16) = v22;
  *(_QWORD *)(v16 + 136) = 0LL;
  *(_QWORD *)(v16 + 248) = 0LL;
  *(_DWORD *)(v16 + 96) = *(_DWORD *)a4;
  *(_WORD *)(v16 + 100) = *(_WORD *)(a4 + 4);
  *(_BYTE *)(v16 + 102) = *(_BYTE *)(a4 + 6);
  if ( v23 )
  {
    *(_DWORD *)(v16 + 103) = *(_DWORD *)v23;
    *(_WORD *)(v16 + 107) = *(_WORD *)(v23 + 4);
  }
  if ( a6 )
    *(_QWORD *)(v16 + 109) = *a6;
  Endpoint_SetType(v16);
  v24 = *(_BYTE *)(v16 + 98) & 0xF;
  if ( (unsigned int)(*(_DWORD *)(v16 + 120) - 1) > 2 )
    v25 = 2 * v24 + 1;
  else
    v25 = 2 * v24;
  *(_DWORD *)(v16 + 144) = v25;
  if ( *(_DWORD *)(*(_QWORD *)(v16 + 16) + 20LL) == 3
    && (*(_BYTE *)(v16 + 99) & 3) == 2
    && (*(_BYTE *)(v16 + 106) & 0x1F) != 0 )
  {
    v26 = *(_QWORD *)v16;
    *(_BYTE *)(v16 + 37) = 1;
    if ( (*(_QWORD *)(v26 + 232) & 0x200000LL) != 0 )
    {
      ClearStallContext = Endpoint_CreateClearStallContext(v16);
      if ( ClearStallContext < 0 )
      {
        v27 = *(_DWORD *)(v16 + 144);
        v12 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                a2,
                off_1C00402E8);
        v13 = 18;
LABEL_21:
        LODWORD(v35) = ClearStallContext;
        LODWORD(v34) = v27;
        goto LABEL_3;
      }
    }
  }
  else
  {
    *(_BYTE *)(v16 + 37) = 0;
  }
  ClearStallContext = TR_Create((_DWORD)v8, v16, v39, *(_BYTE *)(v16 + 37) != 0, v16 + 88);
  if ( ClearStallContext < 0 )
  {
    v27 = *(_DWORD *)(v16 + 144);
    v12 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            a2,
            off_1C00402E8);
    v13 = 19;
    goto LABEL_21;
  }
  WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v16 + 88));
  ((void (__fastcall *)(__int64, __int64, __int64))qword_1C0041578)(UcxGlobals, v39, WdfQueue);
  if ( *(_DWORD *)(v16 + 144) == 1 )
    *(_QWORD *)(*(_QWORD *)(v16 + 16) + 176LL) = v16;
  v29 = *(_QWORD *)(v16 + 16);
  *(_QWORD *)(v16 + 24) = v39;
  UsbDevice_AddEndpointToDeviceEndpointList(v29, v39, (_QWORD *)(v16 + 64));
  Etw_EndpointCreate(v30, (_QWORD *)v16);
  return (unsigned int)ClearStallContext;
}
