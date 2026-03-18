/*
 * XREFs of HUBPDO_CreatePdoInternal @ 0x1C0067804
 * Callers:
 *     HUBPDO_CreatePdo @ 0x1C00688AC (HUBPDO_CreatePdo.c)
 *     HUBPDO_CreateUnknownPdo @ 0x1C006896C (HUBPDO_CreateUnknownPdo.c)
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_ppqq @ 0x1C000F8F0 (Template_ppqq.c)
 *     WPP_RECORDER_SF_qDDDdddddd @ 0x1C000FDEC (WPP_RECORDER_SF_qDDDdddddd.c)
 *     HUBPDO_RegisterForPowerSettingsForDevice @ 0x1C001455C (HUBPDO_RegisterForPowerSettingsForDevice.c)
 *     HUBPDO_RegisterForPowerSettingsForHub @ 0x1C00146A0 (HUBPDO_RegisterForPowerSettingsForHub.c)
 *     HUBIDLE_AddEvent @ 0x1C002FEE8 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 *     HUBPDO_MakePdoName @ 0x1C0067548 (HUBPDO_MakePdoName.c)
 *     HUBPDO_AssignPDOIds @ 0x1C006761C (HUBPDO_AssignPDOIds.c)
 *     WMI_FireNotification @ 0x1C007057C (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_CreatePdoInternal(__int64 a1, char a2)
{
  int v2; // r14d
  char v3; // r13
  char v4; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  char v11; // r15
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r9
  unsigned __int16 v15; // r9
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  int PdoName; // eax
  unsigned __int16 v20; // r9
  int v21; // edi
  int v22; // eax
  char v23; // cl
  __int64 v24; // rax
  int v25; // eax
  unsigned __int16 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // r14
  __int16 v33; // dx
  int v34; // eax
  unsigned __int16 v35; // r9
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  int v40; // r8d
  bool v41; // zf
  int v42; // edx
  BOOL v43; // eax
  BOOL v44; // eax
  __int64 v45; // rax
  _QWORD *v46; // r15
  int v47; // eax
  unsigned __int16 v48; // r9
  struct _KEVENT *v49; // rax
  __int64 v50; // r8
  int *v51; // rdx
  unsigned __int16 *v52; // rcx
  int v53; // eax
  unsigned __int8 v54; // al
  unsigned int v55; // esi
  __int64 v56; // rax
  __int64 v58; // [rsp+28h] [rbp-E0h]
  int v59; // [rsp+28h] [rbp-E0h]
  __int64 v60; // [rsp+30h] [rbp-D8h]
  __int64 v61; // [rsp+30h] [rbp-D8h]
  char v62; // [rsp+88h] [rbp-80h]
  char v63; // [rsp+89h] [rbp-7Fh]
  __int64 v64; // [rsp+90h] [rbp-78h] BYREF
  __int64 v65; // [rsp+98h] [rbp-70h] BYREF
  char v66; // [rsp+A0h] [rbp-68h]
  __int64 v67; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v68[7]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v69[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v70[6]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v71[5]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v72[16]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v73[8]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v74[18]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v75[12]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v76[18]; // [rsp+298h] [rbp+190h] BYREF
  _QWORD v77[10]; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v78[6]; // [rsp+378h] [rbp+270h] BYREF
  int v79; // [rsp+3A8h] [rbp+2A0h]
  int v80; // [rsp+3ACh] [rbp+2A4h] BYREF
  _DWORD v81[2]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v82; // [rsp+3C8h] [rbp+2C0h]

  v2 = 0;
  v66 = a2;
  v64 = 0LL;
  v3 = 0;
  v4 = 0;
  v62 = 0;
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 2u);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFFD);
    v7 = *(_QWORD *)a1;
    if ( (*(_DWORD *)(v7 + 40) & 0x40000) == 0 || (*(_DWORD *)(a1 + 1616) & 0x20) == 0 )
      WMI_FireNotification(v7, *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL), 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)a1);
  v65 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v8);
  if ( !v65 )
  {
    v10 = -1073741670;
LABEL_8:
    v11 = 0;
    goto LABEL_70;
  }
  v3 = 1;
  memset(v74, 0, sizeof(v74));
  v74[1] = HUBPDO_EvtDeviceD0Entry;
  v74[3] = HUBPDO_EvtDeviceD0Exit;
  v74[5] = HUBPDO_EvtDevicePrepareHardware;
  v74[6] = HUBPDO_EvtDeviceReleaseHardware;
  v74[12] = HUBPDO_EvtDeviceSurpriseRemoval;
  v74[9] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v74[11] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v74[10] = HUBPDO_EvtDeviceSelfManagedIoSuspend;
  v74[17] = HUBPDO_EvtDeviceUsageNotificationEx;
  v74[14] = HUBPDO_EvtDeviceQueryStop;
  v74[13] = HUBPDO_EvtDeviceQueryRemove;
  LODWORD(v74[0]) = 144;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
    WdfDriverGlobals,
    v65,
    v74);
  memset(v73, 0, sizeof(v73));
  v73[5] = HUBPDO_EvtDeviceEnableWakeAtBus;
  v73[6] = HUBPDO_EvtDeviceDisableWakeAtBus;
  v73[7] = HUBPDO_EvtDeviceReportedMissing;
  v73[2] = HUBPDO_EvtDeviceResourceRequirementsQuery;
  LODWORD(v73[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1688))(
    WdfDriverGlobals,
    v65,
    v73);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
    WdfDriverGlobals,
    v65,
    34LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(WdfDriverGlobals, v65, 0LL);
  LOBYTE(v12) = 15;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v65,
          HUBPDO_EvtDeviceWdmIrpPreprocess,
          v12,
          0LL,
          0);
  v10 = v13;
  if ( v13 < 0 )
  {
    v15 = 98;
LABEL_11:
    LODWORD(v61) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      2u,
      v15,
      (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
      v61);
    goto LABEL_8;
  }
  v81[0] = 419564552;
  LOBYTE(v14) = 27;
  v81[1] = 336271104;
  v82 = 19;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v65,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v14,
          v81,
          9);
  v10 = v13;
  if ( v13 < 0 )
  {
    v15 = 99;
    goto LABEL_11;
  }
  LOBYTE(v81[0]) = 2;
  LOBYTE(v16) = 22;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v65,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v16,
          v81,
          1);
  v10 = v13;
  if ( v13 < 0 )
  {
    v15 = 100;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v65);
  v67 = 0x100000008LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
    WdfDriverGlobals,
    v65,
    &v67);
  v13 = HUBPDO_AssignPDOIds(a1, v65);
  v10 = v13;
  if ( v13 < 0 )
  {
    v15 = 101;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 1620) & 2) == 0 )
  {
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 1744))(
            WdfDriverGlobals,
            v65,
            &GUID_DEVCLASS_UNKNOWN);
    if ( v17 < 0 )
    {
      LODWORD(v61) = v17;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        2u,
        0x66u,
        (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
        v61);
    }
  }
  memset(v68, 0, sizeof(v68));
  v68[6] = off_1C0057118;
  v68[1] = HUBPDO_EvtDeviceCleanup;
  LODWORD(v68[0]) = 56;
  v68[3] = 0x100000001LL;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v18,
    "DSM PDO Tag",
    7776LL,
    "drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v4 = 1;
  v63 = 1;
  while ( 1 )
  {
    PdoName = HUBPDO_MakePdoName(a1, v65);
    v10 = PdoName;
    if ( PdoName < 0 )
    {
      v20 = 103;
      goto LABEL_68;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                WdfDriverGlobals,
                v65,
                &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v10 = PdoName;
    if ( PdoName < 0 )
    {
      v20 = 104;
LABEL_68:
      LODWORD(v61) = PdoName;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        v20,
        (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
        v61);
      goto LABEL_69;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                WdfDriverGlobals,
                &v65,
                v68,
                &v64);
    v10 = PdoName;
    if ( PdoName >= 0 )
      break;
    ++v2;
    if ( PdoName != -1073741771 )
      goto LABEL_26;
  }
  v4 = 0;
  v62 = 1;
  v63 = 0;
LABEL_26:
  if ( PdoName < 0 )
  {
    v20 = 105;
    goto LABEL_68;
  }
  v21 = *(_DWORD *)(a1 + 1616);
  if ( (v21 & 2) != 0 )
  {
    memset(v76, 0, 0x88uLL);
    LODWORD(v76[0]) = 66388104;
    v76[2] = HUBFDO_GetPortStatusForDebuggingComplete;
    v76[3] = HUBFDO_GetPortStatusForDebuggingComplete;
    v22 = *(_DWORD *)(a1 + 156);
    v23 = *(_BYTE *)(*(_QWORD *)a1 + 216LL) + 1;
    v76[16] = 0LL;
    LODWORD(v76[6]) = v22;
    v24 = *(_QWORD *)(a1 + 24);
    LOBYTE(v76[4]) = v23;
    BYTE5(v76[6]) = (v21 & 0x1000) != 0;
    v76[5] = v24;
    memset(v70, 0, sizeof(v70));
    v70[1] = v76;
    v70[2] = &GUID_HUB_PARENT_INTERFACE;
    v70[4] = HUBPDO_EvtDeviceProcessQueryInterfaceRequest;
    LODWORD(v70[0]) = 48;
    LOBYTE(v70[5]) = 1;
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
            WdfDriverGlobals,
            v64,
            v70);
    v10 = v25;
    if ( v25 < 0 )
    {
      v26 = 106;
      goto LABEL_32;
    }
  }
  memset(v71, 0, sizeof(v71));
  LODWORD(v71[0]) = 65576;
  v71[2] = HUBFDO_GetPortStatusForDebuggingComplete;
  v71[1] = a1;
  v71[3] = HUBFDO_GetPortStatusForDebuggingComplete;
  v71[4] = HUBPDO_GetLocationString;
  memset(v70, 0, sizeof(v70));
  v70[4] = 0LL;
  v70[1] = v71;
  v70[2] = &GUID_PNP_LOCATION_INTERFACE;
  LODWORD(v70[0]) = 48;
  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
          WdfDriverGlobals,
          v64,
          v70);
  v10 = v25;
  if ( v25 < 0 )
  {
    v26 = 107;
LABEL_32:
    LODWORD(v61) = v25;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      2u,
      v26,
      (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
      v61);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v64);
    v3 = 1;
LABEL_69:
    v11 = v62;
    goto LABEL_70;
  }
  LOBYTE(v27) = 1;
  v3 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v64,
    1LL,
    v27);
  LOBYTE(v28) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v64,
    2LL,
    v28);
  LOBYTE(v29) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v64,
    3LL,
    v29);
  LOBYTE(v30) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v64,
    4LL,
    v30);
  v31 = 5LL;
  v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v64,
          off_1C0057118);
  *(_QWORD *)(v32 + 24) = a1;
  *(_QWORD *)(v32 + 16) = *(_QWORD *)a1;
  v33 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 200LL);
  *(_DWORD *)(v32 + 388) = -1;
  *(_WORD *)(v32 + 48) = v33;
  *(_DWORD *)(v32 + 384) = 5;
  if ( a2 )
    *(_QWORD *)(v32 + 8) = *(_QWORD *)(*(_QWORD *)a1 + 2392LL);
  else
    *(_BYTE *)v32 = 1;
  *(_QWORD *)(a1 + 16) = v32;
  memset(v75, 0, sizeof(v75));
  BYTE5(v75[1]) = 1;
  *(_QWORD *)((char *)v75 + 4) = 1LL;
  LODWORD(v75[0]) = 96;
  v75[6] = HUBPDO_EvtIoInternalDeviceControl;
  v75[5] = HUBPDO_EvtIoDeviceControl;
  v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _BYTE *))(WdfFunctions_01015 + 1216))(
          WdfDriverGlobals,
          v64,
          v75,
          0LL,
          v72);
  v10 = v34;
  if ( v34 < 0 )
  {
    v35 = 108;
    goto LABEL_40;
  }
  memset(v78, 0, sizeof(v78));
  v36 = *(_DWORD *)(a1 + 1616);
  LODWORD(v78[1]) = 2;
  LODWORD(v78[2]) = 2;
  v78[3] = 2LL;
  v78[4] = 0x200000002LL;
  v78[5] = -1LL;
  HIDWORD(v78[1]) = ((v36 >> 5) & 1) == 0;
  v37 = *(_QWORD *)(a1 + 8);
  v78[0] = 0x200000030LL;
  HIDWORD(v78[2]) = (v36 >> 6) & 1;
  LODWORD(v78[5]) = *(unsigned __int16 *)(v37 + 200);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 664))(
    WdfDriverGlobals,
    v64,
    v78);
  memset(v77, 0, sizeof(v77));
  v38 = 2LL;
  LODWORD(v77[0]) = 80;
  v39 = *(_QWORD *)a1;
  *(_QWORD *)((char *)&v77[3] + 4) = 0x500000005LL;
  v40 = 2;
  *(_QWORD *)((char *)&v77[4] + 4) = 0x500000005LL;
  *(_QWORD *)((char *)&v77[5] + 4) = 0x500000005LL;
  HIDWORD(v77[6]) = 5;
  v41 = (*(_DWORD *)(a1 + 1616) & 0x102) == 0;
  v77[8] = -1LL;
  v77[9] = 0x5FFFFFFFFLL;
  *(_QWORD *)((char *)v77 + 4) = 0x200000002LL;
  *(_QWORD *)((char *)&v77[1] + 4) = 0x200000002LL;
  *(_QWORD *)((char *)&v77[2] + 4) = 0x200000002LL;
  v77[7] = 0x700000005LL;
  v42 = *(_DWORD *)(v39 + 700);
  HIDWORD(v77[7]) = v42;
  LODWORD(v77[4]) = 1;
  v77[8] = 0LL;
  LODWORD(v77[9]) = 0;
  if ( v41 )
  {
    LODWORD(v77[7]) = 1;
    *(_QWORD *)((char *)&v77[1] + 4) = 1LL;
    *(_QWORD *)((char *)&v77[2] + 4) = 0LL;
    *(_QWORD *)((char *)v77 + 4) = 0LL;
    while ( 1 )
    {
      v43 = v40++ > v42;
      *((_DWORD *)&v77[3] + ++v38) = v43 + 3;
      if ( v38 > 6 )
        break;
      v42 = HIDWORD(v77[7]);
    }
    goto LABEL_54;
  }
  LODWORD(v77[7]) = 3;
  *(_QWORD *)((char *)&v77[1] + 4) = 0x100000001LL;
  *(_QWORD *)((char *)&v77[2] + 4) = 1LL;
  *(_QWORD *)((char *)v77 + 4) = 0x100000001LL;
  while ( 1 )
  {
    v44 = v40++ > v42;
    *((_DWORD *)&v77[3] + ++v38) = v44 + 3;
    if ( v38 > 6 )
      break;
    v42 = HIDWORD(v77[7]);
  }
  if ( (*(_DWORD *)(a1 + 1440) & 0x800) != 0 )
  {
    memset(v68, 0, sizeof(v68));
    v68[3] = 0x100000001LL;
    v68[6] = off_1C00571C0;
    v68[4] = v64;
    LODWORD(v68[0]) = 56;
    v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(v39 + 16));
    v46 = (_QWORD *)(v32 + 264);
    v47 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            v68,
            v45,
            v32 + 264);
    v10 = v47;
    if ( v47 >= 0 )
    {
      v49 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                                WdfDriverGlobals,
                                *v46,
                                off_1C00571C0);
      KeInitializeEvent(v49 + 1, NotificationEvent, 0);
      goto LABEL_54;
    }
    v48 = 109;
LABEL_52:
    LODWORD(v61) = v47;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      2u,
      v48,
      (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
      v61);
    *v46 = 0LL;
LABEL_41:
    v4 = v63;
    goto LABEL_69;
  }
LABEL_54:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 672))(
    WdfDriverGlobals,
    v64,
    v77);
  KeInitializeSpinLock((PKSPIN_LOCK)(v32 + 208));
  *(_DWORD *)(v32 + 216) = 6000;
  *(_DWORD *)(v32 + 232) = 6000;
  *(_QWORD *)(v32 + 224) = &ISMStateTable;
  memset(v68, 0, sizeof(v68));
  v68[6] = off_1C0057098;
  v46 = (_QWORD *)(v32 + 256);
  v68[4] = v64;
  v68[3] = 0x100000001LL;
  v69[1] = HUBIDLE_EvtIdleWorkItem;
  v69[2] = 1LL;
  LODWORD(v68[0]) = 56;
  v69[0] = 24LL;
  v47 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
          WdfDriverGlobals,
          v69,
          v68,
          v32 + 256);
  v10 = v47;
  if ( v47 < 0 )
  {
    v48 = 110;
    goto LABEL_52;
  }
  HUBIDLE_AddEvent(v32 + 72, 6009, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v32 + 32), 0x1000u);
  v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 1064))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)a1 + 16LL),
          v64);
  v10 = v34;
  if ( v34 < 0 )
  {
    v35 = 111;
LABEL_40:
    LODWORD(v61) = v34;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      2u,
      v35,
      (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
      v61);
    goto LABEL_41;
  }
  v50 = *(_QWORD *)(v32 + 16);
  v51 = &v80;
  v52 = (unsigned __int16 *)(v50 + 298);
  v79 = *(unsigned __int16 *)(v50 + 296);
  do
  {
    v53 = *v52++;
    *v51++ = v53;
    --v31;
  }
  while ( v31 );
  v54 = *(_BYTE *)(v50 + 216);
  if ( v54 < 6u )
    *(&v79 + v54) = *(unsigned __int16 *)(v32 + 48);
  HIDWORD(v60) = HIDWORD(a1);
  WPP_RECORDER_SF_qDDDdddddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    *(unsigned __int16 *)(a1 + 1984),
    *(unsigned __int16 *)(a1 + 1982),
    *(unsigned __int16 *)(a1 + 1980),
    v59);
  v11 = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 1u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 2u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 4u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 0x10u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 8u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 0x20u);
  if ( (*(_DWORD *)(a1 + 1616) & 2) != 0 )
    HUBPDO_RegisterForPowerSettingsForHub(v32);
  else
    HUBPDO_RegisterForPowerSettingsForDevice(v32);
  v4 = v63;
LABEL_70:
  if ( v66 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x20) != 0 )
    {
      LODWORD(v60) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL);
      Template_ppqq(
        *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL),
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_COMPLETE,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(*(_QWORD *)a1 + 224LL),
        *(_QWORD *)(a1 + 24),
        v60,
        v10);
    }
  }
  else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x40) != 0 )
  {
    LODWORD(v58) = v10;
    Template_pq(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
      (const GUID *)(a1 + 1500),
      *(_QWORD *)(*(_QWORD *)a1 + 224LL),
      v58);
  }
  if ( (*(_DWORD *)(a1 + 1620) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1500) = 0LL;
    *(_QWORD *)(a1 + 1508) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFBF);
  }
  v55 = 4065;
  if ( v10 >= 0 )
    v55 = 4077;
  if ( v3 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v65);
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v64);
  if ( v4 )
  {
    v56 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v56,
      "DSM PDO Tag",
      8294LL,
      "drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  return v55;
}
