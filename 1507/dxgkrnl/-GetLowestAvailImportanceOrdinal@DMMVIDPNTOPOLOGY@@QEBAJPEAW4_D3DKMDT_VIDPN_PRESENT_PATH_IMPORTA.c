/*
 * XREFs of ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C008A208
 * Callers:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00CC54C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
        DMMVIDPNTOPOLOGY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // edx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  *a2 = D3DKMDT_VPPI_UNINITIALIZED;
  v6 = *((_DWORD *)this + 49);
  v7 = D3DKMDT_VPPI_PRIMARY;
  LODWORD(v8) = 1;
  if ( (v6 & 1) == 0 )
    goto LABEL_4;
  do
  {
    ++v7;
    v8 = (unsigned int)(2 * v8);
  }
  while ( (v6 & (unsigned int)v8) != 0 );
  if ( v7 > 32 )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = 32LL;
    *(_QWORD *)(v11 + 32) = this;
    WdLogEvent5_WdError(v11);
    return 3223192404LL;
  }
  else
  {
LABEL_4:
    *a2 = v7;
    return 0LL;
  }
}
