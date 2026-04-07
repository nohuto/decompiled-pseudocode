/*
 * XREFs of ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x180001468
 * Callers:
 *     ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x180001D34 (-_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z.c)
 *     ?_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z @ 0x180095CC8 (-_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<HMONITOR__ *,0>::Find(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  while ( *a2 != *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0LL;
  }
  return 1LL;
}
