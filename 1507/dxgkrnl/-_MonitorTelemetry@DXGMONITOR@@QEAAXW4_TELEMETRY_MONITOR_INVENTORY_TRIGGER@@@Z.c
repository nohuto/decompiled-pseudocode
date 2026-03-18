/*
 * XREFs of ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00982C4
 * Callers:
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C008CD50 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C00C8E90 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C0008BBC (EDIDV1_ObtainMonitorSerialNumber.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0009EBC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     _TlgWrite @ 0x1C000A0EC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000A1C8 (_TlgKeywordOn.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000A7A4 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000A808 (EDIDV1_ObtainMonitorProductCodeID.c)
 *     EDIDV1_ObtainMonitorManufactureDate @ 0x1C000A878 (EDIDV1_ObtainMonitorManufactureDate.c)
 *     _TlgCreateSz @ 0x1C000A974 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C0097EDC (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 */

char __fastcall DXGMONITOR::_MonitorTelemetry(__int64 a1, unsigned int a2)
{
  bool v4; // si
  __int64 v5; // r8
  __int64 v6; // r9
  int HWMonitorBaseEDIDBlock; // eax
  const struct _TlgProvider_t *v8; // rcx
  unsigned __int8 *v9; // rdi
  const GUID *v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  _DWORD *v14; // r9
  const GUID *v15; // r9
  __int64 v16; // rax
  const struct _TlgProvider_t *v17; // rcx
  unsigned __int8 v18; // r8
  const struct _TlgProvider_t *v19; // rcx
  __int64 v20; // r9
  char v22; // [rsp+38h] [rbp-D0h] BYREF
  char v23; // [rsp+39h] [rbp-CFh] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-C4h] BYREF
  CHAR psz[4]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  int v29; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+54h] [rbp-B4h] BYREF
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  const struct _TlgProvider_t *v34; // [rsp+68h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  unsigned int *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  const struct _TlgProvider_t **v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  __int64 v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h] BYREF
  CHAR *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+118h] [rbp+10h] BYREF
  _QWORD *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  unsigned __int8 *v54; // [rsp+148h] [rbp+40h]
  _QWORD v55[3]; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+188h] [rbp+80h] BYREF
  char *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  int *v61; // [rsp+1A8h] [rbp+A0h]
  __int64 v62; // [rsp+1B0h] [rbp+A8h]
  int *v63; // [rsp+1B8h] [rbp+B0h]
  __int64 v64; // [rsp+1C0h] [rbp+B8h]
  int *v65; // [rsp+1C8h] [rbp+C0h]
  __int64 v66; // [rsp+1D0h] [rbp+C8h]
  int *v67; // [rsp+1D8h] [rbp+D0h]
  __int64 v68; // [rsp+1E0h] [rbp+D8h]
  __int64 *v69; // [rsp+1E8h] [rbp+E0h]
  __int64 v70; // [rsp+1F0h] [rbp+E8h]
  int *v71; // [rsp+1F8h] [rbp+F0h]
  __int64 v72; // [rsp+200h] [rbp+F8h]
  char *v73; // [rsp+208h] [rbp+100h]
  __int64 v74; // [rsp+210h] [rbp+108h]
  int *v75; // [rsp+218h] [rbp+110h]
  __int64 v76; // [rsp+220h] [rbp+118h]
  unsigned int *v77; // [rsp+228h] [rbp+120h]
  __int64 v78; // [rsp+230h] [rbp+128h]
  unsigned int *v79; // [rsp+238h] [rbp+130h]
  __int64 v80; // [rsp+240h] [rbp+138h]
  _DWORD *v81; // [rsp+248h] [rbp+140h]
  __int64 v82; // [rsp+250h] [rbp+148h]
  __int64 v83; // [rsp+258h] [rbp+150h]
  _DWORD v84[2]; // [rsp+260h] [rbp+158h] BYREF
  __int64 v85; // [rsp+268h] [rbp+160h]
  __int64 v86; // [rsp+270h] [rbp+168h]
  const struct _TlgProvider_t **v87; // [rsp+278h] [rbp+170h]
  __int64 v88; // [rsp+280h] [rbp+178h]
  CHAR v89[8]; // [rsp+288h] [rbp+180h] BYREF
  CHAR v90; // [rsp+290h] [rbp+188h] BYREF
  __int64 v91; // [rsp+291h] [rbp+189h]
  int v92; // [rsp+299h] [rbp+191h]
  char v93; // [rsp+29Dh] [rbp+195h]

  *(_QWORD *)v89 = 0LL;
  v4 = 0;
  EtwActivityIdControl(3u, &ActivityId);
  HWMonitorBaseEDIDBlock = DXGMONITOR::_GetHWMonitorBaseEDIDBlock((DXGMONITOR *)a1, (void **)v89, v5, v6);
  v9 = *(unsigned __int8 **)v89;
  if ( HWMonitorBaseEDIDBlock >= 0 )
  {
    HWMonitorBaseEDIDBlock = EDIDV1_IsEDIDBaseBlock(*(_QWORD **)v89);
    v4 = HWMonitorBaseEDIDBlock >= 0;
  }
  if ( (unsigned int)dword_1C0046830 > 5 )
  {
    LOBYTE(HWMonitorBaseEDIDBlock) = TlgKeywordOn(v8, 0x400000000000uLL);
    if ( (_BYTE)HWMonitorBaseEDIDBlock )
    {
      v26 = a2;
      v37 = &v26;
      v28 = *(_DWORD *)(a1 + 32);
      v39 = &v28;
      v41 = &v44;
      v43 = *(const struct _TlgProvider_t ***)(a1 + 80);
      v44 = *(unsigned __int16 *)(a1 + 72);
      v38 = 4LL;
      v40 = 4LL;
      v42 = 2LL;
      v46 = 4LL;
      v48 = 4LL;
      v25 = v4;
      v45 = (__int64 *)&v25;
      v47 = a1 + 28;
      v11 = *(const struct _TlgProvider_t **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL) + 252LL);
      v49 = v89;
      *(_QWORD *)v89 = v11;
      v50 = 8LL;
      LOBYTE(HWMonitorBaseEDIDBlock) = TlgWrite(v11, &unk_1C00308ED, &ActivityId, v10, 9u, &pData);
    }
  }
  if ( v9 )
  {
    memset(psz, 0, sizeof(psz));
    *(_DWORD *)&v89[1] = 0;
    v91 = 0LL;
    v92 = 0;
    v93 = 0;
    v89[0] = 0;
    v90 = 0;
    v23 = 0;
    LOWORD(v24) = 0;
    v28 = 0;
    v26 = 0;
    v30 = 0;
    v32 = 0;
    v33 = 0LL;
    v31 = 0;
    v25 = 0;
    EDIDV1_ObtainMonitorManufacturerName(v9);
    EDIDV1_ObtainMonitorProductCodeID(v9);
    EDIDV1_ObtainMonitorSerialNumber(v9, &v90);
    EDIDV1_ObtainMonitorManufactureDate(v9);
    LOBYTE(HWMonitorBaseEDIDBlock) = EDID_V1_GetPhysicalSize(v12, v9, &v28, &v26);
    v14 = *(_DWORD **)(a1 + 176);
    if ( v14 )
    {
      v30 = v14[5];
      v32 = v14[6];
      LODWORD(v33) = v14[2];
      v31 = v14[14];
      HIDWORD(v33) = v14[7];
      HWMonitorBaseEDIDBlock = v14[8];
      v25 = HWMonitorBaseEDIDBlock;
    }
    if ( (unsigned int)dword_1C0046830 > 5 )
    {
      LOBYTE(HWMonitorBaseEDIDBlock) = TlgKeywordOn(v13, 0x400000000000uLL);
      if ( (_BYTE)HWMonitorBaseEDIDBlock )
      {
        v53 = 2LL;
        v52 = v55;
        v54 = v9;
        v55[1] = a1 + 112;
        v55[0] = 128LL;
        v55[2] = 4LL;
        TlgCreateSz(&pDesc, psz);
        TlgCreateSz(&v57, v89);
        TlgCreateSz(&v58, &v90);
        v60 = 1LL;
        v61 = &v24;
        v59 = &v23;
        v62 = 2LL;
        v64 = 4LL;
        v66 = 4LL;
        v29 = v15 != 0LL;
        v63 = &v29;
        v65 = &v30;
        v67 = &v32;
        v69 = &v33;
        v71 = &v31;
        v73 = (char *)&v33 + 4;
        v75 = &v25;
        v77 = &v28;
        v79 = &v26;
        v81 = v84;
        v83 = *(_QWORD *)(a1 + 80);
        v84[0] = *(unsigned __int16 *)(a1 + 72);
        v85 = a1 + 28;
        v16 = *(_QWORD *)(a1 + 16);
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 4LL;
        v76 = 4LL;
        v78 = 4LL;
        v80 = 4LL;
        v82 = 2LL;
        v84[1] = 0;
        v86 = 4LL;
        v17 = *(const struct _TlgProvider_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL) + 252LL);
        v87 = &v34;
        v34 = v17;
        v88 = 8LL;
        LOBYTE(HWMonitorBaseEDIDBlock) = TlgWrite(v17, &unk_1C0030767, &ActivityId, v15, 0x17u, &v51);
      }
    }
    v18 = 1;
    v22 = 1;
    if ( *(_DWORD *)(a1 + 112) > 1u )
    {
      do
      {
        if ( (unsigned int)dword_1C0046830 > 5 && TlgKeywordOn((TraceLoggingHProvider)v18, 0x200000000000uLL) )
        {
          v38 = 2LL;
          v37 = (unsigned int *)&v40;
          v39 = *(unsigned int **)(a1 + 80);
          v40 = *(unsigned __int16 *)(a1 + 72);
          v29 = *(_DWORD *)(v20 + 8);
          v41 = (__int64 *)&v29;
          LODWORD(v34) = *(_DWORD *)(v20 + 12);
          v43 = &v34;
          v45 = &v48;
          v47 = v20 + 24;
          v49 = &v22;
          v42 = 4LL;
          v44 = 4LL;
          v46 = 2LL;
          v48 = 128LL;
          v50 = 1LL;
          TlgWrite(v19, &unk_1C003070D, &ActivityId, (LPCGUID)v20, 9u, &pData);
          v18 = v22;
        }
        LOBYTE(HWMonitorBaseEDIDBlock) = ++v18;
        v22 = v18;
      }
      while ( (unsigned int)v18 < *(_DWORD *)(a1 + 112) );
    }
  }
  return HWMonitorBaseEDIDBlock;
}
