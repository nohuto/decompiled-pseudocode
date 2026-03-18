/*
 * XREFs of ?GetNativeResolution@DpiInternal@@YA?AUtagSIZE@@PEBX@Z @ 0x1C000A7B8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0190EE8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z @ 0x1C000A574 (-HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z.c)
 */

struct tagSIZE __fastcall DpiInternal::GetNativeResolution(DpiInternal *this, const void *a2)
{
  __int64 v2; // rbx
  unsigned __int8 *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  v2 = 0LL;
  if ( this )
  {
    if ( (unsigned __int8)DpiInternal::HasValidPreferredDetailedTimingDescriptor(this, this) )
    {
      LODWORD(v7) = v3[56] | (*(unsigned __int8 *)(v4 + 58) >> 4 << 8);
      HIDWORD(v7) = v3[59] | (v3[61] >> 4 << 8);
      return (struct tagSIZE)v7;
    }
    else
    {
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = 665LL;
      WdLogEvent5_WdError(v6);
    }
  }
  return (struct tagSIZE)v2;
}
