/*
 * XREFs of ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C00054D8
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0004B84 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01A4E2C (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetContentType(DMMVIDPNPRESENTPATH *this, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  v2 = a2;
  if ( a2 > 0 && (a2 == 255 || a2 <= 2) )
  {
    *((_DWORD *)this + 41) = a2;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = v2;
    WdLogEvent5_WdError(v4);
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = v2;
    WdLogEvent5_WdWarning(v9);
    return 3223192398LL;
  }
}
