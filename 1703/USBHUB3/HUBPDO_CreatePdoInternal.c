/*
 * XREFs of HUBPDO_CreatePdoInternal @ 0x1C006B5F4
 * Callers:
 *     HUBPDO_CreatePdo @ 0x1C006C6E8 (HUBPDO_CreatePdo.c)
 *     HUBPDO_CreateUnknownPdo @ 0x1C006C7AC (HUBPDO_CreateUnknownPdo.c)
 * Callees:
 *     Template_pq @ 0x1C00012BC (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     Template_ppqq @ 0x1C0010724 (Template_ppqq.c)
 *     WPP_RECORDER_SF_qDDDdddddd @ 0x1C0010EEC (WPP_RECORDER_SF_qDDDdddddd.c)
 *     HUBPDO_RegisterForPowerSettingsForDevice @ 0x1C0015884 (HUBPDO_RegisterForPowerSettingsForDevice.c)
 *     HUBPDO_RegisterForPowerSettingsForHub @ 0x1C00159D0 (HUBPDO_RegisterForPowerSettingsForHub.c)
 *     HUBIDLE_AddEvent @ 0x1C0032E64 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 *     HUBPDO_MakePdoName @ 0x1C006B320 (HUBPDO_MakePdoName.c)
 *     HUBPDO_AssignPDOIds @ 0x1C006B3FC (HUBPDO_AssignPDOIds.c)
 *     WMI_FireNotification @ 0x1C0074E28 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_CreatePdoInternal(__int64 a1, char a2)
{
  int v3; // r14d
  char v4; // si
  char v5; // r13
  char v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r9
  int PdoName; // eax
  __int64 v13; // r9
  unsigned __int16 v14; // r9
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r14
  int v20; // edi
  __int64 v21; // rax
  char v22; // cl
  __int64 v23; // rax
  int v24; // eax
  unsigned __int16 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r12
  __int16 v31; // cx
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  int v37; // r8d
  bool v38; // zf
  int v39; // edx
  BOOL v40; // eax
  BOOL v41; // eax
  __int64 v42; // rax
  _QWORD *v43; // r15
  int v44; // eax
  unsigned __int16 v45; // r9
  struct _KEVENT *v46; // rax
  int v47; // eax
  __int64 v48; // r8
  int *v49; // rdx
  unsigned __int16 *v50; // rcx
  int v51; // eax
  unsigned __int8 v52; // al
  unsigned int v53; // edi
  __int64 v54; // rax
  ULONG RemlockSize[2]; // [rsp+28h] [rbp-E0h]
  int RemlockSizea; // [rsp+28h] [rbp-E0h]
  __int64 v58; // [rsp+30h] [rbp-D8h]
  __int64 v59; // [rsp+30h] [rbp-D8h]
  char v60; // [rsp+88h] [rbp-80h]
  char v61; // [rsp+89h] [rbp-7Fh]
  __int64 v63; // [rsp+98h] [rbp-70h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v66[7]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v67[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v68[6]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v69[5]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v70[16]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v71[8]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v72[18]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v73[12]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v74[18]; // [rsp+298h] [rbp+190h] BYREF
  _QWORD v75[10]; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v76[6]; // [rsp+378h] [rbp+270h] BYREF
  int v77; // [rsp+3A8h] [rbp+2A0h]
  int v78; // [rsp+3ACh] [rbp+2A4h] BYREF
  _DWORD v79[2]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v80; // [rsp+3C8h] [rbp+2C0h]

  v60 = 0;
  v63 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
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
  v64 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v8);
  if ( v64 )
  {
    v5 = 1;
    memset(v72, 0, sizeof(v72));
    v72[1] = HUBPDO_EvtDeviceD0Entry;
    v72[3] = HUBPDO_EvtDeviceD0Exit;
    v72[5] = HUBPDO_EvtDevicePrepareHardware;
    v72[6] = HUBPDO_EvtDeviceReleaseHardware;
    v72[12] = HUBPDO_EvtDeviceSurpriseRemoval;
    v72[9] = HUBPDO_EvtDeviceSelfManagedIoInit;
    v72[11] = HUBPDO_EvtDeviceSelfManagedIoInit;
    v72[10] = HUBPDO_EvtDeviceSelfManagedIoSuspend;
    v72[17] = HUBPDO_EvtDeviceUsageNotificationEx;
    v72[14] = HUBPDO_EvtDeviceQueryStop;
    v72[13] = HUBPDO_EvtDeviceQueryRemove;
    LODWORD(v72[0]) = 144;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
      WdfDriverGlobals,
      v64,
      v72);
    memset(v71, 0, sizeof(v71));
    v71[5] = HUBPDO_EvtDeviceEnableWakeAtBus;
    v71[6] = HUBPDO_EvtDeviceDisableWakeAtBus;
    v71[7] = HUBPDO_EvtDeviceReportedMissing;
    v71[2] = HUBPDO_EvtDeviceResourceRequirementsQuery;
    LODWORD(v71[0]) = 64;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1688))(
      WdfDriverGlobals,
      v64,
      v71);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
      WdfDriverGlobals,
      v64,
      34LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(
      WdfDriverGlobals,
      v64,
      0LL);
    LOBYTE(v11) = 15;
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                WdfDriverGlobals,
                v64,
                HUBPDO_EvtDeviceWdmIrpPreprocess,
                v11,
                0LL,
                0);
    v10 = PdoName;
    if ( PdoName >= 0 )
    {
      v79[0] = 419564552;
      LOBYTE(v13) = 27;
      v79[1] = 336271104;
      v80 = 19;
      PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
                  WdfDriverGlobals,
                  v64,
                  HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
                  v13,
                  v79,
                  9);
      v10 = PdoName;
      if ( PdoName >= 0 )
      {
        LOBYTE(v79[0]) = 2;
        LOBYTE(v15) = 22;
        PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
                    WdfDriverGlobals,
                    v64,
                    HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
                    v15,
                    v79,
                    1);
        v10 = PdoName;
        if ( PdoName >= 0 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v64);
          v65 = 0x100000008LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
            WdfDriverGlobals,
            v64,
            &v65);
          PdoName = HUBPDO_AssignPDOIds(a1, v64);
          v10 = PdoName;
          if ( PdoName >= 0 )
          {
            if ( (*(_DWORD *)(a1 + 1620) & 2) == 0 )
            {
              v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 1744))(
                      WdfDriverGlobals,
                      v64,
                      &GUID_DEVCLASS_UNKNOWN);
              if ( v16 < 0 )
              {
                LODWORD(v59) = v16;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                  3u,
                  2u,
                  0x67u,
                  (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
                  v59);
              }
            }
            memset(v66, 0, sizeof(v66));
            v66[6] = off_1C005B070;
            v66[1] = HUBPDO_EvtDeviceCleanup;
            LODWORD(v66[0]) = 56;
            v66[3] = 0x100000001LL;
            v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    a1);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
              WdfDriverGlobals,
              v17,
              "DSM PDO Tag",
              7823LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
            v6 = 1;
            v61 = 1;
            while ( 1 )
            {
              PdoName = HUBPDO_MakePdoName(a1, v64);
              v10 = PdoName;
              if ( PdoName < 0 )
                break;
              PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                          WdfDriverGlobals,
                          v64,
                          &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
              v10 = PdoName;
              if ( PdoName < 0 )
              {
                v14 = 105;
                goto LABEL_68;
              }
              v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                      WdfDriverGlobals,
                      &v64,
                      v66,
                      &v63);
              v10 = v18;
              if ( v18 >= 0 )
              {
                v60 = 1;
                v6 = 0;
                v61 = 0;
LABEL_26:
                if ( v18 < 0 )
                {
                  LODWORD(v59) = v18;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                    2u,
                    2u,
                    0x6Au,
                    (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
                    v59);
LABEL_28:
                  v4 = v60;
                  goto LABEL_69;
                }
                v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v63,
                        off_1C005B070);
                IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v19 + 416), 0x55535257u, 0, 0, 0x20u);
                v20 = *(_DWORD *)(a1 + 1616);
                if ( (v20 & 2) != 0 )
                {
                  memset(v74, 0, 0x88uLL);
                  v74[3] = HUBFDO_GetPortStatusForDebuggingComplete;
                  v21 = *(_QWORD *)a1;
                  v74[2] = HUBFDO_GetPortStatusForDebuggingComplete;
                  v5 = 1;
                  LODWORD(v74[0]) = 66388104;
                  v22 = *(_BYTE *)(v21 + 232);
                  LODWORD(v74[6]) = *(_DWORD *)(a1 + 156);
                  v23 = *(_QWORD *)(a1 + 24);
                  LOBYTE(v74[4]) = v22 + 1;
                  BYTE5(v74[6]) = (v20 & 0x1000) != 0;
                  v74[5] = v23;
                  v74[16] = 0LL;
                  memset(v68, 0, sizeof(v68));
                  v68[1] = v74;
                  v68[2] = &GUID_HUB_PARENT_INTERFACE;
                  v68[4] = HUBPDO_EvtDeviceProcessQueryInterfaceRequest;
                  LODWORD(v68[0]) = 48;
                  LOBYTE(v68[5]) = 1;
                  v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                          WdfDriverGlobals,
                          v63,
                          v68);
                  v10 = v24;
                  if ( v24 < 0 )
                  {
                    v25 = 107;
LABEL_32:
                    LODWORD(v59) = v24;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      2u,
                      2u,
                      v25,
                      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
                      v59);
                    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                      WdfDriverGlobals,
                      v63);
                    goto LABEL_28;
                  }
                }
                else
                {
                  v5 = 1;
                }
                memset(v69, 0, sizeof(v69));
                LODWORD(v69[0]) = 65576;
                v69[2] = HUBFDO_GetPortStatusForDebuggingComplete;
                v69[1] = a1;
                v69[3] = HUBFDO_GetPortStatusForDebuggingComplete;
                v69[4] = HUBPDO_GetLocationString;
                memset(v68, 0, sizeof(v68));
                v68[1] = v69;
                v68[2] = &GUID_PNP_LOCATION_INTERFACE;
                LODWORD(v68[0]) = 48;
                v68[4] = 0LL;
                v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                        WdfDriverGlobals,
                        v63,
                        v68);
                v10 = v24;
                if ( v24 < 0 )
                {
                  v25 = 108;
                  goto LABEL_32;
                }
                LOBYTE(v26) = 1;
                v5 = 0;
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                  WdfDriverGlobals,
                  v63,
                  1LL,
                  v26);
                LOBYTE(v27) = 1;
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                  WdfDriverGlobals,
                  v63,
                  2LL,
                  v27);
                LOBYTE(v28) = 1;
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                  WdfDriverGlobals,
                  v63,
                  3LL,
                  v28);
                LOBYTE(v29) = 1;
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                  WdfDriverGlobals,
                  v63,
                  4LL,
                  v29);
                *(_QWORD *)(v19 + 24) = a1;
                v30 = 5LL;
                *(_QWORD *)(v19 + 16) = *(_QWORD *)a1;
                v31 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 200LL);
                *(_DWORD *)(v19 + 388) = -1;
                *(_WORD *)(v19 + 48) = v31;
                *(_DWORD *)(v19 + 384) = 5;
                if ( a2 )
                  *(_QWORD *)(v19 + 8) = *(_QWORD *)(*(_QWORD *)a1 + 2416LL);
                else
                  *(_BYTE *)v19 = 1;
                *(_QWORD *)(a1 + 16) = v19;
                memset(v73, 0, sizeof(v73));
                LODWORD(v73[1]) = 0;
                BYTE5(v73[1]) = 1;
                v73[0] = 0x100000060LL;
                v73[6] = HUBPDO_EvtIoInternalDeviceControl;
                v73[5] = HUBPDO_EvtIoDeviceControl;
                v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _BYTE *))(WdfFunctions_01015 + 1216))(
                        WdfDriverGlobals,
                        v63,
                        v73,
                        0LL,
                        v70);
                v10 = v32;
                if ( v32 < 0 )
                {
                  LODWORD(v59) = v32;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                    2u,
                    2u,
                    0x6Du,
                    (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
                    v59);
LABEL_41:
                  v4 = v60;
                  goto LABEL_69;
                }
                memset(v76, 0, sizeof(v76));
                v33 = *(_DWORD *)(a1 + 1616);
                LODWORD(v76[1]) = 2;
                LODWORD(v76[2]) = 2;
                v76[3] = 2LL;
                v76[4] = 0x200000002LL;
                v76[5] = -1LL;
                HIDWORD(v76[1]) = ((v33 >> 5) & 1) == 0;
                v34 = *(_QWORD *)(a1 + 8);
                v76[0] = 0x200000030LL;
                HIDWORD(v76[2]) = (v33 >> 6) & 1;
                LODWORD(v76[5]) = *(unsigned __int16 *)(v34 + 200);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 664))(
                  WdfDriverGlobals,
                  v63,
                  v76);
                memset(v75, 0, sizeof(v75));
                v35 = 2LL;
                LODWORD(v75[0]) = 80;
                v36 = *(_QWORD *)a1;
                *(_QWORD *)((char *)&v75[3] + 4) = 0x500000005LL;
                v37 = 2;
                *(_QWORD *)((char *)&v75[4] + 4) = 0x500000005LL;
                *(_QWORD *)((char *)&v75[5] + 4) = 0x500000005LL;
                HIDWORD(v75[6]) = 5;
                v38 = (*(_DWORD *)(a1 + 1616) & 0x102) == 0;
                v75[8] = -1LL;
                v75[9] = 0x5FFFFFFFFLL;
                *(_QWORD *)((char *)v75 + 4) = 0x200000002LL;
                *(_QWORD *)((char *)&v75[1] + 4) = 0x200000002LL;
                *(_QWORD *)((char *)&v75[2] + 4) = 0x200000002LL;
                v75[7] = 0x700000005LL;
                v39 = *(_DWORD *)(v36 + 724);
                HIDWORD(v75[7]) = v39;
                LODWORD(v75[4]) = 1;
                v75[8] = 0LL;
                LODWORD(v75[9]) = 0;
                if ( v38 )
                {
                  LODWORD(v75[7]) = 1;
                  *(_QWORD *)((char *)&v75[1] + 4) = 1LL;
                  *(_QWORD *)((char *)&v75[2] + 4) = 0LL;
                  *(_QWORD *)((char *)v75 + 4) = 0LL;
                  while ( 1 )
                  {
                    v40 = v37++ > v39;
                    *((_DWORD *)&v75[3] + ++v35) = v40 + 3;
                    if ( v35 > 6 )
                      break;
                    v39 = HIDWORD(v75[7]);
                  }
                  goto LABEL_55;
                }
                LODWORD(v75[7]) = 3;
                *(_QWORD *)((char *)&v75[1] + 4) = 0x100000001LL;
                *(_QWORD *)((char *)&v75[2] + 4) = 1LL;
                *(_QWORD *)((char *)v75 + 4) = 0x100000001LL;
                while ( 1 )
                {
                  v41 = v37++ > v39;
                  *((_DWORD *)&v75[3] + ++v35) = v41 + 3;
                  if ( v35 > 6 )
                    break;
                  v39 = HIDWORD(v75[7]);
                }
                if ( (*(_DWORD *)(a1 + 1440) & 0x800) != 0 )
                {
                  memset(v66, 0, sizeof(v66));
                  v66[3] = 0x100000001LL;
                  v66[6] = off_1C005B208;
                  v66[4] = v63;
                  LODWORD(v66[0]) = 56;
                  v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v36 + 16));
                  v43 = (_QWORD *)(v19 + 264);
                  v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
                          WdfDriverGlobals,
                          v66,
                          v42,
                          v19 + 264);
                  v10 = v44;
                  if ( v44 >= 0 )
                  {
                    v46 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                                              WdfDriverGlobals,
                                              *v43,
                                              off_1C005B208);
                    KeInitializeEvent(v46 + 1, NotificationEvent, 0);
                    goto LABEL_55;
                  }
                  v45 = 110;
LABEL_52:
                  LODWORD(v59) = v44;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                    2u,
                    2u,
                    v45,
                    (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
                    v59);
                  v4 = v60;
                  *v43 = 0LL;
                }
                else
                {
LABEL_55:
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 672))(
                    WdfDriverGlobals,
                    v63,
                    v75);
                  KeInitializeSpinLock((PKSPIN_LOCK)(v19 + 208));
                  *(_DWORD *)(v19 + 216) = 6000;
                  *(_DWORD *)(v19 + 232) = 6000;
                  *(_QWORD *)(v19 + 224) = &ISMStateTable;
                  memset(v66, 0, sizeof(v66));
                  v66[6] = off_1C005B1E0;
                  v43 = (_QWORD *)(v19 + 256);
                  v66[4] = v63;
                  v66[3] = 0x100000001LL;
                  v67[1] = HUBIDLE_EvtIdleWorkItem;
                  v67[2] = 1LL;
                  LODWORD(v66[0]) = 56;
                  v67[0] = 24LL;
                  v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
                          WdfDriverGlobals,
                          v67,
                          v66,
                          v19 + 256);
                  v10 = v44;
                  if ( v44 < 0 )
                  {
                    v45 = 111;
                    goto LABEL_52;
                  }
                  HUBIDLE_AddEvent(v19 + 72, 6009, 0LL);
                  _InterlockedOr((volatile signed __int32 *)(v19 + 32), 0x1000u);
                  v47 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 1064))(
                          WdfDriverGlobals,
                          *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                          v63);
                  v10 = v47;
                  if ( v47 < 0 )
                  {
                    LODWORD(v59) = v47;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      2u,
                      2u,
                      0x70u,
                      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
                      v59);
                    v6 = v61;
                    goto LABEL_41;
                  }
                  v48 = *(_QWORD *)(v19 + 16);
                  v49 = &v78;
                  v50 = (unsigned __int16 *)(v48 + 314);
                  v77 = *(unsigned __int16 *)(v48 + 312);
                  do
                  {
                    v51 = *v50++;
                    *v49++ = v51;
                    --v30;
                  }
                  while ( v30 );
                  v52 = *(_BYTE *)(v48 + 232);
                  if ( v52 < 6u )
                    *(&v77 + v52) = *(unsigned __int16 *)(v19 + 48);
                  HIDWORD(v58) = HIDWORD(a1);
                  WPP_RECORDER_SF_qDDDdddddd(
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                    *(unsigned __int16 *)(a1 + 1984),
                    *(unsigned __int16 *)(a1 + 1982),
                    *(unsigned __int16 *)(a1 + 1980),
                    RemlockSizea);
                  v4 = 0;
                  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 1u);
                  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 2u);
                  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 4u);
                  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 0x10u);
                  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 8u);
                  _InterlockedOr((volatile signed __int32 *)(a1 + 2204), 0x20u);
                  if ( (*(_DWORD *)(a1 + 1616) & 2) != 0 )
                    HUBPDO_RegisterForPowerSettingsForHub(v19);
                  else
                    HUBPDO_RegisterForPowerSettingsForDevice(v19);
                }
                v6 = v61;
                goto LABEL_69;
              }
              ++v3;
              if ( v18 != -1073741771 )
                goto LABEL_26;
            }
            v14 = 104;
          }
          else
          {
            v14 = 102;
          }
        }
        else
        {
          v14 = 101;
        }
      }
      else
      {
        v14 = 100;
      }
    }
    else
    {
      v14 = 99;
    }
LABEL_68:
    LODWORD(v59) = PdoName;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      2u,
      v14,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
      v59);
    v4 = 0;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_69:
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
    {
      LODWORD(v58) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL);
      Template_ppqq(
        *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL),
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_COMPLETE,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(*(_QWORD *)a1 + 240LL),
        *(_QWORD *)(a1 + 24),
        v58,
        v10);
    }
  }
  else if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
  {
    RemlockSize[0] = v10;
    Template_pq(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
      (const GUID *)(a1 + 1500),
      *(_QWORD *)(*(_QWORD *)a1 + 240LL),
      *(_QWORD *)RemlockSize);
  }
  if ( (*(_DWORD *)(a1 + 1620) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1500) = 0LL;
    *(_QWORD *)(a1 + 1508) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFBF);
  }
  v53 = (v10 >> 31) & 0xFFFFFFF4;
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v64);
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v63);
  if ( v6 )
  {
    v54 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v54,
      "DSM PDO Tag",
      8343LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  return v53 + 4077;
}
