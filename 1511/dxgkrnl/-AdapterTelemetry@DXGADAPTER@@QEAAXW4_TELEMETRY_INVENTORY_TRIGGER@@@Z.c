/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00D6934
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C001DAE0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     _TlgKeywordOn @ 0x1C000AC10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D5D4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000D7EC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C007A2D4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C00D5BBC (-RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_.c)
 *     ?DisplayTelemetry@ADAPTER_DISPLAY@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C00DB16C (-DisplayTelemetry@ADAPTER_DISPLAY@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEA.c)
 */

unsigned __int8 __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int16 DriverVersion; // si
  bool v7; // r14
  bool v8; // r15
  DXGADAPTER *v9; // rcx
  unsigned __int8 result; // al
  const struct _TlgProvider_t *v11; // rcx
  unsigned __int16 *v12; // rax
  const WCHAR *v13; // rdx
  int v14; // ecx
  unsigned int v15; // edx
  const GUID *v16; // r9
  unsigned __int16 *v17; // rax
  const struct _TlgProvider_t *v18; // rcx
  __int16 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v20; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v22; // [rsp+36h] [rbp-CAh] BYREF
  BOOL v23; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  _DWORD v41[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  __int16 *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  __int64 v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  __int64 v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  int *v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  unsigned int *v59; // [rsp+150h] [rbp+50h]
  __int64 v60; // [rsp+158h] [rbp+58h]
  unsigned int *v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h]
  BOOL *v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]
  BOOL *v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+188h] [rbp+88h]
  int *v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+198h] [rbp+98h]
  unsigned int *v69; // [rsp+1A0h] [rbp+A0h]
  __int64 v70; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v71; // [rsp+1B0h] [rbp+B0h]
  __int64 v72; // [rsp+1B8h] [rbp+B8h]
  unsigned int *v73; // [rsp+1C0h] [rbp+C0h]
  __int64 v74; // [rsp+1C8h] [rbp+C8h]
  unsigned int *v75; // [rsp+1D0h] [rbp+D0h]
  __int64 v76; // [rsp+1D8h] [rbp+D8h]
  __int16 *v77; // [rsp+1E0h] [rbp+E0h]
  __int64 v78; // [rsp+1E8h] [rbp+E8h]
  __int64 *v79; // [rsp+1F0h] [rbp+F0h]
  __int64 v80; // [rsp+1F8h] [rbp+F8h]
  __int16 *v81; // [rsp+200h] [rbp+100h]
  __int64 v82; // [rsp+208h] [rbp+108h]
  __int16 *v83; // [rsp+210h] [rbp+110h]
  __int64 v84; // [rsp+218h] [rbp+118h]
  unsigned int *v85; // [rsp+220h] [rbp+120h]
  __int64 v86; // [rsp+228h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR v87; // [rsp+230h] [rbp+130h] BYREF
  _DWORD *v88; // [rsp+250h] [rbp+150h]
  __int64 v89; // [rsp+258h] [rbp+158h]
  __int64 v90; // [rsp+260h] [rbp+160h]
  _DWORD v91[2]; // [rsp+268h] [rbp+168h] BYREF

  EtwActivityIdControl(3u, &ActivityId);
  v4 = *(_QWORD *)(a1 + 1992);
  if ( v4 )
    ADAPTER_RENDER::RenderTelemetry(v4, *(unsigned __int16 **)(a1 + 984), a2, &ActivityId);
  v5 = *(_QWORD *)(a1 + 1984);
  if ( v5 )
    ADAPTER_DISPLAY::DisplayTelemetry(v5, *(_QWORD *)(a1 + 984), a2, &ActivityId);
  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1);
  v7 = *(_QWORD *)(a1 + 760) != 0LL;
  v8 = *(_DWORD *)(a1 + 232) > 1u;
  result = (unsigned __int8)DXGADAPTER::GetAdapterType(v9, (BOOL *)&v25);
  if ( (unsigned int)hProvider > 5 )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)(unsigned int)hProvider, 0x800000000000uLL);
    if ( result )
    {
      v12 = *(unsigned __int16 **)(a1 + 984);
      v13 = *(const WCHAR **)(a1 + 1056);
      v38 = v41;
      v39 = 2LL;
      v14 = *v12;
      v40 = *((_QWORD *)v12 + 1);
      v42 = a1 + 260;
      v44 = a1 + 264;
      v46 = a1 + 268;
      v48 = a1 + 272;
      v21 = *(_WORD *)(a1 + 276);
      v41[0] = v14;
      v50 = &v21;
      v41[1] = 0;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 2LL;
      TlgCreateWsz(&pDesc, v13);
      v15 = *(_DWORD *)(a1 + 284);
      v54 = 8LL;
      v55 = a1 + 1072;
      v53 = a1 + 1064;
      v29 = (v15 >> 6) & 1;
      v56 = 4LL;
      v57 = &v29;
      v58 = 4LL;
      v34 = (v25 >> 4) & 1;
      v59 = &v34;
      v60 = 4LL;
      v27 = (v25 >> 5) & 1;
      v61 = &v27;
      v33 = v7;
      v63 = &v33;
      v23 = v8;
      v65 = &v23;
      v67 = &v32;
      v62 = 4LL;
      v31 = (v25 >> 3) & 1;
      v69 = &v31;
      v64 = 4LL;
      v66 = 4LL;
      v32 = (v15 >> 7) & 1;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v24 = (v25 >> 2) & 1;
      v71 = &v24;
      v26 = v25 & 1;
      v28 = (v25 >> 1) & 1;
      v73 = &v26;
      v75 = &v28;
      v77 = &v19;
      v35 = *(_QWORD *)(a1 + 252);
      v79 = &v35;
      v20 = *(_WORD *)(a1 + 1848);
      v81 = &v20;
      v22 = *(_WORD *)(a1 + 1852);
      v83 = &v22;
      v85 = &v30;
      v74 = 4LL;
      v76 = 4LL;
      v19 = DriverVersion;
      v78 = 2LL;
      v80 = 8LL;
      v82 = 2LL;
      v84 = 2LL;
      v30 = a2;
      v86 = 4LL;
      result = TlgWrite((TraceLoggingHProvider)&v26, &unk_1C002FDB2, &ActivityId, (LPCGUID)1, 0x1Bu, &pData);
      v11 = (const struct _TlgProvider_t *)(unsigned int)hProvider;
    }
    if ( (unsigned int)v11 > 5 )
    {
      result = TlgKeywordOn(v11, 0x400000000000uLL);
      if ( result )
      {
        v17 = *(unsigned __int16 **)(a1 + 984);
        v88 = v91;
        v89 = 2LL;
        v18 = (const struct _TlgProvider_t *)*v17;
        v90 = *((_QWORD *)v17 + 1);
        v91[0] = (_DWORD)v18;
        v91[1] = 0;
        return TlgWrite(v18, &unk_1C002FD7A, &ActivityId, v16, 4u, &v87);
      }
    }
  }
  return result;
}
