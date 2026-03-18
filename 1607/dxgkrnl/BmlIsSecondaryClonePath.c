/*
 * XREFs of BmlIsSecondaryClonePath @ 0x1C00BFCF4
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00BCEAC (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     BmlFunctionalizePath @ 0x1C00BD088 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00BF450 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSecondaryClonePath(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( !a2 )
    return 0;
  while ( *(_DWORD *)(*(_QWORD *)(104LL * v3 + a1 + 16) + 16LL) != *(_DWORD *)(*(_QWORD *)(104LL * a2 + a1 + 16) + 16LL) )
  {
    if ( ++v3 >= a2 )
      return 0;
  }
  if ( a3 )
    *a3 = v3;
  return 1;
}
