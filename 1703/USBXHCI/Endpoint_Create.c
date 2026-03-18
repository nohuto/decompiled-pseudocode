/*
 * XREFs of Endpoint_Create @ 0x1C0054A74
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00550D0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C00552C0 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Endpoint_CreateClearStallContext @ 0x1C001D558 (Endpoint_CreateClearStallContext.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C00222DC (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C002242C (WPP_RECORDER_SF_ddqDdd.c)
 *     TR_GetWdfQueue @ 0x1C00254DC (TR_GetWdfQueue.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C002CA40 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C0030FB0 (Etw_EndpointCreate.c)
 *     Endpoint_SetType @ 0x1C0055080 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C0055924 (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v8; // r14
  unsigned int v9; // ebx
  int ClearStallContext; // edi
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned __int16 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rax
  struct _DEVICE_OBJECT *v19; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  PWDF_DRIVER_GLOBALS v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  __int64 WdfQueue; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v36; // [rsp+20h] [rbp-89h]
  __int64 v37; // [rsp+28h] [rbp-81h]
  __int64 v38; // [rsp+30h] [rbp-79h]
  __int64 v39; // [rsp+38h] [rbp-71h]
  _QWORD v40[5]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v41[13]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v42; // [rsp+110h] [rbp+67h] BYREF
  __int64 v43; // [rsp+118h] [rbp+6Fh] BYREF

  v42 = a3;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0045340);
  v9 = *(unsigned __int8 *)(a4 + 2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    a2,
    off_1C0045250);
  HIDWORD(v39) = HIDWORD(a4);
  WPP_RECORDER_SF_ddqDdd(v8[8], v9 >> 7, (v9 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F), *(_BYTE *)(a4 + 3) & 3, v36);
  memset(v41, 0, 0x38uLL);
  LODWORD(v41[0]) = 56;
  v41[3] = 0x100000001LL;
  v41[6] = off_1C0045188;
  v41[1] = Endpoint_EvtEndpointCleanupCallback;
  ClearStallContext = ((__int64 (__fastcall *)(void *, __int64, __int64 *, _QWORD *, __int64 *))qword_1C0046770)(
                        WPP_MAIN_CB.Dpc.SystemArgument2,
                        a2,
                        &v42,
                        v41,
                        &v43);
  if ( ClearStallContext < 0 )
  {
    v11 = *(unsigned __int8 *)(a4 + 2);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C0045250);
    LODWORD(v39) = ClearStallContext;
    v13 = 14;
    LODWORD(v38) = (v11 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v37) = *(unsigned __int8 *)(v12 + 135);
LABEL_3:
    WPP_RECORDER_SF_ddd(v8[8], 2u, 0xCu, v13, (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids, v37, v38, v39);
    return (unsigned int)ClearStallContext;
  }
  v14 = *(unsigned __int8 *)(a4 + 2);
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          a2,
          off_1C0045250);
  WPP_RECORDER_SF_ddq(
    v8[8],
    4u,
    0xCu,
    0xFu,
    (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
    *(unsigned __int8 *)(v15 + 135),
    (v14 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
    v43);
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v43,
          off_1C0045188);
  KeInitializeEvent((PRKEVENT)(v16 + 40), NotificationEvent, 0);
  memset(v40, 0, sizeof(v40));
  LODWORD(v40[2]) = 0;
  LODWORD(v40[3]) = 0;
  LODWORD(v40[0]) = 40;
  v40[1] = Endpoint_WdfEvtStateMachineTimer;
  BYTE4(v40[2]) = 1;
  memset(v41, 0, 0x38uLL);
  v41[4] = v43;
  LODWORD(v41[0]) = 56;
  v41[3] = 0x100000001LL;
  ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015
                                                                                                  + 2544))(
                        WdfDriverGlobals,
                        v40,
                        v41,
                        v16 + 1280);
  if ( ClearStallContext < 0 )
  {
    v17 = *(unsigned __int8 *)(a4 + 2);
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C0045250);
    v13 = 16;
    LODWORD(v39) = ClearStallContext;
    LODWORD(v38) = (v17 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v37) = *(unsigned __int8 *)(v18 + 135);
    goto LABEL_3;
  }
  v19 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   *v8);
  WorkItem = IoAllocateWorkItem(v19);
  *(_QWORD *)(v16 + 1256) = WorkItem;
  if ( !WorkItem )
  {
    v21 = *(unsigned __int8 *)(a4 + 2);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C0045250);
    LODWORD(v38) = (v21 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v37) = *(unsigned __int8 *)(v22 + 135);
    WPP_RECORDER_SF_dd(v8[8], 2u, 0xCu, 0x11u, (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids, v37, v38);
    return (unsigned int)-1073741670;
  }
  *(_DWORD *)(v16 + 1124) = 2000;
  *(_QWORD *)(v16 + 1240) = &ESMStateTable;
  v23 = WdfFunctions_01015;
  *(_DWORD *)(v16 + 1248) = 2000;
  v24 = WdfDriverGlobals;
  *(_DWORD *)(v16 + 1152) = 0;
  *(_QWORD *)(v16 + 1232) = v16;
  *(_QWORD *)v16 = v8;
  *(_QWORD *)(v16 + 8) = a2;
  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v23 + 1616))(v24, a2, off_1C0045250);
  v26 = a5;
  *(_QWORD *)(v16 + 16) = v25;
  *(_QWORD *)(v16 + 136) = 0LL;
  *(_QWORD *)(v16 + 248) = 0LL;
  *(_DWORD *)(v16 + 96) = *(_DWORD *)a4;
  *(_WORD *)(v16 + 100) = *(_WORD *)(a4 + 4);
  *(_BYTE *)(v16 + 102) = *(_BYTE *)(a4 + 6);
  if ( v26 )
  {
    *(_DWORD *)(v16 + 103) = *(_DWORD *)v26;
    *(_WORD *)(v16 + 107) = *(_WORD *)(v26 + 4);
  }
  if ( a6 )
    *(_QWORD *)(v16 + 109) = *a6;
  Endpoint_SetType(v16);
  v27 = *(_BYTE *)(v16 + 98) & 0xF;
  if ( (unsigned int)(*(_DWORD *)(v16 + 120) - 1) > 2 )
    v28 = 2 * v27 + 1;
  else
    v28 = 2 * v27;
  *(_DWORD *)(v16 + 144) = v28;
  if ( *(_DWORD *)(*(_QWORD *)(v16 + 16) + 20LL) == 3
    && (*(_BYTE *)(v16 + 99) & 3) == 2
    && (*(_BYTE *)(v16 + 106) & 0x1F) != 0 )
  {
    v29 = *(_QWORD *)v16;
    *(_BYTE *)(v16 + 37) = 1;
    if ( (*(_QWORD *)(v29 + 232) & 0x200000LL) != 0 )
    {
      ClearStallContext = Endpoint_CreateClearStallContext(v16);
      if ( ClearStallContext < 0 )
      {
        v30 = *(_DWORD *)(v16 + 144);
        v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a2,
                off_1C0045250);
        v13 = 18;
LABEL_21:
        LODWORD(v39) = ClearStallContext;
        LODWORD(v38) = v30;
        LODWORD(v37) = *(unsigned __int8 *)(v31 + 135);
        goto LABEL_3;
      }
    }
  }
  else
  {
    *(_BYTE *)(v16 + 37) = 0;
  }
  ClearStallContext = TR_Create((_DWORD)v8, v16, v43, *(_BYTE *)(v16 + 37) != 0, v16 + 88);
  if ( ClearStallContext < 0 )
  {
    v30 = *(_DWORD *)(v16 + 144);
    v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C0045250);
    v13 = 19;
    goto LABEL_21;
  }
  WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v16 + 88));
  ((void (__fastcall *)(void *, __int64, __int64))qword_1C0046798)(WPP_MAIN_CB.Dpc.SystemArgument2, v43, WdfQueue);
  if ( *(_DWORD *)(v16 + 144) == 1 )
    *(_QWORD *)(*(_QWORD *)(v16 + 16) + 176LL) = v16;
  v33 = *(_QWORD *)(v16 + 16);
  *(_QWORD *)(v16 + 24) = v43;
  UsbDevice_AddEndpointToDeviceEndpointList(v33, v43, (_QWORD *)(v16 + 64));
  Etw_EndpointCreate(v34, (_QWORD *)v16);
  return (unsigned int)ClearStallContext;
}
