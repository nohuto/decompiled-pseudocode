/*
 * XREFs of MinimumMonitorDpi @ 0x1C00569C8
 * Callers:
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z @ 0x1C0055E68 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 *     ExpandedMonitorSpace @ 0x1C00A6530 (ExpandedMonitorSpace.c)
 * Callees:
 *     <none>
 */

unsigned __int16 MinimumMonitorDpi()
{
  __int64 v0; // rdx
  unsigned __int16 result; // ax
  unsigned __int16 v2; // cx

  v0 = *(_QWORD *)(gpDispInfo + 96);
  result = *(_WORD *)(v0 + 152);
  do
  {
    v2 = *(_WORD *)(v0 + 152);
    v0 = *(_QWORD *)(v0 + 16);
    if ( result >= v2 )
      result = v2;
  }
  while ( v0 );
  return result;
}
