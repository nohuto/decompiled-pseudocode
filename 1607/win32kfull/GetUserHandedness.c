/*
 * XREFs of GetUserHandedness @ 0x1C0134F20
 * Callers:
 *     ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C0229304 (-_GetNonRejectionRegion@PalmRejection@@YA-AUtagRECT@@PEAX@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C023CB30 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023DA94 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetUserHandedness()
{
  if ( (unsigned int)RIMIsDefaultUILanguageRTL() )
  {
    if ( *(_DWORD *)(gpsi + 2040LL) )
      return 1LL;
  }
  else if ( !*(_DWORD *)(gpsi + 2040LL) )
  {
    return 1LL;
  }
  return 2LL;
}
