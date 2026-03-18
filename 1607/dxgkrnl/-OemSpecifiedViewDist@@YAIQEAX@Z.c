/*
 * XREFs of ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C018CF40
 * Callers:
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00DA348 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall OemSpecifiedViewDist(_QWORD *a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( (int)DpiReadPnpRegistryValue(a1[24], L"ViewDistanceOverride", (char *)&v3, 4u, 2u) < 0 )
    return 0LL;
  v1 = (const EVENT_DESCRIPTOR *)&ViewDistanceArray;
  while ( v3 != *(_DWORD *)&v1->Id )
  {
    v1 = (const EVENT_DESCRIPTOR *)((char *)v1 + 4);
    if ( v1 == &EventVSyncDPC )
      return 0LL;
  }
  return v3;
}
