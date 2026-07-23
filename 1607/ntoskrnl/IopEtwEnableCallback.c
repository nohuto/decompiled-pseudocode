/*
 * XREFs of IopEtwEnableCallback @ 0x140621468
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpExtensionControl @ 0x1401C5080 (IopIrpExtensionControl.c)
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
