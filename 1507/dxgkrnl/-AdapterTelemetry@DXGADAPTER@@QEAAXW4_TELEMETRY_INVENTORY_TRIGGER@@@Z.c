/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00784E4
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C000A900 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     _TlgWrite @ 0x1C000A0EC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000A190 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C000A1C8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0078CB8 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C00940F4 (-RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_.c)
 *     ?DisplayTelemetry@ADAPTER_DISPLAY@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C0095B44 (-DisplayTelemetry@ADAPTER_DISPLAY@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEA.c)
 */

char __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int16 DriverVersion; // si
  bool v7; // r14
  bool v8; // r15
  DXGADAPTER *v9; // rcx
  char result; // al
  const struct _TlgProvider_t *v11; // rcx
  unsigned __int16 *v12; // rax
  const WCHAR *v13; // rdx
  int v14; // ecx
  unsigned int v15; // edx
  LPCGUID v16; // r9
  __int16 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v19; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v20; // [rsp+36h] [rbp-CAh] BYREF
  BOOL v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  BOOL v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A0h]
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  _DWORD v39[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  __int16 *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  __int64 v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  __int64 v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  int *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  int *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  int *v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  BOOL *v61; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  BOOL *v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  int *v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  int *v67; // [rsp+1A0h] [rbp+A0h]
  __int64 v68; // [rsp+1A8h] [rbp+A8h]
  int *v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  int *v71; // [rsp+1C0h] [rbp+C0h]
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  int *v73; // [rsp+1D0h] [rbp+D0h]
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  __int16 *v75; // [rsp+1E0h] [rbp+E0h]
  __int64 v76; // [rsp+1E8h] [rbp+E8h]
  __int64 *v77; // [rsp+1F0h] [rbp+F0h]
  __int64 v78; // [rsp+1F8h] [rbp+F8h]
  __int16 *v79; // [rsp+200h] [rbp+100h]
  __int64 v80; // [rsp+208h] [rbp+108h]
  __int16 *v81; // [rsp+210h] [rbp+110h]
  __int64 v82; // [rsp+218h] [rbp+118h]
  int *v83; // [rsp+220h] [rbp+120h]
  __int64 v84; // [rsp+228h] [rbp+128h]

  EtwActivityIdControl(3u, &ActivityId);
  v4 = *(_QWORD *)(a1 + 1984);
  if ( v4 )
    ADAPTER_RENDER::RenderTelemetry(v4, *(_QWORD *)(a1 + 976), a2, &ActivityId);
  v5 = *(_QWORD *)(a1 + 1976);
  if ( v5 )
    ADAPTER_DISPLAY::DisplayTelemetry(v5, *(_QWORD *)(a1 + 976), a2, &ActivityId);
  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1);
  v7 = *(_QWORD *)(a1 + 760) != 0LL;
  v8 = *(_DWORD *)(a1 + 232) > 1u;
  result = DXGADAPTER::GetAdapterType(v9).Value;
  if ( (unsigned int)dword_1C0046830 > 5 )
  {
    result = TlgKeywordOn(v11, 0x400000000000uLL);
    if ( result )
    {
      v12 = *(unsigned __int16 **)(a1 + 976);
      v13 = *(const WCHAR **)(a1 + 1048);
      v36 = v39;
      v37 = 2LL;
      v14 = *v12;
      v38 = *((_QWORD *)v12 + 1);
      v40 = a1 + 260;
      v42 = a1 + 264;
      v44 = a1 + 268;
      v46 = a1 + 272;
      v19 = *(_WORD *)(a1 + 276);
      v39[0] = v14;
      v48 = &v19;
      v39[1] = 0;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 2LL;
      TlgCreateWsz(&pDesc, v13);
      v15 = *(_DWORD *)(a1 + 284);
      v53 = a1 + 1064;
      v51 = a1 + 1056;
      v32 = (v15 >> 5) & 1;
      v52 = 8LL;
      v55 = &v32;
      v54 = 4LL;
      v24 = (v31 >> 4) & 1;
      v57 = &v24;
      v56 = 4LL;
      v30 = (v31 >> 5) & 1;
      v59 = &v30;
      v26 = v7;
      v61 = &v26;
      v21 = v8;
      v63 = &v21;
      v65 = &v28;
      v58 = 4LL;
      v22 = (v31 >> 3) & 1;
      v67 = &v22;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v28 = (v15 >> 6) & 1;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v23 = (v31 >> 2) & 1;
      v69 = &v23;
      v25 = v31 & 1;
      v27 = (v31 >> 1) & 1;
      v71 = &v25;
      v73 = &v27;
      v75 = &v17;
      v33 = *(_QWORD *)(a1 + 252);
      v77 = &v33;
      v18 = *(_WORD *)(a1 + 1840);
      v79 = &v18;
      v20 = *(_WORD *)(a1 + 1844);
      v81 = &v20;
      v83 = (int *)&v29;
      v74 = 4LL;
      v17 = DriverVersion;
      v76 = 2LL;
      v78 = 8LL;
      v80 = 2LL;
      v82 = 2LL;
      v29 = a2;
      v84 = 4LL;
      return TlgWrite((TraceLoggingHProvider)&v25, &unk_1C002FBF2, &ActivityId, v16, 0x1Bu, &pData);
    }
  }
  return result;
}
