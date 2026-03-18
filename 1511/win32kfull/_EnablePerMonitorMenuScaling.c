/*
 * XREFs of _EnablePerMonitorMenuScaling @ 0x1C0114310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnablePerMonitorMenuScaling()
{
  __int64 v0; // rdx
  int v1; // eax

  v0 = *(_QWORD *)(gptiCurrent + 376LL);
  v1 = *(_DWORD *)(v0 + 776);
  if ( (v1 & 0x4000) == 0 )
    return 0LL;
  *(_DWORD *)(v0 + 776) = v1 | 0x200000;
  return 1LL;
}
