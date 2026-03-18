/*
 * XREFs of Endpoint_Create @ 0x1C0050C7C
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00512A0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C0051490 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BF0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     TR_GetWdfQueue @ 0x1C00110FC (TR_GetWdfQueue.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0020CB0 (Endpoint_CreateClearStallContext.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C00258C8 (WPP_RECORDER_SF_ddqDdd.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C00261D0 (WPP_RECORDER_SF_DDX.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C002F910 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C0033BD0 (Etw_EndpointCreate.c)
 *     Endpoint_SetType @ 0x1C0051258 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C0051C78 (TR_Create.c)
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
  PWDF_DRIVER_GLOBALS v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  int v29; // ebx
  __int64 WdfQueue; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v34; // [rsp+20h] [rbp-89h]
  __int64 v35; // [rsp+28h] [rbp-81h]
  __int64 v36; // [rsp+30h] [rbp-79h]
  __int64 v37; // [rsp+38h] [rbp-71h]
  _QWORD v38[5]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v39[13]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v40; // [rsp+110h] [rbp+67h] BYREF
  __int64 v41; // [rsp+118h] [rbp+6Fh] BYREF

  v40 = a3;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C00410E8);
  v9 = *(unsigned __int8 *)(a4 + 2) >> 7;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    a2,
    off_1C0041318);
  HIDWORD(v37) = HIDWORD(a4);
  WPP_RECORDER_SF_ddqDdd(
    v8[8],
    v9 + 2 * (*(_BYTE *)(a4 + 2) & 0x7Fu),
    *(_BYTE *)(a4 + 3) & 3,
    *(_WORD *)(a4 + 4) & 0x7FF,
    v34);
  memset(v39, 0, 0x38uLL);
  LODWORD(v39[0]) = 56;
  v39[3] = 0x100000001LL;
  v39[6] = off_1C0041138;
  v39[1] = Endpoint_EvtEndpointCleanupCallback;
  ClearStallContext = ((__int64 (__fastcall *)(void *, __int64, __int64 *, _QWORD *, __int64 *))qword_1C0042790)(
                        WPP_MAIN_CB.Dpc.DpcData,
                        a2,
                        &v40,
                        v39,
                        &v41);
  if ( ClearStallContext < 0 )
  {
    v11 = *(unsigned __int8 *)(a4 + 2) >> 7;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C0041318);
    LODWORD(v37) = ClearStallContext;
    v13 = 14;
    LODWORD(v36) = v11 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
LABEL_3:
    LODWORD(v35) = *(unsigned __int8 *)(v12 + 135);
    WPP_RECORDER_SF_ddd(v8[8], 2u, 0xCu, v13, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v35, v36, v37);
    return (unsigned int)ClearStallContext;
  }
  v14 = *(unsigned __int8 *)(a4 + 2) >> 7;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          a2,
          off_1C0041318);
  WPP_RECORDER_SF_DDX(
    v8[8],
    4u,
    0xCu,
    0xFu,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    *(unsigned __int8 *)(v15 + 135),
    v14 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
    v41);
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v41,
          off_1C0041138);
  KeInitializeEvent((PRKEVENT)(v16 + 40), NotificationEvent, 0);
  memset(v38, 0, sizeof(v38));
  LODWORD(v38[2]) = 0;
  LODWORD(v38[3]) = 0;
  LODWORD(v38[0]) = 40;
  v38[1] = Endpoint_WdfEvtStateMachineTimer;
  BYTE4(v38[2]) = 1;
  memset(v39, 0, 0x38uLL);
  v39[4] = v41;
  LODWORD(v39[0]) = 56;
  v39[3] = 0x100000001LL;
  ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015
                                                                                                  + 2544))(
                        WdfDriverGlobals,
                        v38,
                        v39,
                        v16 + 1280);
  if ( ClearStallContext < 0 )
  {
    v17 = *(unsigned __int8 *)(a4 + 2) >> 7;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C0041318);
    v13 = 16;
    LODWORD(v37) = ClearStallContext;
    LODWORD(v36) = v17 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    goto LABEL_3;
  }
  v18 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   *v8);
  WorkItem = IoAllocateWorkItem(v18);
  *(_QWORD *)(v16 + 1256) = WorkItem;
  if ( !WorkItem )
  {
    v20 = *(unsigned __int8 *)(a4 + 2) >> 7;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C0041318);
    LODWORD(v36) = v20 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v35) = *(unsigned __int8 *)(v21 + 135);
    WPP_RECORDER_SF_dd(v8[8], 2u, 0xCu, 0x11u, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v35, v36);
    return (unsigned int)-1073741670;
  }
  *(_DWORD *)(v16 + 1124) = 2000;
  *(_QWORD *)(v16 + 1240) = &ESMStateTable;
  v22 = WdfFunctions_01015;
  *(_DWORD *)(v16 + 1248) = 2000;
  v23 = WdfDriverGlobals;
  *(_DWORD *)(v16 + 1152) = 0;
  *(_QWORD *)(v16 + 1232) = v16;
  *(_QWORD *)v16 = v8;
  *(_QWORD *)(v16 + 8) = a2;
  v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v22 + 1616))(v23, a2, off_1C0041318);
  v25 = a5;
  *(_QWORD *)(v16 + 16) = v24;
  *(_QWORD *)(v16 + 136) = 0LL;
  *(_QWORD *)(v16 + 248) = 0LL;
  *(_DWORD *)(v16 + 96) = *(_DWORD *)a4;
  *(_WORD *)(v16 + 100) = *(_WORD *)(a4 + 4);
  *(_BYTE *)(v16 + 102) = *(_BYTE *)(a4 + 6);
  if ( v25 )
  {
    *(_DWORD *)(v16 + 103) = *(_DWORD *)v25;
    *(_WORD *)(v16 + 107) = *(_WORD *)(v25 + 4);
  }
  if ( a6 )
    *(_QWORD *)(v16 + 109) = *a6;
  Endpoint_SetType(v16);
  v26 = *(_BYTE *)(v16 + 98) & 0xF;
  if ( (unsigned int)(*(_DWORD *)(v16 + 120) - 1) > 2 )
    v27 = 2 * v26 + 1;
  else
    v27 = 2 * v26;
  *(_DWORD *)(v16 + 144) = v27;
  if ( *(_DWORD *)(*(_QWORD *)(v16 + 16) + 20LL) == 3
    && (*(_BYTE *)(v16 + 99) & 3) == 2
    && (*(_BYTE *)(v16 + 106) & 0x1F) != 0 )
  {
    v28 = *(_QWORD *)v16;
    *(_BYTE *)(v16 + 37) = 1;
    if ( (*(_QWORD *)(v28 + 232) & 0x200000LL) != 0 )
    {
      ClearStallContext = Endpoint_CreateClearStallContext(v16);
      if ( ClearStallContext < 0 )
      {
        v29 = *(_DWORD *)(v16 + 144);
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a2,
                off_1C0041318);
        v13 = 18;
LABEL_21:
        LODWORD(v37) = ClearStallContext;
        LODWORD(v36) = v29;
        goto LABEL_3;
      }
    }
  }
  else
  {
    *(_BYTE *)(v16 + 37) = 0;
  }
  ClearStallContext = TR_Create((_DWORD)v8, v16, v41, *(_BYTE *)(v16 + 37) != 0, v16 + 88);
  if ( ClearStallContext < 0 )
  {
    v29 = *(_DWORD *)(v16 + 144);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C0041318);
    v13 = 19;
    goto LABEL_21;
  }
  WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v16 + 88));
  ((void (__fastcall *)(void *, __int64, __int64))qword_1C00427B8)(WPP_MAIN_CB.Dpc.DpcData, v41, WdfQueue);
  if ( *(_DWORD *)(v16 + 144) == 1 )
    *(_QWORD *)(*(_QWORD *)(v16 + 16) + 176LL) = v16;
  v31 = *(_QWORD *)(v16 + 16);
  *(_QWORD *)(v16 + 24) = v41;
  UsbDevice_AddEndpointToDeviceEndpointList(v31, v41, (_QWORD *)(v16 + 64));
  Etw_EndpointCreate(v32, (_QWORD *)v16);
  return (unsigned int)ClearStallContext;
}
