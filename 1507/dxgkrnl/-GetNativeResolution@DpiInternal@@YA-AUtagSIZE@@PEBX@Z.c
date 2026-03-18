/*
 * XREFs of ?GetNativeResolution@DpiInternal@@YA?AUtagSIZE@@PEBX@Z @ 0x1C000A094
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164AF4 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z @ 0x1C0008A70 (-HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z.c)
 */

struct tagSIZE __fastcall DpiInternal::GetNativeResolution(DpiInternal *this, const void *a2)
{
  unsigned __int8 *v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h]

  v6 = 0LL;
  if ( this )
  {
    if ( (unsigned __int8)DpiInternal::HasValidPreferredDetailedTimingDescriptor(this, this) )
    {
      LODWORD(v6) = v2[56] | (*(unsigned __int8 *)(v3 + 58) >> 4 << 8);
      HIDWORD(v6) = v2[59] | (v2[61] >> 4 << 8);
    }
    else
    {
      v5 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v5 + 24) = 663LL;
      WdLogEvent5_WdError(v5);
    }
  }
  return (struct tagSIZE)v6;
}
