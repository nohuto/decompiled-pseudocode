/*
 * XREFs of IopEtwEnableCallback @ 0x1406213B4
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpExtensionControl @ 0x1401C519C (IopIrpExtensionControl.c)
 */

void __fastcall IopEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( ControlCode != 1 )
      return;
  }
  else
  {
    ControlCode = 0;
  }
  IopIrpExtensionControl(1, ControlCode);
}
