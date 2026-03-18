/*
 * XREFs of MinimumMonitorDpi @ 0x1C00591E4
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C005910C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     ExpandedMonitorSpace @ 0x1C00B93A0 (ExpandedMonitorSpace.c)
 * Callees:
 *     <none>
 */

unsigned __int16 MinimumMonitorDpi()
{
  __int64 v0; // rdx
  unsigned __int16 result; // ax
  unsigned __int16 v2; // cx

  v0 = *(_QWORD *)(gpDispInfo + 96);
  result = *(_WORD *)(v0 + 154);
  do
  {
    v2 = *(_WORD *)(v0 + 154);
    v0 = *(_QWORD *)(v0 + 16);
    if ( result >= v2 )
      result = v2;
  }
  while ( v0 );
  return result;
}
