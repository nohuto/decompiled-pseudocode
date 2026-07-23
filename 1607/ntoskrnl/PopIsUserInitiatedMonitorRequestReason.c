/*
 * XREFs of PopIsUserInitiatedMonitorRequestReason @ 0x14066C2EC
 * Callers:
 *     PopCsStateChanged @ 0x14066AA48 (PopCsStateChanged.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopIsUserInitiatedMonitorRequestReason()
{
  int v0; // ecx
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned int)PopPdcLastCsEnterReason <= 0xF )
  {
    v0 = 51202;
    if ( _bittest(&v0, PopPdcLastCsEnterReason) )
      return 1;
  }
  return result;
}
