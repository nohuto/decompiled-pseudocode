/*
 * XREFs of ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0009EBC
 * Callers:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00982C4 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00DBF78 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAA_NPEAEI@Z @ 0x1C0009FE0 (-Initialize@EDID_PARSER@MonDescParser@@QEAA_NPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_GetPhysicalSize(__int64 a1, unsigned __int8 *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // r10d
  unsigned int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // eax
  _QWORD v14[12]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  v14[10] = 0LL;
  if ( MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v14, a2, (unsigned int)a3) )
  {
    v7 = 10 * *(unsigned __int8 *)(v14[0] + 21LL);
    v8 = 10 * *(unsigned __int8 *)(v14[0] + 22LL);
    if ( (*(_WORD *)(v14[0] + 54LL)
       || *(_BYTE *)(v14[0] + 56LL)
       || *(_BYTE *)(v14[0] + 58LL) && *(_BYTE *)(v14[0] + 57LL) != 0xFD)
      && ((v9 = *(unsigned __int8 *)(v14[0] + 66LL) + (*(unsigned __int8 *)(v14[0] + 68LL) >> 4 << 8),
           v10 = *(unsigned __int8 *)(v14[0] + 67LL) + ((*(_BYTE *)(v14[0] + 68LL) & 0xF) << 8),
           v9 < v7)
        ? (v11 = v7 - v9)
        : (v11 = v9 - v7),
          v11 < 0xA && (v10 < v8 ? (v12 = v8 - v10) : (v12 = v10 - v8), v12 < 0xA)) )
    {
      *a3 = v9;
      *a4 = v10;
    }
    else
    {
      *a3 = v7;
      *a4 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
