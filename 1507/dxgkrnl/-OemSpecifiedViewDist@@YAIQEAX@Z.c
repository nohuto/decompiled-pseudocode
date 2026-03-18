/*
 * XREFs of ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C0160CD4
 * Callers:
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00AC0F8 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall OemSpecifiedViewDist(_QWORD *a1)
{
  _DWORD *v1; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( (int)DpiReadPnpRegistryValue(a1[22], L"ViewDistanceOverride", (char *)&v3, 4u, 2) < 0 )
    return 0LL;
  v1 = &ViewDistanceArray;
  while ( v3 != *v1 )
  {
    if ( ++v1 == (_DWORD *)&Dxgk_LatencyToleranceTimerEnd )
      return 0LL;
  }
  return v3;
}
