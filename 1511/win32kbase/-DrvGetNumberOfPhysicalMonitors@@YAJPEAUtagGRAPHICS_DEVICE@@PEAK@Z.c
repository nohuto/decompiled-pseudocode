/*
 * XREFs of ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C0083804
 * Callers:
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00824C0 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0082540 (DrvCreatePhysicalMonitorObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetNumberOfPhysicalMonitors(struct tagGRAPHICS_DEVICE *a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  _DWORD *v4; // rcx
  __int64 v5; // r9

  v2 = *((_DWORD *)a1 + 56);
  v3 = 0;
  if ( !v2 )
    return 3223193061LL;
  v4 = (_DWORD *)*((_QWORD *)a1 + 29);
  v5 = v2;
  do
  {
    if ( (*v4 & 1) != 0 )
      ++v3;
    v4 += 5;
    --v5;
  }
  while ( v5 );
  if ( !v3 )
    return 3223193061LL;
  *a2 = v3;
  return 0LL;
}
