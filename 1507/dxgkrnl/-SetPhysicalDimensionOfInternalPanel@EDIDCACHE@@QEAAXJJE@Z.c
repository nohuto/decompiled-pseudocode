/*
 * XREFs of ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C00DBF00
 * Callers:
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C00DBE5C (--0EDIDCACHE@@QEAA@XZ.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00DBF78 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EDIDCACHE::SetPhysicalDimensionOfInternalPanel(EDIDCACHE *this, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int updated; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rax

  v3 = a3;
  v4 = a2;
  *((_DWORD *)this + 251) = a3;
  *((_BYTE *)this + 1008) = 0;
  *((_DWORD *)this + 250) = a2;
  updated = ZwUpdateWnfStateData(&WNF_DX_INTERNAL_PANEL_DIMENSIONS, (char *)this + 1000, 8LL, 0LL, 0LL, 0, 0);
  v10 = updated;
  if ( updated < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v12[3] = v10;
    v12[4] = v4;
    v12[5] = v3;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    v11 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = v4;
    *(_QWORD *)(v11 + 32) = v3;
  }
}
