/*
 * XREFs of ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C00FB174
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C00FB0F0 (--0EDIDCACHE@@QEAA@XZ.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00FB1EC (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EDIDCACHE::SetPhysicalDimensionOfInternalPanel(EDIDCACHE *this, int a2, int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int updated; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rax

  *((_BYTE *)this + 624) = a4;
  v4 = a3;
  v5 = a2;
  *((_DWORD *)this + 155) = a3;
  *((_DWORD *)this + 154) = a2;
  updated = ZwUpdateWnfStateData(&WNF_DX_INTERNAL_PANEL_DIMENSIONS, (char *)this + 616, 8LL, 0LL, 0LL, 0, 0);
  v11 = updated;
  if ( updated < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v13[3] = v11;
    v13[4] = v5;
    v13[5] = v4;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    v12 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = v4;
  }
}
