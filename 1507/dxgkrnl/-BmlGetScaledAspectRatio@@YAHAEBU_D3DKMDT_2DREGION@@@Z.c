/*
 * XREFs of ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C009ABE8
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00995C4 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareRegionsWithPivot @ 0x1C0099798 (BmlCompareRegionsWithPivot.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetScaledAspectRatio(const struct _D3DKMDT_2DREGION *a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int cy; // ecx
  __int64 v7; // rax

  if ( !a1->cy )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  cy = a1->cy;
  if ( cy )
    return (unsigned int)((signed int)(100 * a1->cx) / cy);
  else
    return 0LL;
}
