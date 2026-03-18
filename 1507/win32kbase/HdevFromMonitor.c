/*
 * XREFs of HdevFromMonitor @ 0x1C000AFD0
 * Callers:
 *     DestroyMonitorDCs @ 0x1C000AF60 (DestroyMonitorDCs.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HdevFromMonitor(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // r9
  unsigned int v3; // r8d

  v1 = 0;
  v2 = *(_QWORD *)(gpDispInfo + 8);
  v3 = *(_DWORD *)(v2 + 20);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  while ( *(_QWORD *)(32 * (v1 + 1LL) + v2) != *(_QWORD *)(a1 + 160) )
  {
    if ( ++v1 >= v3 )
      return 0xFFFFFFFFLL;
  }
  return v1;
}
